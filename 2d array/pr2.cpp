/*W.A.P. for transpose matrix in two dimension array?(note: row becomes column and column becomes row)*/
#include<iostream>
using namespace std;
int main(){
    int arr[3][3]={3,4,5,6,7,8,11,12,13};
    cout<<"Original array \n";
   for(int i=0;i<3;i++){
    for(int k=0;k<3;k++){
        cout<<arr[i][k]<<" \t";
    }
    cout<<"\n";
   }
   for(int i=0;i<3;i++){
    for(int j=i+1;j<3;j++){
      int temp=arr[i][j];
      arr[i][j]=arr[j][i];
      arr[j][i]=temp;
    }
   }
  cout<<"Transpose array \n";
   for(int i=0;i<3;i++){
    for(int k=0;k<3;k++){
        cout<<arr[i][k]<<" \t";
    }
    cout<<"\n";
   }
}