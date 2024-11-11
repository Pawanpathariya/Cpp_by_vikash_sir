//W.A.P. to display array in descending orders?
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter length of arr ";
    cin>>n;
int arr[n];
//take
 for(int i=0;i<n;i++){
    cout<<"Enter value of index "<<i<<" : ";
    cin>>arr[i];
    }
//arange
for(int i=0;i<n;i++){
 for(int j=i;j<n;j++){
    if(arr[i]<arr[j]){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
 }
}
//print
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
}