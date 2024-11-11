//Wap to store data in array 
#include<iostream>
using namespace std;
int main(){
    /*cout<<INT_MAX;
    cout<<INT_MIN;*/

 int cyb[5];
 for(int i=0;i<5;i++){
    cout<<"Enter value of index "<<i<<" : ";
    cin>>cyb[i];
 }
 cout<<"Data is stored \n"; 
 for(int i=0;i<5;i++){
    cout<<cyb[i]<<" ";
 }
}