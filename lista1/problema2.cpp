#include <iostream>
using namespace std;
int main(){
    int dinheiro,canhao=10000,polvora=2000,espada=1500,contcanhao=0,contpolvora=0,contespada=0;
    cout<<"Informe o quantidade de dinheiro : "<<endl;
    cin>>dinheiro;
    while (dinheiro>=canhao)
    {
        contcanhao++;
        dinheiro-=canhao;
    }
    while (dinheiro>=polvora)
    {
        contpolvora++;
        dinheiro-=polvora;
    }
    while (dinheiro>=espada)
    {
        contespada++;
        dinheiro-=espada;
    }
    cout<<"Voce pode comprar "<<contcanhao <<" canhoes e "<<contpolvora<< " polvoras e "<<contespada<<" espadas"<<endl;
    
    return 0;
}