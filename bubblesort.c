#include<iostream>
using namespace std;

void bubble(int arr[],int s){
for(int i=0;i<s;i++){
bool flag=true;
for(int j=0;j<i-1;j++){
if(arr[i]<arr[i-1]){
int temp=arr[i];
arr[i]=arr[i-1];
arr[i-1]=temp;
flag=false;
}
}
if(flag){
break;
}

}

}

int main(){
int arr[]={3,2,4,1,5};
int s=sizeof(arr)/sizeof(arr[0]);

cout<<"Before sorting \n";
for(int i=0;i<s;i++){
cout<<arr[i]<<" ";
}

bubble(arr,s);
cout<<"\nAfter sorting \n";
for(int i=0;i<s;i++){
cout<<arr[i]<<" ";
}
}
