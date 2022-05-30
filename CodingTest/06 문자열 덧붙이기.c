#include <stdio.h>
#include <string.h>		//strlen() 호출

int my_strcat(char* s1, char* s2)
{
	int s1_len = strlen(s1);
	int s2_len = strlen(s2);
	//s1[5+0] = s2[0];
	//s1[5+1] = s2[1];
	//s1[5+2] = s2[2];
	//s1[5+3] = s2[3];
	//s1[5+4] = s2[4];
	//s1[5+5] = s2[5];

	//5의 의미는 strlen(s1), 6번 반복하는 의미는 strlen(s2)
	for (int i = 0; i < s2_len; i++)
	{
		s1[s1_len + i] = s2[i];
	}

}
int main(void)
{
	char str1[20] = "hello";
	char str2[20] = "yellow";

	//str1의 내용에 str2를 덧붙임
	strcat(str1, str2);
	//helloyellow가 나왔으면 좋겠다
	printf("%s", str1);
}