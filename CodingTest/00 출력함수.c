#include <stdio.h>
#include <string.h>

int main(void)
{
	int jungsu = 1;
	char munja = 'a';
	double sosu = 3.14;
	float sosu1 = 0.001592f;

	//문자는 띄어쓰기 포함해서 11개
	//배열의 길이는 11 + 1(널문자) = 12
	char mjyeol[12] = "Hello World";

	printf("정수 %d, 문자 %c, 더블 %lf, 플롯 %f\n", jungsu, munja, sosu, sosu1);
	//mjyeol를 %c로 찍어 보자.
	//[0] = 'H', [1] = 'e', [2] = 'l', [3] = 'l', [4] = 'o',
	//[5] = ' ', [6] = 'W', [7] = 'o', [8] = 'r', [9] = 'l', [10] = 'd', [11] = '\0'
	for (int i = 0; i < strlen(mjyeol); i++)
	{
		printf("%c", mjyeol[i] );
	}
	printf("\n");
	printf("%c\n", mjyeol[0]); //h
	printf("%c\n", mjyeol[1]); //e
	printf("%c\n", mjyeol[2]); //l
	printf("%c\n", mjyeol[3]); //l
	printf("%c\n", mjyeol[4]); //o
	printf("%c\n", mjyeol[5]); //
	printf("%c\n", mjyeol[6]); //w
	printf("%c\n", mjyeol[7]); //o
	printf("%c\n", mjyeol[8]); //r
	printf("%c\n", mjyeol[9]); //l
	printf("%c\n", mjyeol[10]); //d
	printf("%c\n", mjyeol[11]); //\0
	
	int arr[12] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12 };
	for (int i = 0; i < 12; i++) {
		printf("%d", arr[i]);
	}
}