/*W.A.P to multiplication of two matrix */
#include<iostream>
using namespace std;
int main(){
int arr1[2][3]={1,2,3,4,5,6};
int arr2[3][3]={10,20,30,40,50,60,70,80,90};
int temp;
cout<<"--------------------------------------------------------------\n";
cout<<"First matrix \n";
for(int r=0;r<2;r++){
    for(int c=0;c<3;c++){
        cout<<arr1[r][c]<<" ";
    }
    cout<<endl;
}
cout<<"--------------------------------------------------------------\n";
cout<<"Second matrix \n";
for(int r=0;r<3;r++){
    for(int c=0;c<3;c++){
        cout<<arr2[r][c]<<" ";
    }
    cout<<endl;
}
cout<<"--------------------------------------------------------------\n";

cout<<"Multiplication of two matrix \n";
int ans[2][3],sum;

for(int r=0;r<2;r++){
    for(int c=0;c<3;c++){
      sum=0;
      for(int k=0;k<3;k++){
       sum+=arr1[r][k]*arr2[k][c];
       ans[r][c]=sum;
      }
    }
}

for(int r=0;r<2;r++){
    for(int c=0;c<3;c++){
        cout<<ans[r][c]<<" ";
    }
    cout<<endl;
}
cout<<"--------------------------------------------------------------\n";
}