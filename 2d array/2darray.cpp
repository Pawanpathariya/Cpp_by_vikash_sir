/* in a 2 dimension array we use two subscript where first subscript belong to row and second subscript belong to 
coloumn mostly database uses table as 2 dimension array 
in a 2 dimension array we use two nested loop where first loop dedicated for row and second is for coloumn 
It is also called matrix in mathematically term.
*/

#include<iostream>
using namespace std;
int main(){
int arr[2][3]={1,2,3,4,5,6};
for (int i=0;i<2;i++){
  for(int j=0;j<3;j++){
    cout<<arr[i][j]<<"\t";
  }
  cout<<"\n";
} 
}