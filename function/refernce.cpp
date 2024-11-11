#include<iostream>
using namespace std;

void arrs(int ar[],int s){
for(int i=0;i<s;i++){
    ar[i]=ar[i]+10;
    cout<<ar[i]<<" \t";
}

}
int main(){
int arr[]={1,2,3,4,5};
int size=sizeof(arr)/sizeof(arr[0]);

arrs(arr,size);
cout<<"\n";
for(int i=0;i<size;i++){
    cout<<arr[i]<<" \t";
}
}