#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(char* schedule[], int schedule_len) {
    int x_count = 0;
    for (int i = 0; i < 10; i++)
        if (schedule[i][0] == 'X')
            x_count++;

    int* answer = (int*)malloc(sizeof(int) * x_count);
    for (int i = 0, j = 0; i < 10; i++) {
        if (schedule[i][0] == 'X') {
            // i : 1, 2, 6, 8, 9�� �� ���ǿ� ����
            // answer = {2, 3, 7, 9, 10}
            answer[j++] = i + 1;
            
            
           /* answer[j++] = i + 1;
           ==(���� �Ʒ��� ���� �ǹ�(++��ġ �߿�))
           answer[j] = i + 1;
           j += 1; */


            /* answer[++j] = i + 1;
            ==(���� �Ʒ��� ���� �ǹ�)
            j += 1;
            answer[j] = i + 1; */
        }
    }
    return answer;
}

int main() {
    char* schedule[] = { "O", "X", "X", "O", "O", "O", "X", "O", "X", "X" };
    int* ret = solution(schedule, 10);

    printf("solution �Լ��� ��ȯ ���� ");
    for (int i = 0; i < 5; i++)
        printf("%d, ", ret[i]);
    printf("�Դϴ�.");

}