// W.A..P to display only unique value in an array?
#include<iostream>
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
/*
//only unique
  for(int i=0;i<n;i++){
    int count=0;
   for(int j=0;j<n;j++){
    if(arr[i]==arr[j]){
        count++;
      }
   }
   if(count==1){
    cout<<arr[i]<<" ";
     }
   }*/
//print atleat one 
  for(int i=0;i<n;i++){
    bool flag = true;
    for(int j=0;j<i;j++){
     if(arr[i]==arr[j]){
        flag=false;
        break;
     }
    }
    if(flag){
        cout<<arr[i]<<" ";
    }
  }
}