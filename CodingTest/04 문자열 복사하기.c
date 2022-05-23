#include <stdio.h>
#include <string.h>		//strlen() 호출

int main(void)
{
	//src에 있는 문자열이 내용을 dest에 복사하세요
	char dest[20]; //복사할 공간
	char src[] = "Hello"; //복사할 문자열
	int length = strlne(src); 

	//for(int i = 0; src[i] != '\0'; i++)
	for (int i = 0; i < length; i++) {
		dest[i] = src[i];
	}
	for (int i = 0; i < 6; i++) {
		dest[i] = src[i];
	}

	for (int i = 0; i < 6; i++)
	{
		printf("%c", dest[i]);
	}
	return 0;
}