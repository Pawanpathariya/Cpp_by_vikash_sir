#include<iostream>
using namespace std;

int product(int qty){
return 500*qty;
}

int main(){ 
int q,r;
cout<<"Enter quantity ";
cin>>q;
r=product(q)+2000;
cout<<r;
}  