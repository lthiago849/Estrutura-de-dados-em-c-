#include <iostream>
using namespace std;
int main(){
    int i=1,soma=0;
    for (i=1; i < 1000; i++)
    {
        if (i%3==0 or i%5==0)
        {
            soma+=i;
        }
        
    }
    cout<<soma<<endl;
    return 0;
}