/* //operator overloading  is use to redefine the nature of operator for non primitive data type their is two type of operator overloading 
1.Unary operator overloading
2.Binary operator overloading
note: it is use to solve the complex data type 
*/
#include<iostream>
using namespace std;   
class Top{
int a,b;
public:
Top(int x,int y){
    a=x;
    b=y;
}
Top operator+(Top obj){
    Top t(obj);
    t.a=a+obj.a;  
     t.b=b+obj.b;
     cout<<"kg = "<<t.a<<endl;
     cout<<"gm = "<<t.b<<endl;
     return t;
}

};
int main(){
Top obj(12,14);
Top obj2(12,14);
obj+obj2;
}


