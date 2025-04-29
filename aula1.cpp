#include <iostream>
using namespace std;
int main(){
    //comentario
    //escrever na tela
    cout<<"Mensagem que vai aparecer\n";
    int x,a=10,b;
    b=20;
    x=a+b;

    cout<<endl<<endl<<endl<<x<<endl;
    float altura;
    int idade;
    string nome;
    char sexo; //m ou f
    cout<<"Digite seu nome, idade, altura, sexo"<<endl;
    //entrada de dados cin>>variavel;
    cin>>nome;
    cin>>idade;
    cin>>altura>>sexo;
    cout<<"Nome : "<<nome<<endl;
    cout<<"Idade :"<<idade<<endl;
    cout<<"Altura : "<<altura<<endl;
    cout<<"Sexo : "<<sexo<<endl;

    //condicional: if/else e switch
    if (idade>=18){
        cout<<nome<<" é maior de idade"<<endl;
        cout<<" Pode tirar carteira de motorista"<<endl;

    }else{
        cout<<nome<<" é menor de idade"<<endl;}
    return 0;
}