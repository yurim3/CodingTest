#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

const int max_product_number = 10;

//��ǰ ��ȣ���� �� ���� �ִ��� ������ ���ϴ�.
//gloves: ������ �ִ� �尩 list
//gloves_len: gloves�� ����
int* func_a(int gloves[], int gloves_len) {
    //���� ����
    int* counter = (int*)malloc(sizeof(int) * (max_product_number + 1));
    
    //������ ���� �� ������ 0���� �ʱ�ȭ
    for (int i = 0; i <= max_product_number; ++i)
        counter[i] = 0;

    for (int i = 0; i < gloves_len; ++i)
    {
        counter[gloves[i]]++;
    }

        return counter;
}

int solution(int left_gloves[], int left_gloves_len, int right_gloves[], int right_gloves_len) {
    //1. �޼� �尩�� ��ǰ ��ȣ���� �� ���� �ִ��� ������ ���ϴ�.
    int* left_counter = func_a(left_gloves, left_gloves_len);

    //2. ������ �尩�� ��ǰ ��ȣ���� �� ���� �ִ��� ������ ���ϴ�.
    int* right_counter = func_a(right_gloves, right_gloves_len);
    
    //3. �� ��ǰ ��ȣ���� �ִ��� ���� �尩 ���� ����鼭 ������ ���ϴ�.
    int total = 0;
    for (int i = 1; i <= max_product_number; ++i)
        total += min(left_counter[i], right_counter[i]);
    return total;
}

int main() {
    int left_gloves[5] = { 2, 1, 2, 2, 4 };
    int left_gloves_len = 5;
    int right_gloves[6] = { 1, 2, 2, 4, 4, 7 };
    int right_gloves_len = 6;
    int ret = solution(left_gloves, left_gloves_len, right_gloves, right_gloves_len);

    printf("solution �Լ��� ��ȯ ���� %d �Դϴ�.\n", ret);
}