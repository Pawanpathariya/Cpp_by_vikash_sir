#include<iostream>
using namespace std;
void insrt(int arr[],int s){
for(int i=0;i<s;i++){
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
int arr[]={4,2,3,1,6};
int s=sizeof(arr)/sizeof(arr[0]);
cout<<"before sorting ";
for(int i=0;i<s;i++){
    cout<<arr[i]<<" ";
}
cout<<"\n";
insrt(arr,s);
cout<<"\nAfter sorting ";
for(int i=0;i<s;i++){
    cout<<arr[i]<<" ";
}
}
