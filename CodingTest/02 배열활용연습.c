#include <stdio.h>

void getMax(int* arr, int length) //�迭�� �����ͷ� �Ѱ� ��� ��
{
	int temp = -1; //�񱳴��
	int idx = 99; //�ε��� ��
	//�迭 ��� �� �ִ񰪰� �׿� �ش��ϴ� idx���� ���Ͻÿ�

	for (int i = 0; i < length; i++)
	{
		if (arr[i] > temp)
		{
			temp = arr[i];
			idx = i;
		}
	}

	printf("�ִ��� : %d �ε��� ���� : %d \n", temp, idx);
}

int main(void)
{
	//�ִ��� 14(arr[9])
	int arr1[10] = { 8, 5, 1, 6, 4, 9, 10, 7, 11, 14 };
	getMax(arr1, 10);

	//�Լ� ���� ���� �ּڰ��� �� idx�� ���� ���� 
	int temp = 999; //�񱳴��
	int idx = 99; //�ε��� ��
	//�迭 ��� �� �ִ񰪰� �׿� �ش��ϴ� idx���� ���Ͻÿ�

	for (int i = 0; i < sizeof(arr1)/sizeof(arr1[0]); i++) /*�迭�� ��ü ũ�� / �� ���� �迭�� ũ�� = �迭�� ����
															40 / 4 = 10	*/ 
	{
		if (arr1[i] < temp)
		{
			temp = arr1[i];
			idx = i;
		}
	}

	printf("�ּڰ��� :  %d �ε��� ���� : %d \n", temp, idx);

	return 0;
}