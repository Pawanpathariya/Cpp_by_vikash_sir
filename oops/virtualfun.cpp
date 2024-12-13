//pure virtual function is initialized  by 0 a class which contain pure virtual function is called abstract class and we have to override the pure virtual function in each child class otherwise it will not allow to allocate memory object of a child class

#include<iostream>
using namespace std;
class RBI{
  public:
  virtual void helpdesk()=0; 

};

class SBI : public RBI{
  public:
  void loan(){
    cout<<"SBI loan interest 9% \n";
  }
  void helpdesk(){
    cout<<"SBI helpdesk \n";
  }
};

class ICICI : public RBI{
  public:
  void loan(){
    cout<<"ICICI loan interest 8% \n";
  }
  void helpdesk(){
    cout<<"ICICI helpdesk \n";
  }
};  

int main(){ 
  RBI *ptr; 
  SBI obj1;
  ptr=&obj1;
  ptr->helpdesk(); 
  ICICI obj2;
  ptr=&obj2; 
  ptr->helpdesk();
  }