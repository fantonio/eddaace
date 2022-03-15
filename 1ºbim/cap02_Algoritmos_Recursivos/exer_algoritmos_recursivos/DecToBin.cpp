#include<iostream>
/*
Algoritmo para converter decimal em binário.
*/

using std::cout;
using std::cin;
using std::endl;


void dectobin(int num){
    int resto;
    while(num!=0){
        resto = num%2;
        printf("%d", resto);
        num = num/2;
    }
}
int main() {
    int num,resto;
    cout<<"Entre com o numero = ";
    cin>>num;
    if(num==0){
        cout<<"\nEntre com outro numero = ";
        cin>>num;
        dectobin(num);
        cout<<"\n"<<endl;
    }
    else
        dectobin(num);
        cout<<"\n"<<endl;
    return 0;
}
