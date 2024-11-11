#include<iostream>
using namespace std;

void mul(int a=1,int b=1){  //if we send only perameter it take second equal to 1 and if we send any value to b it over write it but if we me give first value and not to second it give us error
     cout<<"Result "<<a*b<<"\n";
    }
int main(){
    mul();
    mul(2);
    mul(2,3);
}