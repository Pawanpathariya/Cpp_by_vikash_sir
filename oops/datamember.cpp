#include<iostream>
using namespace std;

class Cybrom{
    static int a;
public:
static void show(){
    a++;
    cout<<"Hello "<<a<<" \n";
}
};
int Cybrom::a=21;
int main(){ 
Cybrom obj,ob2;    
obj.show();//call by object
Cybrom::show();//without object
}