#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

/* 
* 2     in {4, 8, 3, 6, 3}
* 4     in {4, 8, 3, 6, 3}
* 1.5   in {4, 8, 3, 6, 3}
* 3     in {4, 8, 3, 6, 3}
* 1.5   in {4, 8, 3, 6, 3}
*/

int solution(int arr[], int arr_len) {
    int answer = 0;
    for (int i = 0; i < arr_len; i++)
        for (int j = 0; j < arr_len; j++)
            // �迭�� ��Ұ��� ¦�����߸� �Ѵ�(Ȧ���� 2�� ������ �Ҽ��� ������ ����, 2�� ����� ������ �Ǿ�� �Ѵ�)
            // �ڽ��� 2�� ���� ���� �迭�� ���ҿ� ���ԵǾ�� �Ѵ�
            if (arr[i] % 2 == 0 && arr[i] / 2 == arr[j]) {
                answer++;
                break;
            }
    return answer;
}


int main() {
    int arr[] = { 4, 8, 3, 6, 3 };
    int arr_len = 5;
    int ret = solution(arr, arr_len);

    printf("solution �Լ��� ��ȯ ���� %d �Դϴ�.\n", ret);
}