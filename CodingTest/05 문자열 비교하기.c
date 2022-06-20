#include <stdio.h>
#include <string.h>		//strlen() 호출

//두 문자열의 내용이 같은지 다른지를 확인
//같으면 0을 반환, 다르면 1을 반환
int my_strcmp(char* str1, char* str2)
{
	int str1_len = strlen(str1); //str1의 문자 개수
	int str2_len = strlen(str2); //str2의 문자 개수

	//두 문자열의 길이가 다른 경우
	if (str1_len != str2_len)
		return 1;

	//하나라도 글자가 다른 경우
	for (int i = 0; i < str1_len; i++)
	{
		if (str1[i] != str2[i])
			return 1;
	}
	return 0;
}

int main(void)
{
	char a[20] = "Hello";
	char b[20] = "Yello";
	if (my_strcmp(a, b) == 0)
		printf("두 문자열은 같습니다.\n");
	else
		printf("두 문자열은 다릅니다.\n");
	return 0;
}