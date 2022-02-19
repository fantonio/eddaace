#### **Análise de complexidade de tempo**

Seja T(n) o tempo de pior caso de fat(n):
`Base: T(0) = T(1) = a`
`Parte indutiva: T(n) = T(n-1) + b, n>1`

Cálculos:
``` 
T(2) = T(1) + b = a + b
T(3) = T(2) + b = a + 2b
T(4) = T(3) + b = a + 3b

Generalizando: T(n) = a + (n-1)b
Portanto: T(n) = Θ(n)
```