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
  //panic("Not implemented");
      // 如果 n 为 0，直接返回 0，表示两字符串相等
	  if (n == 0) {
        return 0;
    }

    while (n--) {
        // 比较两个字符
        if (*s1 != *s2) {
            // 返回两字符的差值
            return (unsigned char)*s1 - (unsigned char)*s2;
        }

        // 如果到达字符串末尾，退出循环
        if (*s1 == '\0' || *s2 == '\0') {
            break;
        }

        // 移动到下一个字符
        s1++;
        s2++;
    }

    return 0; // 如果前 n 个字符都相等，则返回 0
}

void *memset(void *s, int c, size_t n) {
//  panic("Not implemented");
	char *xs = s;
	while(n--)
		*xs++ = c;
	return s;
}

void *memmove(void *dst, const void *src, size_t n) {
//  panic("Not implemented");
	char *move_dst = (char *)dst;
	const char * move_src = (const char *)src;
	if(dst < src){
		for(int i = 0; i < n; i++){
			move_dst[i] = move_src[i];
		}
	}
	else{
		for(int i = n; i > 0; i--){
			move_dst[i - 1] = move_src[i- 1];
		}
	}
	return dst;
}

void *memcpy(void *out, const void *in, size_t n) {
  //panic("Not implemented");
    // Cast the void pointers to char pointers for byte-wise copying
    char *d = (char *)out;
    const char *s = (const char *)in;

    // Copy n bytes from in to out
    for (size_t i = 0; i < n; i++) {
        d[i] = s[i];
    }

    // Return the destination pointer
    return out;
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
