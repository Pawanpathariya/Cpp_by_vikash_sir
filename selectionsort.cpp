#include<iostream>
using namespace std;

void selection(int arr[],int s){
for(int i=0;i<s;i++){
    int key=i;
    for(int j=key;j<s;j++){
        if(arr[key]>arr[j]){
            key=j;
        }
    }

    if(key!=i){
        int t=arr[i];
        arr[i]=arr[key];
        arr[key]=t;
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
    cout<<endl;
    selection(arr,n);
    cout<<"After sorting ";
     for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    }