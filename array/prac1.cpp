//even
#include<iostream>
using namespace std;
int main(){
int arr[5];
 for(int i=0;i<5;i++){
    cout<<"Enter value of index "<<i<<" : ";
    cin>>arr[i];
    }
 for(int i=0;i<5;i++){
    if(arr[i]%2==0){
        cout<<arr[i]<<" ";
    }
 }
}
