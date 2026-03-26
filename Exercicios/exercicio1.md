#include <stdio.h>

unsigned long long fatorial_iterativo(int n) {
    unsigned long long resultado = 1;
    for (int i = 2; i <= n; i++) {
        resultado *= i;
    }
    return resultado;
}

int main() {
    printf("%llu\n", fatorial_iterativo(20)); // Exemplo: fatorial de 20
    return 0;
}
