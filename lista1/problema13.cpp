#include <iostream>
using namespace std;
int main(){
    int n, contador=0,contnegativo=0,contpositivo=0;
    float media, soma=0,porcentagemnegativos=0,porcentagempositivos=0;
    // cout<<" informe a seguencia de numeros com o ultimo numero sendo 0"<<endl;
    cin>>n;
    while (n!=0){
        soma+=n;
        contador++;
        cin>>n;
        if (n<0)
        {
            contnegativo++;
        }
        else{
            contpositivo++;
        }
            
    }
    media= soma/contador;
    porcentagemnegativos=(contnegativo/contador)*100;
    porcentagempositivos=(contpositivo/contador)*100;
    cout<<"Media "<<media<<endl;
    cout<<"Soma "<<soma<<endl;
    cout<<"Positivo " <<contpositivo<<endl;
    cout<<"Negativos "<<contnegativo<<endl;
    cout<<"Porcentagem de neagitvos "<<porcentagemnegativos<<endl;
    cout<<"Porcentagem de positivos "<<porcentagempositivos<<endl;
    return 0;
}

