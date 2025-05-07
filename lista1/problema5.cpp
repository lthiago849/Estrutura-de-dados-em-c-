#include <iostream>
using namespace std;
int main(){
    int moeda,nota100=100,nota50=50,nota20=20,nota10=10,nota5=5,nota2=2;
    int cont100=0,cont50=0,cont20=0,cont10=0,cont5=0,cont2=0;
    cout<<"Informe a qunatidade "<<endl;
    cin>>moeda;
    while (moeda>=nota100)
    {
        cont100++;
        moeda-=nota100;
    }
    while (moeda>=nota50)
    {
        cont50++;
        moeda-=nota50;
    }
    while (moeda>=nota20)
    {
        cont20++;
        moeda-=nota20;
    }
    while (moeda>=nota10)
    {
        cont10++;
        moeda-=nota10;
    }
    while (moeda>=nota5)
    {
        cont5++;
        moeda-=nota5;
    }
    while (moeda>=nota2)
    {
        cont2++;
        moeda-=nota2;
    }

    cout<<"voce tem "<<cont100<<"notas de 100 e "<<cont50<<" notas de 50 e "<<cont20<<" notas de 20 e "<<cont10<<" notas de 10 e"<<cont5<<" notas de 5 e "<<cont2<<" notas de 2"<<endl;
    return 0;
}