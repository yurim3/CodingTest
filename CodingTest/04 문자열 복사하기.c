#include <stdio.h>
#include <string.h>		//strlen() ȣ��

int main(void)
{
	//src�� �ִ� ���ڿ��� ������ dest�� �����ϼ���
	char dest[20]; //������ ����
	char src[] = "Hello"; //������ ���ڿ�
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