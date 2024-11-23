/*types of classes :
there are many types of classes
 1.single class : if a prog having only one class is called single class 
 2.anonymous class : a class which does not having its own name is called a anonymous class 
 3.multi class(multiple class): if a prog having more then one class is called multi classes and we have to create multi objects
4.composite class :it contain the object of previous class
 */

//anonymous class : a class which does not having its own name is called a anonymous class 
// note: in anonymous class we have to create a object while creating it .
#include<iostream>
using namespace std;
class{
    int a,b,c;
    public:
    void sum(int x,int y)
{
        a=x;
        b=y;
        cout<<a+b<<endl;
        }
    void sum(int x,int y,int z)
    {
        a=x;
        b=y;
        c=z; 
        cout<<a+b+c<<endl;
        }
    }obj;
int main(){
    obj.sum(12,2);
    obj.sum(12,2,4);
}
