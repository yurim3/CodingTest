#include <stdio.h>

int main(void)
{
	//�ִ��� 14(arr[9])
	int arr[10] = { 8, 5, 1, 6, 4, 9, 10, 7, 11, 14 };
	
	int temp = -1; //�񱳴��
	int idx = 99; //�ε��� ��
	//�迭 ��� �� �ִ񰪰� �׿� �ش��ϴ� idx���� ���Ͻÿ�
	
	for (int i = 0; i < 10; i++)
	{
		if (arr[i] > temp)
		{
			temp = arr[i];
			idx = i;
		}
	}
	
	printf("���� : %d �ε��� ���� : %d \n", temp, idx);

	return 0;
}