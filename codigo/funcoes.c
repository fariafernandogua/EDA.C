
#include <stdio.h>
#include "funcoes.h"

// ================= FATORIAL ITERATIVO =================
void fatorial_iterativo(int n) {
    int i, resultado = 1;
    for(i = 1; i <= n; i++) {
        resultado *= i;
    }
    printf("Fatorial Iterativo: %d\n", resultado);
}

// ================= FATORIAL RECURSIVO =================
int fatorial_rec(int n) {
    if(n == 0 || n == 1)
        return 1;
    return n * fatorial_rec(n - 1);
}

void fatorial_recursivo(int n) {
    printf("Fatorial Recursivo: %d\n", fatorial_rec(n));
}

// ================= FIBONACCI ITERATIVO =================
void fibonacci_iterativo(int n) {
    int a = 0, b = 1, temp, i;

    if(n == 0) {
        printf("Fibonacci Iterativo: 0\n");
        return;
    }
    if(n == 1) {
        printf("Fibonacci Iterativo: 1\n");
        return;
    }

    for(i = 2; i <= n; i++) {
        temp = a + b;
        a = b;
        b = temp;
    }

    printf("Fibonacci Iterativo: %d\n", b);
}

// ================= FIBONACCI RECURSIVO =================
int fibonacci_rec(int n) {
    if(n == 0) return 0;
    if(n == 1) return 1;
    return fibonacci_rec(n - 1) + fibonacci_rec(n - 2);
}

void fibonacci_recursivo(int n) {
    printf("Fibonacci Recursivo: %d\n", fibonacci_rec(n));
}