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

	//문자열의 길이(5가 나오도록)를 구하시오
	char str[30] = "Hello";
	int length = 0; //문자열의 길이

	//문자로 판별될 경우 length를 카운팅(1씩 증가)
	for (int i = 0; i < 30; i++) {
		if(str[i] != '\0')
			length++;
	}
	printf("길이는 %d", length);

	return 0;
}