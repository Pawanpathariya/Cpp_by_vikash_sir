//power using recurssion
#include <iostream>
using namespace std;
int power(int num,int pow) {
   if(pow==0){
    return 1;
   }
   return num*power(num,pow-1);
}
int main() {
int num,pow;
cout<<"Enter number and its power ";
cin>>num>>pow;
cout<<power(num,pow);
}
