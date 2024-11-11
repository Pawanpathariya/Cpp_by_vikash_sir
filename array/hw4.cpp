//W.A.P. to display the sum of alternate values of an array?
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter length of arr ";
    cin>>n;
int arr[n];

 for(int i=0;i<n;i++){
    cout<<"Enter value of index "<<i<<" : ";
    cin>>arr[i];
    }

int sum=0;
for(int i=0;i<n;i=i+2){
  sum=sum+arr[i];
}
cout<<"Sum of alternative is "<<sum;
}