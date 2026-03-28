Implemente uma versão iterativa para calcular a soma dos dígitos de um número.


Resposta:
int soma_digitos(int n) {
 int soma = 0;
 while (n > 0) {
 soma += n % 10;
 n /= 10;
 }
 return soma;
}
