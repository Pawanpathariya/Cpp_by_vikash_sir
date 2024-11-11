#include<iostream>
using namespace std;
void swap(int &x,int &y) //call by reference 
{
 x=x+y;
 y=x-y;
 x=x-y;
 cout<<"value of x = "<<x<<"\n";
 cout<<"value of y = "<<y<<"\n";
}
int main(){  
int a,b;
cout<<"Enter two number ";
cin>>a>>b;
swap(a,b);
 cout<<"value of a = "<<a<<"\n";
 cout<<"value of b = "<<b<<"\n";
}  