#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int attack, int recovery, int hp) {
    int count = 0;

    while (true) {
        //count 1 ����(���� Ƚ��)
        //���͸� ������(hp 30[attack] ����)
        //���Ͱ� ������
            //�ݺ��� �����
        //�ƴϸ� hp 10[recovery] ȸ��(����)

        count += 1;
        hp -= attack;
        if (hp <= 0)
            break;
        hp += recovery;
    }

    //����ȭ(refactoring)
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

    printf("solution �Լ��� ��ȯ ���� %d �Դϴ�.\n", ret);
}