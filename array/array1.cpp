#include<iostream>
using namespace std;
int main(){
 int arr[]={1,20,30};
 cout<<*arr+1<<endl;//2 (1+1)
 cout<<*(arr+1)<<endl;//20 (arr+1);
 cout<<*(arr+4)<<endl;//exception drawback of array garbage value
 cout<<-2[arr]<<endl;
 cout<<arr[-2];//exception drawback of array garbage value
}