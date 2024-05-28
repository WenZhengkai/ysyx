#include <am.h>
#include <klib.h>
#include <klib-macros.h>
#include <stdarg.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

#define MAX_PRINT_SIZE 256 
int int_to_string(int num, char *buffer);
int printf(const char *fmt, ...) {
  //panic("Not implemented");
	va_list ap;
  	char out[MAX_PRINT_SIZE]={};
	int done;
	va_start(ap,fmt);
	done = vsprintf(out, fmt, ap);
	va_end(ap);
	int i=0;
	while(out[i] != '\0'){
		putch(out[i]);
		i++;
	}
	return done;
}

int vsprintf(char *out, const char *fmt, va_list ap) {
  //panic("Not implemented");
  // to think that next code is wirtten
//	va_start(ap, fmt);
	int fmti = 0;
	int outi = 0;
	while(*(fmt + fmti)!='\0'){
		if(fmt[fmti] == '%'){
			fmti++;
			switch(fmt[fmti]){
				case 's':{
					char *arg_str = va_arg(ap, char *);
					int arg_str_len = strlen(arg_str);
					strcpy(out + outi, arg_str);
					outi+=arg_str_len;
					break;
					 }
				case 'd':{
					int arg_int = va_arg(ap, int);
					int arg_str_len = int_to_string(arg_int, out + outi);
					outi+=arg_str_len;
					break;
					 }
				default:
					break;	 
			}	
		} else{
			out[outi] = fmt[fmti];
			outi++;
		}
		fmti++;	
		if(outi >= MAX_PRINT_SIZE - 1){
			break;
		}
	}
	if(outi >= MAX_PRINT_SIZE - 1){
		out[MAX_PRINT_SIZE-1] = '\0';	
	}else{
		out[outi] = '\0';
	}
// to think that next code will be written
	//va_end(ap);
	return strlen(out);
}
int int_to_string(int num, char *buffer)
{
	if(num == 0){
		buffer[0] = '0';
		buffer[1] = '\0';
		return 1;
	}
	int i = 0;
	char is_pos = 1;
	if(num < 0){
		buffer[0] = '-';
		i = 1;
		num = -num;
		is_pos = 0;
	}
	int length = 0;
	int temp = num;
	while(temp > 0){
		temp /= 10;
		length++;
	}
	int str_len = is_pos == 1 ? length : length + 1;

	buffer[i + length] = '\0';
	while(num > 0 ) {
		buffer[i + length - 1] = '0' + (num % 10);
		num /= 10;
		length--;
	}
	return str_len;
}
// when add new symbols, like %s, %d......, pay attention to outi
int sprintf(char *out, const char *fmt, ...) {
//  panic("Not implemented");
	va_list ap;
	va_start(ap, fmt);
	int done = 0;
	done = vsprintf(out, fmt, ap);
	va_end(ap);
	return done;
}

int snprintf(char *out, size_t n, const char *fmt, ...) {
  panic("Not implemented");
}

int vsnprintf(char *out, size_t n, const char *fmt, va_list ap) {
  panic("Not implemented");
}

#endif
