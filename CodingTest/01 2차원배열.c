#include <stdio.h>

int main(void)
{
	int arr[12] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12 };
	//1부터 12까지 출력해 보자.
	
	//sizeof(arr) 배열 arr의 크기 : 4 * 12 = 48
	//sizeof(arr[0]) 공간 하나의 크기 : 4
	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		printf("%d ", arr[i]);
	}
}