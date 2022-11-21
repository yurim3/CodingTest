#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char* solution(int tile_length) {
    char* answer = (char*)malloc(sizeof(char) * (tile_length + 1));
    char com[6] = { 'R','R','R','G','G','B' };
    // ��ĥ�� �Ұ����� ���
    // 1) 1, 7, 13  2) 2, 8, 14 3)4, 10, 16
    if (tile_length % 6 == 1 || tile_length % 6 == 2 || tile_length % 6 == 4)
        strcpy(answer, "-1");
    // ��ĥ�� ������ ���
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


    printf("solution �Լ��� ��ȯ ���� %s �Դϴ�.\n", ret1);

    int tile_length2 = 16;
    char* ret2 = solution(tile_length2);


    printf("solution �Լ��� ��ȯ ���� %s �Դϴ�.\n", ret2);
}