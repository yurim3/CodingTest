#include <stdio.h>

int main(void)
{
	int jungsu = 1;
	char munja = 'a';
	double sosu = 3.14;
	float sosu1 = 0.001592f;
	//���ڴ� ���� �����ؼ� 11��
	//�迭�� ���̴� 11 + 1(�ι���) = 12
	char mjyeol[12] = "Hello World";

	printf("���� %d, ���� %c, ���� %lf, �÷� %f\n", jungsu, munja, sosu, sosu1);
	//mjyeol�� %c�� ��� ����.
	for (int i = 0; i < 12; i++) {
		printf("%c", mjyeol[i]);
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

}