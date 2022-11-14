#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(char* words[], int words_len, char* word) {
    int count = 0;
    // words[0] : "CODE", words[1] : "COED", words[2] : "CDEO"
    if (word[0] != words[0][0])
        count++;
    if (word[1] != words[0][1])
        count++;
    if (word[2] != words[0][2])
        count++;
    if (word[3] != words[0][3])
        count++;

    if (word[0] != words[1][0])
        count++;
    if (word[1] != words[1][1])
        count++;
    if (word[2] != words[1][2])
        count++;
    if (word[3] != words[1][3])
        count++;

    if (word[0] != words[2][0])
        count++;
    if (word[1] != words[2][1])
        count++;
    if (word[2] != words[2][2])
        count++;
    if (word[3] != words[2][3])
        count++;
    return count;
}

int main() {
    char* words[3] = { "CODE", "COED", "CDEO" };
    int words_len = 3;
    char* word = "CODE";
    int ret = solution(words, words_len, word);

    printf("solution �Լ��� ��ȯ ���� %d �Դϴ�.\n", ret);
}