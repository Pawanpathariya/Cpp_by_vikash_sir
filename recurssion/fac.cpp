//wap to find factorial using recurssion
#include<iostream>
using namespace std;
int fac(int a ){
    if(a==1){ 
    return 1;
    }
  return a*fac(a-1);
}
int main(){
    cout<<"enter number ";
    int a;
    cin>>a;
    cout<<fac(a);
}