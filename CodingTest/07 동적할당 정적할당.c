#include <stdio.h>
#include <stdlib.h>
#define _CRT_SECURE_NO_WARNINGS

//�����Ҵ�: �޸� �Ҵ� ũ�Ⱑ ����ð�(runtime)�� ����
//			����{} ����� �޸� ���� �� ��
// 
//�����Ҵ�: �޸� �Ҵ� ũ�Ⱑ ������ �ð��� ����
//		  : ���� ������ ����{} ����� �޸𸮰� ������

int main(void) {
	char str[10];	//�����Ҵ� 10����Ʈ �Ҵ��� ���� ��Ȯ��
	int num;
	scanf("%d", &num);
	
	//�����Ҵ�	num�� �Է°��� ���� ũ�Ⱑ �޶���
	char* str2 = malloc(sizeof(char) * num);
}