#include <iostream>
using namespace std;
void selection_sort(int vetor[], int tam){
 int menor, aux_troca;
 for (int indice = 0; indice < tam-1; indice++) {
    menor = indice;
    cout<<menor<<" menor antes do for "<<endl;
    for (int j = indice + 1; j < tam; j++) {
    if (vetor[j] < vetor[menor]){
    menor = j;
    cout<<"menor depois do for:"<<menor<<endl;
    }
    }
 aux_troca = vetor[indice];
 cout<<"aux_troca : "<<aux_troca<<endl;
 vetor[indice] = vetor[menor];
cout<<"vetor[indice] : "<<vetor[indice]<<endl;

 vetor[menor] = aux_troca;
 cout<<"vetor[menor] : "<<vetor[menor]<<endl;

 }
}


int main(){
    int tam;
    cout<<"insira o tamanho da lista: "<<endl;
    cin>>tam;
    int vetor[tam];
    cout<<"insira os elementos da lista : "<<endl;

    for (int i = 0; i < tam; i++)
    {
        cout<<"insira elemento da posicao "<< i+ 1<< ": "<<endl;
        cin>>vetor[i];
    }
    
    selection_sort(vetor,tam);

    for (int i = 0; i < tam; i++)
    {
        cout<<vetor[i]<<" ";
    }
    cout<<endl;
    return 0;
}