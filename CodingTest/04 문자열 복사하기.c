#include <stdio.h>

int main(void)
{
	//src�� �ִ� ���ڿ��� ������ dest�� �����ϼ���
	char dest[20]; //������ ����
	char src[] = "Hello"; //������ ���ڿ�
	for (int i = 0; i < 6; i++) {
		dest[i] = src[i];
	}

	for (int i = 0; i < 6; i++)
	{
		printf("%c", dest[i]);
	}
	return 0;
}