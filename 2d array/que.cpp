#include<iostream>
using namespace std;
int main(){
int arr[3][3]={2,6,9,5,8,4,3,7,1};
cout<<"Enter "<<3*3<<" value ";
for (int i=0;i<3;i++){
  for(int j=0;j<3;j++){
    cin>>arr[i][j];
  }
} 
int sum=0;
cout<<"Even Number are :\n";
for (int i=0;i<3;i++){
  for(int j=0;j<3;j++){
   sum+=arr[i][j];
  }
} 
cout<<"Total "<<sum;
}