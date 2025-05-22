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
    int comp= 11;
    // cout<<"iNFORME A QUANTIDADE DE COMPETIDOES: "<<endl;
    // cin>>comp;

    float peso[comp]=  {137.39, 42.48, 91.62, 121.83, 46.35,
                      98.08, 72.64, 116.12, 90.92, 126.63, 68.70};

    // for ( int i = 0; i < comp; i++)
    // {
            
    // cout<<"INFORME O PESO DO COMPETIDOR: "<< i + 1<<endl;
    // cin>>peso[i];
    // }
    // for (int i = 0; i < comp; i++)
    // {
    //     cout<<peso[i]<< " ";
    // }
    float media = calcularmedia(peso, comp);
    cout<<"media "<<media <<endl;

    // for (int i = 0; i < comp; i++)
    // {
    //     if (peso[i]>media)
    //     {
    //         cout<<"o competidos : "<< i+1 <<" ESTA ACIMA DA MEDIA";
    //     }
        
    // }
    
    for (int i = 0; i < comp; i++)
    {
        if (peso[i]>media)
        {
            cout<< i <<endl;
        }
        
    }
    return 0;
}