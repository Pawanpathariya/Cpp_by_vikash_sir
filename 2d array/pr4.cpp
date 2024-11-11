#include<iostream>
using namespace std;
int main(){
 int arr[3][3]={3,4,5,6,7,8,11,12,13};
  int find;

cout<<"matrix is \n";
  for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        cout<<arr[i][j]<<" \t";
    }
    cout<<"\n";
  }


  cout<<"Enter number to find ";
  cin>>find;
bool flag =true;
  for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        if(arr[i][j] == find){
          flag=false;
        cout<<"number found at index "<<i<<j;
        }
    }
  }
  if(flag){
    cout<<"Number is not found ";
  }
}
