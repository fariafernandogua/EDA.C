 1. Escreva um algoritmo recursivo para calcular o fatorial de um número N.

    int fatorial_rec(int n) {
    if(n == 0) return 1;
    return n * fatorial_rec(n - 1);
}