/* //shallow copy 
#include<iostream>
using namespace std;   

class cybrom{
  public:
  int a;
  cybrom(int x){
    a=x;
  }

  void display(){
    cout<<"The value of a is "<<a<<endl;
  }
};


int main(){
 cybrom obj(12);
 obj.display();
 //shallow copy :-by default class having a shallow copy structure we need not to create it and it share the address of existing object to a new one 
 cybrom obj2(obj);
 obj2.display();
}
*/
//deep copy
#include<iostream>
using namespace std;   

class cybrom{
  public:
  int * a;
  cybrom(int x){
    a=new int;
   *a=x;
  }

  cybrom(cybrom &obj){
    *a=*obj.a;
  }
void change(int d){
    *a=d;
}
  void display(){
    cout<<"The value of a is "<<*a<<endl;
  }
};


int main(){
cybrom obj(12);
obj.display();
cybrom obj2(obj);
obj2.display();
obj.change(13);
obj.display();
obj2.display();

}