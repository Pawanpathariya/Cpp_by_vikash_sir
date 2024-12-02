
//distructor- it is use to deallocate the memory of occupied  object
 /*

syntax-  ~classname(){
statement code 
}
*/

#include<iostream>
using namespace std;   

class Cybrom{
public:

int x=10;
Cybrom(){
    cout<<x<<endl;
}

~Cybrom(){
    cout<<"Distructor called "<<endl;
}
};
int main(){
Cybrom obj;
}


