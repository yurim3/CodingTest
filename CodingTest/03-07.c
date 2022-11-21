#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>


int solution(int num_apple, int num_carrot, int k) {
    int answer = 0;
    // 먹이(k)를 주지 않았을 때 만들 수 있는 주스의 개수(=answer)
    {
        // 사과가 부족한 경우(사과 10, 당근 5일 때)
        if (num_apple < 3 * num_carrot) // 10 < 3 * 5 = 10 < 15, 당근이 남는 경우(즉, 사과가 부족한 경우)
            answer = num_apple / 3; //주스의 개수 = 10 / 3 = 3

        // 당근이 부족한 경우(ex. 당근 2, 사과 7일 때)
        else
            answer = num_carrot; // 주스의 개수는 당근의 개수인, 즉 2개가 된다
        // 주스를 만들고 나서 남은 사과, 당근의 개수
        num_apple -= 3 * answer;
        num_carrot -= answer;
    }

    // 먹이를 주는 것까지 고려해서 만들 수 있는 주스의 개수(주스의 개수가 줄어야 할 수 밖에 없음)
    for (int i = 0; k - (num_apple + num_carrot + i) > 0; i++)
        if (i % 4 == 0) // 주스를 만드는 데 필요한 과일의 개수 : 4     만약 사과 4, 당근 2개 필요한 거면, i % 6으로 쓰면 됨
            answer--; // 주스의 개수(answer)는 줄어들어야 한다.
    return answer;
}

int main() {
    int num_apple1 = 5;
    int num_carrot1 = 1;
    int k1 = 2;
    int ret1 = solution(num_apple1, num_carrot1, k1);

    printf("solution 함수의 반환 값은 %d 입니다.\n", ret1);

    int num_apple2 = 10;
    int num_carrot2 = 5;
    int k2 = 4;
    int ret2 = solution(num_apple2, num_carrot2, k2);

    printf("solution 함수의 반환 값은 %d 입니다.\n", ret2);
}