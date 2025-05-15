#include <iostream>
using namespace std;
int soma(int n){
    int resto, soma=0;
    while(n/10 >0){

        resto =n%10;
        cout<<"resto "<<resto<<endl;
        n=n/10;
        soma= n+resto;
        cout<<"soma "<<soma<<endl;
        cout<<"divisao "<<n<<endl;
        
    }
    return soma;
}
void Harshad(int n){

    if (n%soma(n) ==0){
                cout<<"É um Harshad";}
            else
                cout<<"Nao é um Harshad";
}
int main(){
    int n;
    cout<<"Digite um numero : "<<endl;
    cin>>n;
    Harshad(n);
    return 0;
}