#include <iostream>

// Definindo o registro que representará cada elemento da pilha

using std::cout;
using std::cin;
using std::endl;
using namespace std;

struct PILHA{
   int num;
   PILHA *prox;
};

int main(){
   // a pilha está vazia, logo, o pronteiro topo tem o valor null
   // as operações de inserção e remoção acontecem no topo.

   PILHA *topo = NULL;

   // o ponteiro aux ẽ um ponteiro auxiliar

   PILHA *aux;

   // apresentando o menu de opções
   int op;

   cout<<"\nMENU DE OPÇÕES\n";
   cout<<"\n1 - Inserir na pilha";
   cout<<"\n2 - Consultar toda a pilha";
   cout<<"\n3 - Remover da pilha";
   cout<<"\n4 - Esvaziar a pilha";
   cout<<"\n5 - Sair";
   cin>>op;

   if(op < 1 || op > 5){
      cout<<"Opção inválida!!";
   }
   if(op == 1){
      cout<<"Digite o número a ser inserido na pilha: ";
      PILHA *novo = new PILHA();
      cin>>novo->num;
      novo->prox = topo;
      topo = novo;
      cout<<"Número inserido na pilha!!";
   }
   if (op == 2){
      if (topo == NULL){
         // a pilha está vazia
         cout<<"Pilha vazia!";
      }
      else{
         // a pilha contém elementos estes serão mostrados do último inserido ao primeiro
         cout<<"\nConsultando toda a pilha\n";
         aux = topo;
         while (aux != NULL){
            cout<<aux->num<<" ";
            aux = aux->prox;
         }
      }
   }
   if (op == 3){
      if (topo == NULL){
         // a pilha está vazia
         cout<<"Pilha vazia!!";
      }
      else{
         // a pilha contém elementos e o último elemento inserido será removido
         aux = topo;
         cout<<"Número "<<topo->num<<" -> removido";
         topo = topo->prox;
         delete(aux);
      }
   }
   if ( op == 4){
      if( topo == NULL){
         // a pilha está vazia
         cout<<"Pilha vazia!!";
      }
      else{
         //a pilha será esvaziada
         aux=topo;
         while( aux != NULL){
            topo = topo->prox;
            delete(aux);
            aux = topo;
         }
         cout<<"Pilha esvaziada";
      }
   }
   if ( op == 5){
      cout<<"Tchau!!!";
   }
}


