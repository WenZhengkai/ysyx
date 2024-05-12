#include <stdio.h>
#include "test_stdio.c"
char *s[] = {
	"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa",
	"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaab",
	"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa",
	",World!\n",
	"Hello, World!\n",
	"#####"
};
char str1[] = "Hello";
char str[20];
char buf[128];
int main(){
	printf("%d\n",
		strlen(s[5]));
		int num1 = 123;
	int num2 = -456;
	int num3 = 0;
	char buffer1[20];
	char buffer2[20];
	char buffer3[20];
	int l1,l2,l3;

	l1 = int_to_string(num1,buffer1);
	l2 = int_to_string(num2,buffer2);
	l3 = int_to_string(num3,buffer3);
	printf("num1 as string: %s length: %d \n", buffer1, l1);
	printf("num2 as string: %s length: %d \n", buffer2, l2);
	printf("num3 as string: %s length: %d \n", buffer3, l3);

	sprintf(str,"%s+%d%s+%dy\n",s[4],num1,s[5],num2);
	printf("%s",str);
	sprintf(buf, "%s", "Hello world!\n");
	printf("%s",buf);
	sprintf(buf, "%d + %d = %d\n",1,1,2);
	printf("%s",buf);
	sprintf(buf, "%d + %d = %d\n",2,10,12);
	printf("%s",buf);
	

	return 0;
}
