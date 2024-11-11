#include<iostream>
using namespace std;
int dealer(int qty){
return 80*qty;
}
int main(){  
int q,r,qu;
cout<<"Enter quantity ";
cin>>q;
r=dealer(q);
cout<<"Your bill is :"<<r<<"\n";
cout<<"enter quantity of fuel you want to feel ";
cin>>qu;
cout<<"Coustomer bill :"<<dealer(qu)+(qu*5); 
}  