/*W.A.P. to find prime value in a two dimension array?*/

#include<iostream>
using namespace std;
int main(){
    int arr[3][3]={3,4,5,6,7,8,11,12,13};
   cout<<"Prime number are :";
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            bool flag=true;
        for(int k=2;k<=arr[i][j]/2;k++){
            if(arr[i][j]%k==0){
                flag=false;
            }
        }
        if(flag){
            cout<<arr[i][j]<<" ";
        }
        }
    }
}