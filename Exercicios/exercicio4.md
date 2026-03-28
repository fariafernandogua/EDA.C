Escreva uma função recursiva que calcule o máximo divisor comum (MDC) usando o
algoritmo de Euclides.


Resposta:
int mdc(int a, int b) {
 if (b == 0) return a;
 return mdc(b, a % b);   }
