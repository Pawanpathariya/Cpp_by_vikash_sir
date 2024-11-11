#include<iostream>
using namespace std;
int main(){
     /*
     there are two types of array:
     1)Numeric array:get data by number/indexing  -one dimensional -two dimensional -multi dimension 
     2)Associative array: get the data by key and value(pair)
     */

    // One Dimension array

    //datatype varname[size];

 int arr[]={22,55,6,24,64}; 
 int len=sizeof(arr)/sizeof(arr[0]);
 cout<<len;

 char ch[]="Welcome";
 int len2=sizeof(ch)/sizeof(ch[0]);
 cout<<len;    
}
