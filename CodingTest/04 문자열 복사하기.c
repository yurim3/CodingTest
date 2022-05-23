#include <stdio.h>
#include <string.h>		//strlen() 호출

//d : 복사할 공간(destination)	s : 복사할 문자열(source)
void my_strcpy(char* d, char* s)
{
	int length = strlne(s);
	//for(int i = 0; src[i] != '\0'; i++)
	for (int i = 0; i < length; i++) {
		d[i] = s[i];
	}

}

int main(void)
{
	//src에 있는 문자열이 내용을 dest에 복사하세요
	char dest[20]; //복사할 공간
	char src[] = "Hello"; //복사할 문자열
	
	//src에 있는 "Hello"를 dest에 복사
	my_strcpy(dest, src);

	int length = strlen(src);
	for (int i = 0; i < length; i++)
	{
		printf("%c", dest[i]);
	}
	return 0;
}