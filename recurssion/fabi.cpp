//wap to find nth term in fabinoci series using recurssion
#include <iostream>
using namespace std;
int fibonacci(int n) {
    if (n<=1) {
        return 1; 
        }
return fibonacci(n-1)+fibonacci(n-2);
}
int main(){
    int n;
    cout<<"Enter nth number: ";
    cin>>n;
    cout<<fibonacci(n)<<endl;
}
