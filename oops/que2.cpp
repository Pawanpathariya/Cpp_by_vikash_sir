/*WAP to create swap function using composite class where variable will be declared in previous class */
#include <iostream>
using namespace std;

class Variables {
public:
    int a;
    int b;

void set(int n,int m){
a=n;
b=m;
}
};


class Swap {
public:

Variables obj;
void insert(int a,int b){
obj.set(a, b);
}

 void swaping(){
 int temp=obj.a;
obj.a=obj.b;
obj.b=temp;
 }

void display(){
    cout<<"the value of a "<<obj.a<<endl;
    cout<<"the value of b "<<obj.b<<endl;
}
};

int main() {
  Swap ob;
  ob.insert(5,10);
  cout<<"value before swaping \n";
    ob.display();
  ob.swaping();
    cout<<"\nvalue after swaping \n";
  ob.display();
}