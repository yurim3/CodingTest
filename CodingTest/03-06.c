#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char* solution(int tile_length) {
    char* answer = (char*)malloc(sizeof(char) * (tile_length + 1));
    char com[6] = { 'R','R','R','G','G','B' };
    // 색칠이 불가능한 경우
    // 1) 1, 7, 13  2) 2, 8, 14 3)4, 10, 16
    if (tile_length % 6 == 1 || tile_length % 6 == 2 || tile_length % 6 == 4)
        strcpy(answer, "-1");
    // 색칠이 가능한 경우
    // 3, 5, 6, 9, 11, 12...
    else {
        for (int i = 0; i < tile_length; i++)
            answer[i] = com[i % 6];
        answer[tile_length] = '\0';
    }
    return answer;
}

int main() {
    int tile_length1 = 11;
    char* ret1 = solution(tile_length1);


    printf("solution 함수의 반환 값은 %s 입니다.\n", ret1);

    int tile_length2 = 16;
    char* ret2 = solution(tile_length2);


    printf("solution 함수의 반환 값은 %s 입니다.\n", ret2);
}