//W.A.P.  to find square root of valid number in an array?
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    cout<<"Enter length of arr ";
    cin>>n;
int arr[n];

 for(int i=0;i<n;i++){
    cout<<"Enter value of index "<<i<<" : ";
    cin>>arr[i];
  }

for(int i=0;i<n;i++){
  int num;
  bool flag=false;
for(int j=2;j<arr[i]/4;j++){
if(j*j==arr[i]){
  flag =true;
  num=j;
}
}
if(flag){
  cout<<"The square root of "<<arr[i]<<" is "<<num<<"\n";
}
  }
}