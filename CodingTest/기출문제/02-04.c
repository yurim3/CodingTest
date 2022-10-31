#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// words �׳� ���ڿ��� �� �ִ� ��
// 5�� �̻��� ���ڿ��� �ɷ��� �ִ´�
char* solution(char* words[], int words_len) {
    ////////////////////�����Ҵ� �� �ϰڴٸ� �ڵ带 �̷���!!!//////////////////////////////
    
    // �ܾ��� ���� �ִ� 100�� * �� �ܾ�� ���� 10 + ��('\0') ���� 1
    //char answer[1001] = "";
    
    //�޸� ���� 1001�� �����Ҵ�
    char* answer = malloc(1001 * sizeof(char));

    //��� ������ 0���� �ʱ�ȭ
    for (int i = 0; i < 1001; i++) {
        answer[i] = 0;
    }

    //words[0]�� 5���� �̻��̸� answer�� words[0] �߰�
    /* if (strlen(words[0]) >= 5) {
        strcat(answer, words[0]);
    } */

    //���� 5 �̻��� ���ڿ��� answer�� ���� �Ŵ�.
    for (int i = 0; i < words_len; i++) {
        if (strlen(words[i]) >= 5) {
            strcat(answer, words[i]);
        }
    }

    //answer�� �ƹ� ���ڵ� ���� ��, answer�� "empty"
    if (strlen(answer) == 0) {
        strcat(answer, "empty"); //������ cpy�ε� ������ �ƹ� ���ڵ� ������ �ڿ� �߰��ϴ� �Լ��� cat�� �ᵵ ��� ����
    }

    return answer;
}

int main() {
    char* words1[5] = { "my", "favorite", "color", "is", "violet" };
    int words_len1 = 5;
    char* ret1 = solution(words1, words_len1);

    printf("solution �Լ��� ��ȯ ���� %s �Դϴ�.\n", ret1);

    char* words2[3] = { "yes", "i", "am" };
    int words_len2 = 3;
    char* ret2 = solution(words2, words_len2);

    printf("solution �Լ��� ��ȯ ���� %s �Դϴ�.\n", ret2);
}