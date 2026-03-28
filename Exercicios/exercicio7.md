1. Escreva algoritmos iterativo para calcular o n-ésimo número de Fibonacci.

    int fibonacci_iter(int n) {
    int a = 0, b = 1, temp;
    if(n == 0) return 0;
    for(int i = 2; i <= n; i++) {
        temp = a + b;
        a = b;
        b = temp;
    }
    return b;
}
