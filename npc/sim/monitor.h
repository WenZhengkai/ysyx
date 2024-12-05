#include<stdint.h>
#include<cassert>
#include "paddr.h"
static char  *img_file;
int parse_args(int argc, char* argv[]){
	img_file = argv[1];
	return 0;
}
static long load_img(){
	if(img_file == NULL){
		printf("No image is given. Use the default build-in image\n");
		return 4096;
	}

	FILE *fp = fopen(img_file, "rb");
	assert(fp!=NULL);

	fseek(fp, 0, SEEK_END);
	long size = ftell(fp);

	printf("The image is %s, size = %ld\n", img_file, size);

	fseek(fp, 0, SEEK_SET);
	int ret = fread(guest_to_host(RESET_VECTOR), size, 1, fp);
	assert(ret ==  1);

	fclose(fp);
	return size;
}
