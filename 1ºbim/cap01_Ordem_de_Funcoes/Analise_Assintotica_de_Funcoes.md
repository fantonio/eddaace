# Análise assintótica de funções #

#### Notação Big-O

Usamos a notação big-Θ para limitar de forma assintótica o crescimento do tempo de execução com fatores constantes acima e abaixo. Algumas vezes, vamos querer limitar somente acima.

<img src="https://cdn.kastatic.org/ka-perseus-images/501211c02f4c6765f60f23842450e1151cfd9c89.png"/>


#### Notação Big-Ω (Grande-Omega)

Algumas vezes, queremos dizer que um algoritmo leva ao menos uma certa quantidade de tempo, sem fornecer um limite superior. Usamos a notação Ω, que é a letra grega "omega" maiúscula.

<img src="https://cdn.kastatic.org/ka-cs-algorithms/Omega_fn.png" />


#### Notação Big-θ (Grande-Theta)

Quando usamos a notação big-Θ estamos dizendo que temos um limite assintoticamente restrito no tempo de execução. "Assintoticamente" porque ele importa apenas para valores grandes de nnn. "Limite restrito" porque definimos o tempo de execução para um fator constante superior e inferior.

<img src="https://cdn.kastatic.org/ka-cs-algorithms/theta_n.png" />

Abaixo segue uma analogia entre duas funções f e g e a comparação de doias números reais a e b.

``` 
f(n) = O(g(n))   == a <= b
f(n) = Ω(g(n))   == a >= b
f(n) = Θ(g(n))   == a = b
f(n) = o(g(n))   == a < b
f(n) = ω(g(n))   == a > b
``` 