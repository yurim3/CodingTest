#include <stdio.h>
#include <stdlib.h>
#define _CRT_SECURE_NO_WARNINGS

//동적할당: 메모리 할당 크기가 실행시간(runtime)에 결정
//			범위{} 벗어나도 메모리 해제 안 됨
// 
//정적할당: 메모리 할당 크기가 컴파일 시간에 결정
//		  : 지역 변수는 범위{} 벗어나면 메모리가 해제됨

int main(void) {
	char str[10];	//정적할당 10바이트 할당인 것이 명확함
	int num;
	scanf("%d", &num);
	
	//동적할당	num의 입력값에 따라 크기가 달라짐
	char* str2 = malloc(sizeof(char) * num);
}