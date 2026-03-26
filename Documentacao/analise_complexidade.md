
Análise de Complexidade

Descrição

Este documento apresenta a análise de complexidade de dois tipos de algoritmos amplamente utilizados na programação: algoritmos recursivos e iterativos.
O objetivo é comparar o desempenho, consumo de memória e número de operações realizadas por cada abordagem na resolução de um mesmo problema.

Algoritmo Recursivo

Um algoritmo recursivo é aquele que resolve um problema chamando a si mesmo com versões menores do problema.
Exemplo típico:
int fatorial(int n) { if (n == 0) return 1; return n * fatorial(n - 1); } 
A cada chamada da função, uma nova instância é adicionada à pilha de execução (stack).

Complexidade

Tempo: Depende do problema, mas geralmente segue um padrão como O(n)

Espaço: O(n) devido ao uso da pilha de chamadas

Características

Código mais simples e elegante

Mais fácil de entender em problemas complexos (ex: árvores, divisão e conquista)

Pode causar estouro de pilha (stack overflow) em casos grandes

Algoritmo Iterativo

Um algoritmo iterativo utiliza estruturas de repetição, como for ou while, para resolver o problema sem chamadas recursivas.
Exemplo equivalente ao fatorial:
int fatorial(int n) { int resultado = 1; for (int i = 1; i <= n; i++) { resultado *= i; } return resultado; } 

Complexidade

Tempo: O(n)

Espaço: O(1), pois não utiliza chamadas adicionais na pilha

Características

Mais eficiente em termos de memória

Geralmente mais rápido

Pode ser menos intuitivo em problemas complexos

Comparação entre os Algoritmos

A partir da análise:

O algoritmo recursivo pode ser mais fácil de implementar e compreender, especialmente em problemas matemáticos e estruturais

O algoritmo iterativo tende a ser mais eficiente em termos de uso de memória

Ambos podem ter a mesma complexidade de tempo, mas diferem no consumo de recursos

Resumo

CritérioRecursivoIterativoComplexidade TempoO(n)O(n)Complexidade EspaçoO(n)O(1)Uso de memóriaAltoBaixoFacilidadeAlta (em alguns casos)MédiaRiscoStack OverflowBaixo 

Conclusão

A escolha entre algoritmos recursivos e iterativos depende do problema a ser resolvido. Para problemas simples e que exigem eficiência, a abordagem iterativa é geralmente mais adequada. Já para problemas mais complexos e estruturados, a recursividade pode oferecer uma solução mais clara e organizada.