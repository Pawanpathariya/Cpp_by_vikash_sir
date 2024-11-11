/*W.A.P. to shift all zero at the end but relative order should be maintained?
Ex: arr={2,4,0,9,0,7}
Output:{2,4,9,7,0,0} */

#include<iostream>
using namespace std;

int main(){
int arr[]={2,4,0,9,0,7};

int len=sizeof(arr)/sizeof(arr[0]);
int index=0;

for(int i=0;i<len;i++){
    if(arr[i]!=0){
      arr[index]=arr[i];
      index++;
  }
}

for(index;index<len;index++){
arr[index]=0;
}

for(int i=0;i<len;i++){
    cout<<arr[i]<<" ";
  } 
}