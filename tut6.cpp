#include<iostream>
// there are two types of header files
// 1.system header files-comes frpm the COMPILER
// 2.user defined header files-created by the user
// #include "this.h"//-->this will produce error if this.h is not present in the current directory.<iostram> is present in the urrent directory so there is no error.
//endl = new line
using namespace std;

  int main(){
    int a=2,b=3;
      cout<<"operators in cpp:"<<endl;
    cout<<"The value of a+b is:"<<a+b<<endl;
    cout<<"The value of a%b is:"<<a%b<<endl;

//comparison operators:
    cout<<"The value of a==b is:"<<(a==b)<<endl;
    cout<<"The value of a>b is:"<<(a>b)<<endl;
    cout<<"The value of a!=b is:"<<(a!=b)<<endl;

//logical operators:
    cout<<"The value of this logical and operator is:"<<((a!=b) && (a<b))<<endl;
       cout<<"The value of this logical or operator is:"<<((a==b) || (a>=b))<<endl;
       cout<<"The value of this logical not operator is:"<<(!(a==b))<<endl;
    return 0;
  }
