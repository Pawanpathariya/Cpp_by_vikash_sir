#include<iostream>
using namespace std;

void insrtsort(int arr[],int n){
    for(int i=0;i<n;i++){
        int key=i;
    while(key>0 && arr[key]<arr[key-1]){
        int t=arr[key];
        arr[key]=arr[key-1];
        arr[key-1]=t;
        key--;
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
    insrtsort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}