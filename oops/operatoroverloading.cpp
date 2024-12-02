/* //operator overloading  is use to redefine the nature of operator for non primitive data type their is two type of operator overloading 
1.Unary operator overloading
2.Binary operator overloading
note: it is use to solve the complex data type 
*/
#include<iostream>
using namespace std;   
class Top{
int a;
public:
Top(int x){
    a=x;
}
void operator++(){
    a++;
    cout<<a<<endl;
}
void operator--(){
    a--;
    cout<<a<<endl;
}

};
int main(){
Top obj(12);
++obj;
--obj;
}


