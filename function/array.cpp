#include<iostream>
using namespace std;

void arr(int arr[],int s){
    for(int i=0;i<s;i++){
        cout<<arr[i]<<"\t";
    }
}

int main(){
//passing array as a parameter in function

int x[]={1,2,3,4,5};
int s=sizeof(x)/sizeof(x[0]);

arr(x,s);
}