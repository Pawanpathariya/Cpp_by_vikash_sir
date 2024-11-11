#include<iostream>
using namespace std;
int main(){
//dynamic array
int r,c;
cout<<"enter row and col ";
cin>>r>>c;
int arr[r][c];

for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        cout<<"Enter number at index "<<i<<j<<" ";
        cin>>arr[i][j];
    }
}

for(int i=0;i<r;i++){
     for(int j=0;j<c;j++){
        cout<<arr[i][j]<<" \t";
    }
    cout<<"\n";
}
}  