#include<iostream>
using namespace std;

int add=1;

void fac(int a){
for(int i=a;i>0;i--){
    add*=i;
}
}
void display(){
    cout<<"factorial is "<<add;
}
int main(){
    int a;
    cout<<"enter value : ";
    cin>>a;
    fac(a);
  display();
}