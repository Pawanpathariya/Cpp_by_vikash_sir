/*multi class(multiple class): if a prog having more then one class is called multi classes and we have to create multi objects*/
#include<iostream>
using namespace std;
class c1{
public:
void display(){
    cout<<"c1 class \n";
}
};
class c2{
public:
void show(){
    cout<<"c2 class \n";
}
};
int main(){
    c1 obj;
    c2 obj2;

    obj.display();
    obj2.show();
}
