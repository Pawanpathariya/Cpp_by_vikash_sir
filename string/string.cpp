#include<iostream>
#include<string.h>
using namespace std;
int main(){
char c[10];
char v[10];
cout<<"enter name ";
cin>>c;
cout<<"enter name ";
cin>>v;
if(strcmp(c,v)==0){
    cout<<"Matched \n";
}
else{
    cout<<"not Matched \n";
}
cout<<"name "<<c<<"\n";
cout<<"Reverse "<<strrev(c)<<"\n";
cout<<"length "<<strlen(c)<<"\n";
cout<<"upper "<<strupr(c)<<"\n";
cout<<"lower "<<strlwr(c)<<"\n";
cout<<"merge "<<strcat(c,v)<<"\n";
strcpy(c,v);
cout<<"copy "<<c<<" "<<v<<"\n";
}