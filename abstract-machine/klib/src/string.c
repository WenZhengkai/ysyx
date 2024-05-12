#include <klib.h>
#include <klib-macros.h>
#include <stdint.h>
#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

size_t strlen(const char *s) {
//  panic("Not implemented");
	int i = 0;
	while(s[i]!='\0'){
		i++;
	}
	return i;
}

char *strcpy(char *dst, const char *src) {
//  panic("Not implemented");
	char *p = NULL;
	if(dst == NULL || src == NULL)
		return NULL;
	p = dst;
	while((*dst++ = *src++) != '\0');
	return p;
}

char *strncpy(char *dst, const char *src, size_t n) {
  panic("Not implemented");
}

char *strcat(char *dst, const char *src) {
//  panic("Not implemented");
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

int strcmp(const char *s1, const char *s2) {
//  panic("Not implemented");
	while((*s1 != '\0') && (*s1 == *s2)){
		s1++;
		s2++;
	}
	int t;
	t = *s1 - *s2;
	return t;
}

int strncmp(const char *s1, const char *s2, size_t n) {
  panic("Not implemented");
}

void *memset(void *s, int c, size_t n) {
//  panic("Not implemented");
	char *xs = s;
	while(n--)
		*xs++ = c;
	return s;
}

void *memmove(void *dst, const void *src, size_t n) {
  panic("Not implemented");
}

void *memcpy(void *out, const void *in, size_t n) {
  panic("Not implemented");
}

int memcmp(const void *s1, const void *s2, size_t n) {
//  panic("Not implemented");
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

#endif
