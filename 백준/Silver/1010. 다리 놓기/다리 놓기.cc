#include <stdio.h>

__int128 factorial(int n) {
    __int128 result = 1;
    for (int i = 2; i <= n; i++) {
        result *= i;
    }
    return result;
}

__int128 combination(int n, int k) {
    if (k > n) return 0;
    if (k == 0 || k == n) return 1;
    return factorial(n) / (factorial(k) * factorial(n - k));
}

void print_int128(__int128 value) {
    if (value == 0) {
        printf("0");
        return;
    }

    char buffer[40];
    int index = 0;

    while (value > 0) {
        buffer[index++] = (value % 10) + '0';
        value /= 10;
    }

    // Reverse and print the buffer
    for (int i = index - 1; i >= 0; i--) {
        putchar(buffer[i]);
    }
}

int main() {
    int T;
    scanf("%d", &T); // 테스트 케이스 수 입력

    while (T--) {
        int N, M;
        scanf("%d %d", &N, &M); // 서쪽(N)과 동쪽(M) 사이트 수 입력

        // C(M, N) 계산
        __int128 result = combination(M, N);
        print_int128(result);
        putchar('\n'); // 줄 바꿈
    }

    return 0;
}
