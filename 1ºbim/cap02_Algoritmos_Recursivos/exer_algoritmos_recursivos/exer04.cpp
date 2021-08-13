#include <iostream>

/*

Verificar se um determinado valor está ou não presente em um vetor.

*/

using std:: cout;
using std:: cin;
using std:: endl;

int main(){

    int a[10] = {10, 19, 32, 1, 23, 54, 56, 77, 87, 3};
    int x;
    int num = 10;
    int enc;

    x = a[0];

    for(int i = 0; i < 10; i++){
        if (x == num)
            enc = x;
        else
            x = a[i];
    }

    if (enc == num)
    {
        printf("O numero %d está presente no vetor", enc);

    }
    return 0;
}