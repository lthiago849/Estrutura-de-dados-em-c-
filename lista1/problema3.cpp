#include <iostream>
using namespace std;
int main(){
    int numerador, denominador, divisao, resto;
    cout<<"Informe o numerador"<<endl;
    cin>>numerador;
    cout<<"Informe o denominador"<<endl;
    cin>>denominador;

    if (denominador!=0)
    {
        divisao= numerador/denominador;
        resto=numerador%denominador;
        cout<<divisao<<endl;
        cout<<resto<<endl;
    }
    else{
        cout<<"erro"<<endl;
    }
    return 0 ;
}