#include <iostream>
using namespace std;
int main(){
    int h,m,ch,cm,s;
    cout<<"digite hora, minuto"<<endl;
    cin>>h;
    cin>>m;
    ch = h*3600;
    cm = m*60;
    s = ch+cm;
    cout<<h<<endl;
    cout<<m<<endl;
   std:: cout<<"voce tem "<< s << " segundos, nessas "<< h<< " horas e "<< m <<" minutos"<< std::endl;
}
