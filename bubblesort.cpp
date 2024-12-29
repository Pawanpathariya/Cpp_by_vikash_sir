#include<iostream>
using namespace std;

void bubble(int arr[],int s){
for(int i=0;i<s;i++){
        bool f=true;
    for(int j=0;j<s-i-1;j++){
        if(arr[j]>arr[j+1]){
            int t=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=t;
            f=false;
        }


    }
    if(f){
        break;
    }
}
}

int main(){
int arr[]={4,2,3,1,6};
int s=sizeof(arr)/sizeof(arr[0]);
cout<<"before sorting ";
for(int i=0;i<s;i++){
    cout<<arr[i]<<" ";
}
cout<<"\n";
bubble(arr,s);
cout<<"\nAfter sorting ";
for(int i=0;i<s;i++){
    cout<<arr[i]<<" ";
}
}
