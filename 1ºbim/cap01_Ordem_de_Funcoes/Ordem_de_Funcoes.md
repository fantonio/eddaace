# Notação Big Oh (O) e Similares #

- Tempo de execução de um algoritmo
    - Costuma-se estudar os tempos máximos (pior caso):
        - Mais fácil de analisar;
        - É crucial para a qualidade das aplicações;

### Análise Teórica de complexidade ###

Segundo Cormen (2002), analisar um algoritmo significa prever os recursos de que ele necessitará. Em geral, memória, largura de banda de comunicação ou hardware de computação são a preocupação primordial, mas frequentemente é o **tempo de computação** que se deseja medir. Leva em consideração todas as possíveis entradas. Permitindo assim a avaliação do desempenho de um algoritmo, independente das características do hardware e do software utilizados.

O programa abaixo encontra o maior valor em um vetor de tamanho n:
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
> 5 + (n-1).6 = **6n-1**

Este valor é obtido realizando o calculo em função de n do número máximo de operações primitivas executadas, tendo o seguinte cálculo:

```
1 atribuição e 1 indexação,
1 atrição
repete n-1 vezes [1 teste, 1 indexação e 1 teste, 
1 atribuição e 1 indexação (no máximo), 1 incremento]
1 teste,
1 return
```

Exemplos de operações básicas realizadas por um algoritmo, todas contabilizadas como tempo unitário:
> - Atribuição de valor para uma variável.
    - x = 5;
> - Comparação entre valores.
    - x <= y;
> - Cálculo aritmético.
    - x + x;
> - Chamada de função.
    - f(x);

### Tempo de Execução de um Algoritmo ###

O tempo de execução de um algoritmo será representado por uma função de custo **T**, onde **T(n)** é a medida do tempo necessário para executar um algoritmo para um problema de tamanho n. Logo T é chamada **função complexidade de tempo do algoritmo**. Se T(n) é a medida de memória necessária para a execução do algoritmo, então T é chamada **função de complexidade de espaço**. Vale lembrar que T não representa diretamente o tempo de execução, mas o número de vezes que certa operação relevante é executada.

O programa abaixo encontra o menor valor em um vetor de tamanho n:
``` 
int calculamenor (int A[], int n)
{
    menor = A[0];
    for (i=1; i<n; i++) {
        if (A[i] < menor)
            menor = A[i];
    }
    return menor;
}
``` 