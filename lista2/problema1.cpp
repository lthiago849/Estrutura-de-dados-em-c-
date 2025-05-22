#include <iostream>
using namespace std;

float calcularmedia(float peso[], int comp){
    float soma = 0;
    for (int i=0; i< comp; i++){
        soma += peso[i];
    }
    return soma/comp;
}
int main(){
    int comp;
    cout<<"iNFORME A QUANTIDADE DE COMPETIDOES: "<<endl;
    cin>>comp;

    float peso[comp];

    for ( int i = 0; i < comp; i++)
    {
            
    cout<<"INFORME O PESO DO COMPETIDOR: "<< i + 1<<endl;
    cin>>peso[i];
    }
    for (int i = 0; i < comp; i++)
    {
        cout<<peso[i]<< " ";
    }
    float media = calcularmedia(peso, comp);
    cout<<"media "<<media <<endl;

    for (int i = 0; i < comp; i++)
    {
        if (peso[i]>media)
        {
            cout<<"o competidos : "<< i+1 <<" ESTA ACIMA DA MEDIA";
        }
        
    }
    

    return 0;
}