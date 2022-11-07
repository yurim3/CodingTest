#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int number) {
    int count = 0;
    // number >= 0���� 0���� Ŀ�� �Ѵ�
    while (number > 0) {
        
        //���� �ϳ����� ����
        int n = number % 10;
        
        if (n == 2 || n == 3 || n == 5 || n == 7)
            count += 1;

        //�ڸ��� ���� �ֱ�
        number /= 10;
    }
    return count;
}

int main() {
    int number = 29022531;
    int ret = solution(number);

    printf("solution �Լ��� ��ȯ ���� %d �Դϴ�.\n", ret);
}