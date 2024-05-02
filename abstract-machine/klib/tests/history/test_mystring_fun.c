#include <stdio.h>
#include "test_stdio.c"
#include "test_string.c"
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
char *strcpy(char *dst, const char *src){
	char *p = NULL;
	if(dst == NULL || src == NULL)
		return NULL;
	p = dst;
	while((*dst++ = *src++)!='\0');
	return p;
}
char *strcat(char *dst, const char *src){
	if(dst == NULL || src == NULL)
		return NULL;
	char *p = dst;
	while(*p != '\0')
		p++;
	while(*src != '\0'){
		*p = *src;
		p++;
		src++;
	}
	*p = '\0';
	return dst;
}
int strcmp(const char *s1, const char *s2){
	while((*s1 != '\0') && (*s1 == *s2)){
		s1++;
		s2++;
	}
	int t;
	t = *s1- *s2;
	return t;
}
void *memset(void *s, int c, size_t n){
	char *xs = s;
	while(n--)
		*xs++ = c;
	return s;
}
int memcmp(const void *s1, const void *s2, size_t n){
	char *buffer1 = (char *)s1;
	char *buffer2 = (char *)s2;
	if(!n)
		return 0;
	while(--n && *buffer1 == *buffer2){
		buffer1++;
		buffer2++;
	}
	return (*buffer1 - *buffer2);
}
int main(){
	printf("%d\n%d\n%d\n%d\n%d\n%s\n%d\n",
		strcmp(s[0],s[2]),
		strcmp(s[0],s[1]),
		strcmp(s[0]+1,s[1]+1),
		strcmp(s[0]+2,s[1]+2),
		strcmp(s[0]+3,s[1]+3),
		strcat(strcpy(str,str1), s[3]),
		memcmp(memset(str, '#', 5),s[5],5));

	return 0;
}
