#include <stdio.h>

int main(void)
{
	//�ִ��� 14(arr[9])
	int arr[10] = { 8, 5, 1, 6, 4, 9, 10, 7, 11, 14 };
	
	int temp = -1; //�񱳴��
	int idx = 99; //�ε��� ��
	//�迭 ��� �� �ִ񰪰� �׿� �ش��ϴ� idx���� ���Ͻÿ�
	
	if (arr[0] > temp) {
		temp = arr[0];
		idx = 0;
	}
	if (arr[1] > temp) {
		temp = arr[1];
		idx = 1;
	}
	if (arr[2] > temp) {
		temp = arr[2];
		idx = 2;
	}
	if (arr[3] > temp) {
		temp = arr[3];
		idx = 3;
	}
	if (arr[4] > temp) {
		temp = arr[4];
		idx = 4;
	}
	if (arr[5] > temp) {
		temp = arr[5];
		idx = 5;
	}
	if (arr[6] > temp) {
		temp = arr[6];
		idx = 6;
	}
	if (arr[7] > temp) {
		temp = arr[7];
		idx = 7;
	}
	if (arr[8] > temp) {
		temp = arr[8];
		idx = 8;
	}
	if (arr[9] > temp) {
		temp = arr[9];
		idx = 9;
	}
	printf("���� : %d �ε��� ���� : %d \n", temp, idx);

	for(int i = 0; i < arr[])
	return 0;
}