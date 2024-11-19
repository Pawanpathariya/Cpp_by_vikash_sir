/*we can use function inside a class in two ways
1.Function declare and  define inside a class
2.functio  declare in a class but define outside of class
 */

#include<iostream>
using namespace std;
class cybrom{
    int a,b;
    public:
    void sum(int x,int y);
};
void cybrom::sum(int x,int y){
        a=x;
        b=y;
        cout<<a+b;
    }

int main(){
    cybrom obj;
    obj.sum(12,2);
}
