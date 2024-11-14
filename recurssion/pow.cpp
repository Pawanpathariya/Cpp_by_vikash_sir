//power using recurssion
#include <iostream>
using namespace std;
int power(int num,int pow){
   if(num==0){
      return 0;
   }
    if(pow==0){
    return 1;
   }
   return num*power(num,pow-1);
}
int main(){
int num,pow;
cout<<"Enter number ";
cin>>num;
cout<<"Enter power ";
cin>>pow;
cout<<power(num,pow);
}
