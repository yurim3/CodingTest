#include <string.h>
#include <stdio.h>

int main(void) {
	//�迭�� 20���� ������ ��������, ������ ���̴� 3
	char str[20] = "YSY";

	//������ ���̸� ���ϴ� �Լ�
	int length = strlen(str);
	printf("%d \n", length);

	//���ڿ� ���� strcpy(������ ���, ������ ���ڿ�) !!!���� �򰥸��� ����!!!
	char copy_str[15];
	strcpy(copy_str, str);
	printf("%s \n", copy_str);

	//���ڿ� �����̱� strcat(������ ���, ������ ���ڿ�)
	strcat(copy_str, "Don't go");
	printf("%s \n", copy_str);
}