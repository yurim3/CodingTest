#include <stdio.h>
#include <string.h>		//strlen() 호출

int my_strcat(char* s1, char* s2)
{
	int s1_len = strlen(s1);
	int s2_len = strlen(s2);
	s1[5] = s2[0];
	s1[6] = s2[1];
	s1[7] = s2[2];
	s1[8] = s2[3];
	s1[9] = s2[4];
	s1[10] = s2[5];


	//for (int i = s1_len; i < s1_len + s2_len; i++)

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