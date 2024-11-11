//W.A.P. to finding single missing number in a consecutive value in an array
#include<iostream>
using namespace std;
int main(){
  int n=5;
int arr[n];
 for(int i=0;i<n;i++){
    cout<<"Enter value of index "<<i<<" : ";
    cin>>arr[i];
    }
int diff;
diff=arr[1]-arr[0];

for(int i=1;i<n;i++){
  if(arr[i]!=arr[i-1]+diff){
    cout<<"Missing number is "<<arr[i-1]+diff <<" ";
    break;
  }
}
}
