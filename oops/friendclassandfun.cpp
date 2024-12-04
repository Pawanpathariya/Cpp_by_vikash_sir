// with the help of friend class we can access the private data member of another class outside  of it 

//friend function
/* #include<iostream>
using namespace std;
class Student2;
class Student1{
   int marks=90;
   friend void cmp(Student1,Student2);
};

class Student2{
int marks=97;
   friend void cmp(Student1,Student2);

};
void cmp(Student1 s1,Student2 s2){

  if(s1.marks>s2.marks){
cout<<"The Student 1 has highest marks "<< s1.marks;
  }

  else{
    cout<<"The  Student 2 has highest marks "<< s2.marks;

  }
}
int main(){ 
Student1 obj1;
Student2 obj2;
cmp(obj1,obj2);
} */

//friend class
#include<iostream>
using namespace std;
class Student2;
class Student1{
   int marks=90;
   friend void cmp(Student1,Student2);
};
class Student2{
int marks=97;
   friend void cmp(Student1,Student2);
};
void cmp(Student1 s1,Student2 s2){
  if(s1.marks>s2.marks){
cout<<"The Student 1 has highest marks "<< s1.marks;
  }
 else{
    cout<<"The  Student 2 has highest marks "<< s2.marks;
  }
}
int main(){ 
Student1 obj1;
Student2 obj2;
cmp(obj1,obj2);
}