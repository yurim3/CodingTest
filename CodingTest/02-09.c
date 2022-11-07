#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// votes: ��ǥ�Կ� �ִ� ǥ
// N: �ĺ��� ��, Kǥ����ŭ ���� �ĺ����� ���� ã�´�.
int solution(int votes[], int votes_len, int N, int K) {

    //������ �ĺ��� ���� ǥ��
    //1�� �ĺ��� ���� ǥ: counter[1]
    int counter[11] = { 0 };

    for (int i = 0; i < votes_len; ++i)
        counter[votes[i]] += 1;

    // int answer = -1; //ī������ 0���� �����Ѵ�
    int answer = 0;

    for (int i = 0; i <= N; ++i)
        if (counter[i] == K)
            answer += 1;
    return answer;
}

int main() {
    int votes[10] = { 2, 5, 3, 4, 1, 5, 1, 5, 5, 3 };
    int votes_len = 10;
    int N = 5;
    int K = 2;
    int ret = solution(votes, votes_len, N, K);

    printf("solution �Լ��� ��ȯ ���� %d �Դϴ�.\n", ret);
}