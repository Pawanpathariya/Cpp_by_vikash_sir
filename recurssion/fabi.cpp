//wap to find fabinoci series using recurssion
#include <iostream>
int c;
using namespace std;
int fibonacci(int n,int a=0,int b=1) {
    if (n <= 1) {
        return c;
    }
  c=a+b;
  fibonacci(n-1,b,c);
}
int main() {
    int n;
    cout << "Enter number: ";
    cin >> n;
    cout << fibonacci(n) << endl;

}
