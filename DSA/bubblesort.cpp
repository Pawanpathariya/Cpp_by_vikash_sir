#include<iostream>
using namespace std;

void bubblesort(int arr[],int n){
for(int i=0;i<n;i++){
    bool f=true;
for(int k=0;k<n-i-1;k++){
if(arr[k]>arr[k+1]){
    int t=arr[k];
    arr[k]=arr[k+1];
    arr[k+1]=t;
    f=false;
}
}
if(f){
    break;
}
}
}
int main(){
    int arr[]={3,1,4,5,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"Before sorting ";
     for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\nAfter sorting ";
    bubblesort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}