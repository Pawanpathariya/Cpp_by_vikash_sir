/*function calling it self is known as recursion  /self join
there are two types of recurssion
1.head
2.tail
*/
#include<iostream>
using namespace std;

int cybrom(int a){
    if(a<1){
        cout<<endl;
        return a;
    }
    cout<<a<<"\n";//head recurssion
    cybrom(a-1);
    cout<<a<<"\n";//tail recurssion
}

int main(){
cybrom(5);
}
