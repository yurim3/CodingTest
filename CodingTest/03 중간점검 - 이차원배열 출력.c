#include <stdio.h>

int main(void)
{
	int arr[3][4] = { {5, 2, 5, 4}, {4, 1, 6, 7}, {1, 1, 2, 12} };

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}

	//���ڿ��� ����(5�� ��������)�� ���Ͻÿ�
	char str[30] = "Hello";
	int length = 0; //���ڿ��� ����

	//���ڷ� �Ǻ��� ��� length�� ī����(1�� ����)
	for (int i = 0; i < 30; i++) {
		if(str[i] != '\0')
			length++;
	}
	printf("���̴� %d", length);

	return 0;
}