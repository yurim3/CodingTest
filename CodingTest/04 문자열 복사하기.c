#include <stdio.h>
#include <string.h>		//strlen() ȣ��

//d : ������ ����(destination)	s : ������ ���ڿ�(source)
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
	//src�� �ִ� ���ڿ��� ������ dest�� �����ϼ���
	char dest[20]; //������ ����
	char src[] = "Hello"; //������ ���ڿ�
	
	//src�� �ִ� "Hello"�� dest�� ����
	my_strcpy(dest, src);

	int length = strlen(src);
	for (int i = 0; i < length; i++)
	{
		printf("%c", dest[i]);
	}
	return 0;
}