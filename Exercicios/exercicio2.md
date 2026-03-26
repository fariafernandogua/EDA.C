#include <stdio.h>
#include <string.h>

long long memo[1000];

long long fibonacci_memo(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    if (memo[n] != -1) return memo[n];
    memo[n] = fibonacci_memo(n - 1) + fibonacci_memo(n - 2);
    return memo[n];
}

int main() {
    // Inicializa o vetor com -1
    for (int i = 0; i < 1000; i++) {
        memo[i] = -1;
    }

    printf("%lld\n", fibonacci_memo(50)); // Exemplo: Fibonacci de 50
    return 0;
}

