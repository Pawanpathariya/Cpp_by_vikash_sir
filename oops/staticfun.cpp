/*static function is an attribute of a class and it can be access with or withoot object */
#include<iostream>
using namespace std;
class cybrom{
    int a,b,c;
    public:
    void static sum(int x,int y,int z,int n);
};

void cybrom::sum(int x,int y,int z,int n){
      
        cout<<x+y+z+n<<endl;
    }

int main(){
    cybrom::sum(1,2,2,4);
}
