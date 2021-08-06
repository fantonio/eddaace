# Notação Big Oh (O) e Similares #

- Tempo de execução de um algoritmo
    - Costuma-se estudar os tempos máximos (pior caso):
        - Mais fácil de analisar;
        - É crucial para a qualidade das aplicações;

### Análise Teórica de complexidade ###

Leva em consideração toas as possíveis entradas. Permite a avaliação do desempenho de um algoritmo, independente das características do hardware e do software utilizados.

> O programa abaixo encontra o maior valor em um vetor de tamanho n:
``` 
int arrayMax (int A[], int n)
{
    currentMax = A[0];
    for (i=1; i<n; i++) {
        if (A[i] > currentMax)
            currrentMax = A[i];
    }
    return currentMax;
}
``` 
No código acima, realizando um calculo para obtermos a complexidade de tempo chegamos ao seguinte valor:
> 5 + (n-1).6 = *6n-1*

Este valor é obtido realizando o calculo em função de n do número máximo de operações primitivas executadas.

Exemplos de operações básicas realizadas por um algoritmo, todas contabilizadas como tempo unitário:
> - Atribuição de valor para uma variável.
    - x = 5;
> - Comparação entre valores.
    - x <= y;
> - Cálculo aritmético.
    - x + x;
> - Chamada de função.
    - f(x);

