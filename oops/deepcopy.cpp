#include<iostream>
#include<cstring>
using namespace std;
class Deep{
char *name;
public:
Deep(char *n){
    name=new char[20];
    strcpy(name,n);
}

Deep(Deep &obj){
    name=new char[20];
    strcpy(name,obj.name);
}

void concate(char *s){
    strcat(name,s);
}

void display(){
    cout<<"Full name "<<name<<endl;
}
};

int main(){
Deep obj("Pawan");
Deep obj2(obj);
obj.display();
obj2.display();
obj.concate(" Pathariya");
obj.display();
obj2.display();
}