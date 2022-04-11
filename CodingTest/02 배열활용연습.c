#include <stdio.h>

void getMax(int* arr, int length) //배열은 포인터로 넘겨 줘야 함
{
	int temp = -1; //비교대상
	int idx = 99; //인덱스 값
	//배열 요소 중 최댓값과 그에 해당하는 idx값을 구하시오

	for (int i = 0; i < length; i++)
	{
		if (arr[i] > temp)
		{
			temp = arr[i];
			idx = i;
		}
	}

	printf("값은 : %d 인덱스 값은 : %d \n", temp, idx);
}
int main(void)
{
	//최댓값은 14(arr[9])
	int arr1[10] = { 8, 5, 1, 6, 4, 9, 10, 7, 11, 14 };
	getMax(arr1, 10);

	return 0;
}