#include<iostream>
using namespace std;


class Cybrom{
public:
 int sum=1;
void fact(int a);
void cube(int a);
};

void Cybrom::fact(int a){
    for(int i=1;i<=a;i++){
      sum=sum*i;
    }
    cout<<" fact : "<<sum<<"\n";
}

void Cybrom::cube(int a){
    cout<<"Cube of "<<a<<" is : "<<a*a*a;
}

int main(){
    int n;
    cout<<"Enter number ";
    cin>>n;

    Cybrom obj;
    obj.fact(n);
    obj.cube(n);

}