#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// words 그냥 문자열이 들어가 있는 것
// 5개 이상의 문자열만 걸러서 넣는다
char* solution(char* words[], int words_len) {
    ////////////////////동적할당 못 하겠다면 코드를 이렇게!!!//////////////////////////////
    
    // 단어의 개수 최대 100개 * 한 단어당 길이 10 + 널('\0') 공간 1
    //char answer[1001] = "";
    
    //메모리 종간 1001개 동적할당
    char* answer = malloc(1001 * sizeof(char));

    //모든 공간을 0으로 초기화
    for (int i = 0; i < 1001; i++) {
        answer[i] = 0;
    }

    //words[0]이 5글자 이상이면 answer에 words[0] 추가
    /* if (strlen(words[0]) >= 5) {
        strcat(answer, words[0]);
    } */

    //길이 5 이상의 문자열만 answer에 넣을 거다.
    for (int i = 0; i < words_len; i++) {
        if (strlen(words[i]) >= 5) {
            strcat(answer, words[i]);
        }
    }

    //answer에 아무 글자도 없을 때, answer는 "empty"
    if (strlen(answer) == 0) {
        strcat(answer, "empty"); //원래는 cpy인데 어차피 아무 글자도 없으니 뒤에 추가하는 함수인 cat를 써도 상관 없음
    }

    return answer;
}

int main() {
    char* words1[5] = { "my", "favorite", "color", "is", "violet" };
    int words_len1 = 5;
    char* ret1 = solution(words1, words_len1);

    printf("solution 함수의 반환 값은 %s 입니다.\n", ret1);

    char* words2[3] = { "yes", "i", "am" };
    int words_len2 = 3;
    char* ret2 = solution(words2, words_len2);

    printf("solution 함수의 반환 값은 %s 입니다.\n", ret2);
}