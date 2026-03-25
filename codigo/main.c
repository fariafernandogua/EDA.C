#include <stdio.h>
#include "funcoes.h"

int main() {
    int opcao, op, n;

    while(1) {
        // ===== Menu Principal =====
        printf("\n====== MENU PRINCIPAL ======\n");
        printf("1. Fatorial\n");
        printf("2. Fibonacci\n");
        printf("3. Comparar Iterativo vs Recursivo (Todos)\n");
        printf("0. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        if(opcao == 0) {
            printf("Programa encerrado.\n");
            break;
        }

        switch(opcao) {

            // ================= FATORIAL =================
            case 1:
                printf("\n--- Fatorial ---\n");
                printf("1. Iterativo\n");
                printf("2. Recursivo\n");
                printf("Escolha uma opcao: ");
                scanf("%d", &op);

                printf("Digite um numero: ");
                scanf("%d", &n);

                if(op == 1) {
                    fatorial_iterativo(n);
                } else if(op == 2) {
                    fatorial_recursivo(n);
                } else {
                    printf("Opcao invalida!\n");
                }
                break;

            // ================= FIBONACCI =================
            case 2:
                printf("\n--- Fibonacci ---\n");
                printf("1. Iterativo\n");
                printf("2. Recursivo\n");
                printf("Escolha uma opcao: ");
                scanf("%d", &op);

                printf("Digite n: ");
                scanf("%d", &n);

                if(op == 1) {
                    fibonacci_iterativo(n);
                } else if(op == 2) {
                    fibonacci_recursivo(n);
                } else {
                    printf("Opcao invalida!\n");
                }
                break;

            // ================= COMPARAR TODOS =================
            case 3:
                printf("\n--- Comparacao Iterativo vs Recursivo ---\n");

                printf("\nDigite um numero para Fatorial/Fibonacci: ");
                scanf("%d", &n);
                printf("\n=== Fatorial ===\n");
                fatorial_iterativo(n);
                fatorial_recursivo(n);
                printf("\n=== Fibonacci ===\n");
                fibonacci_iterativo(n);
                fibonacci_recursivo(n);

            default:
                printf("Opcao invalida!\n");
        }
    }

    return 0;
}
