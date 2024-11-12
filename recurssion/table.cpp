//wap to create table using recurssion
#include<iostream>
using namespace std;
void table(int a,int s=1){
    if(s>10){ 
    return ;}
    cout<<a<<" * "<<s<<" = "<<a*s<<"\n";
    table(a,s+1);}

int main(){
    cout<<"enter number ";
    int a;
    cin>>a;
table(a);}