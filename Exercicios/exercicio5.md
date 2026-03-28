Crie uma função recursiva que calcule a soma dos elementos de um vetor.


Resposta:
int soma_recursiva(int v[], int n) {
 if (n == 1) return v[0];
 return v[n-1] + soma_recursiva(v, n-1);
}
