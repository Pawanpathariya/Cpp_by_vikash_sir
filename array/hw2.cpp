//W.A..P.   to  only  display the prime values in an array?
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

for(int i=0;i<n;i++){
    bool flag=true;
    for(int j=arr[i]-1;j>1;j--){
    if(arr[i]%j==0){
        flag=false;
        break;
       }
    }
    if(flag){
        cout<<arr[i]<<" ";
    }
 }
}