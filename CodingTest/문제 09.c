#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

//answer ������ ��û ����� ��� �ִ� �迭
//[0] : "XS" ��û���� ��
//[1] : "S" ��û���� ��
//[2] : "M" ��û���� ��
//[3] : "L" ��û���� ��
//[4] : "XL" ��û���� ��
//[5] : "XXL" ��û���� ��

int* solution(char* shirt_size[], int shirt_size_len) {
	int arr[6] = {0, 0, 0, 0, 0, 0};
	int* answer = arr;
	//shirt_size�� �ִ� ��� ���Ҹ� ������ counting 
	for (int i = 0; i < shirt_size_len; i++) {
		//shirt_size[i]�� "XS"�� answer[0]++
		if (strcmp(shirt_size[i], "XS") == 0) 
			answer[0]++;
		//shirt_size[i]�� "S"�� answer[1]++
		//shirt_size[i]�� "M"�� answer[2]++
		//shirt_size[i]�� "L"�� answer[3]++
		//shirt_size[i]�� "XL"�� answer[4]++
		//shirt_size[i]�� "XXL"�� answer[5]++
	}
	return answer;
}

int main() {
	char* shirt_size[] = {"XS", "S", "L", "L", "XL", "S"};
	int shirt_size_len = 6;
	int* ret = solution(shirt_size, shirt_size_len);
}