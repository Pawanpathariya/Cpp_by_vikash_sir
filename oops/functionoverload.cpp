#include<iostream>
using namespace std;
class cybrom{
    int a,b,c;
    public:
    void sum(int x,int y);
    void sum(int x,int y,int z);
};
void cybrom::sum(int x,int y){
        a=x;
        b=y;
        cout<<a+b<<endl;
    }
void cybrom::sum(int x,int y,int z){
        a=x;
        b=y;
        c=z;
        cout<<a+b+c<<endl;
    }

int main(){
    cybrom obj;
    obj.sum(12,2);
    obj.sum(12,2,4);
}
