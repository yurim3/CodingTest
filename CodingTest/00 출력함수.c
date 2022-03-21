#include <stdio.h>

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
	printf("%s\n", mjyeol);
}