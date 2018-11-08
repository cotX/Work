#include "stdio.h"
#include "windows.h"
#include "assert.h"

/*strcpy*/
char* my_strcpy(char* dest, char *src)
{
	char *ret = dest;
	assert(dest != NULL);
	assert(src != NULL);
	while (*dest++ = *src++){
		;
	}
	return ret;
}
/*strcat*/
char *my_strcat(char* dest, char*src)
{
	char *ret = dest;
	while (*dest){
		dest++;
	}
	while (*dest++ = *src++){
		;
	}
	return ret;
}
/*my_strstr*/
char *my_strstr(char *str1, char *str2)
{
	assert(str1 != NULL);
	assert(str2!= NULL);
	char *son = str1;
	char *father = str2;
	char *cp=str2;
	while (*cp){
		son = str1;
		father = cp;
		while (*son&&*father && (*father == *son)){
				father++;
				son++;
			}
		if (*son == '\0'){
			return cp;
		}
		cp++;
	}
	return NULL;
}
/*my_strchr*/
char* my_strchr(char *str,char c)
{
	while (*str&&*str != c){
		str++;
	}
	char *cp = str;
	if (*str == c){
		return cp;
	}
	return NULL;
}
/*my_strcmp*/
int my_strcmp(char* str1,char*str2)
{
	while (*str1 == *str2){
		if (*str1 == '\0'){
			return 0;
		}
		str1++;
		str2++;
	}
	return *str1 - *str2;
}
/*my_memcpy*/
void* my_memcpy(void* dst,void* src,size_t count)
{
	while (count--){
		*(char*)dst = *(char*)src;
		dst=(char*)dst+1;
		src = (char*)src + 1;
	}
	char*ret = dst;
	return ret;
}
/*my_memmove*/
void* my_memmove(void *dst,void *src,size_t count)
{
	void *ret = dst;
	if (dst == src){
		return dst;
	}
	if (dst < src){
		while (count--){
			*(char*)dst = *(char*)src;
			src=(char*)src+1;
			dst=(char*)dst+1;
		}
	}
	else
	{
		dst = (char*)dst + count - 1;
		src = (char*)src + count - 1;
		while (count--){
			*(char*)dst = *(char*)src;
			dst = (char*)dst - 1;
			src = (char*)src - 1;
		}
	}
	return ret;
}
int main()
{
	char arr_0[] = { "adsfkl;dd" };
	char arr_1[] = { "sf56" };
	char c = ';';
	printf("%s",my_memmove(arr_0,arr_1,4));
	system("pause");
	return 0;
}