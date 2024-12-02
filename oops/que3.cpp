#include<iostream>
using namespace std;
class Table{

    public:
    void static mul(int n){
      for(int i=1;i<=10;i++){
        cout<<n<<" * "<<i<<" = "<<n*i<<endl;
      }
    } 
};

int main(){
    int n;
    cout<<"Enter number ";
    cin>>n;
    Table::mul(n);
}
