// with the help of friend class we can access the private data member of another class outside  of it 
#include<iostream>
using namespace std;
class Cybrom{
   int note=1000;
public:
  void display(){
    cout<<"The value of note is "<<note<<endl;
  }
};
int main(){ 
Cybrom obj;
obj.display();
}