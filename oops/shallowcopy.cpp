#include<iostream>
#include<cstring>
using namespace std;

class Shallow{
char *name;

public:
Shallow(char *n){
name=new char[20];
strcpy(name,n);
}

void concat(char *s){
    strcat(name,s);
}

void display(){
    cout<<"Full name "<<name<<endl;
}
};
int main(){
Shallow obj("Pawan");
Shallow obj2(obj);
obj.display();
obj2.display();
obj.concat(" Pathariya");
obj.display();
obj2.display();
}