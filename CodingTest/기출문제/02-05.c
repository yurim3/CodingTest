#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int attack, int recovery, int hp) {
    int count = 0;

    while (true) {
        //count 1 증가(공격 횟수)
        //몬스터를 때린다(hp 30[attack] 감소)
        //몬스터가 죽으면
            //반복문 벗어나기
        //아니면 hp 10[recovery] 회복(증가)

        count += 1;
        hp -= attack;
        if (hp <= 0)
            break;
        hp += recovery;
    }

    //간소화(refactoring)
    /* while (hp > 0) {
        count += 1;
        hp -= attack;
        if (hp > 0)
            hp += recovery;
    } */
    return count;
}

int main() {
    int attack = 30;
    int recovery = 10;
    int hp = 60;
    int ret = solution(attack, recovery, hp);

    printf("solution 함수의 반환 값은 %d 입니다.\n", ret);
}