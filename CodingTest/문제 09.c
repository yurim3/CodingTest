#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

//answer 사이즈 신청 결과를 담고 있는 배열
//[0] : "XS" 신청자의 수
//[1] : "S" 신청자의 수
//[2] : "M" 신청자의 수
//[3] : "L" 신청자의 수
//[4] : "XL" 신청자의 수
//[5] : "XXL" 신청자의 수

int* solution(char* shirt_size[], int shirt_size_len) {
	int arr[6] = {0, 0, 0, 0, 0, 0};
	int* answer = arr;
	//shirt_size에 있는 모든 원소를 뒤져서 counting 
	for (int i = 0; i < shirt_size_len; i++) {
		//shirt_size[i]가 "XS"면 answer[0]++
		if (strcmp(shirt_size[i], "XS") == 0) 
			answer[0]++;
		//shirt_size[i]가 "S"면 answer[1]++
		//shirt_size[i]가 "M"면 answer[2]++
		//shirt_size[i]가 "L"면 answer[3]++
		//shirt_size[i]가 "XL"면 answer[4]++
		//shirt_size[i]가 "XXL"면 answer[5]++
	}
	return answer;
}

int main() {
	char* shirt_size[] = {"XS", "S", "L", "L", "XL", "S"};
	int shirt_size_len = 6;
	int* ret = solution(shirt_size, shirt_size_len);
}