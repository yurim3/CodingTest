#include <stdio.h>

int main(void)
{
	int arr[12] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12 };
	//1���� 12���� ����� ����.
	
	//sizeof(arr) �迭 arr�� ũ�� : 4 * 12 = 48
	//sizeof(arr[0]) ���� �ϳ��� ũ�� : 4
	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		printf("%d ", arr[i]);
	}
}