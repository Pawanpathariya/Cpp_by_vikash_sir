/*composite class: it contain the object of previous class is called composite class */
#include<iostream>
using namespace std;
class c1{
public:
void display(){
    cout<<"c1 class \n";
}
};

class c2{
    c1 obj2;
public:
void show(){
    cout<<"c2 class \n";
    obj2.display();
}
};


int main(){
    c2 obj;
    obj.show();
}
