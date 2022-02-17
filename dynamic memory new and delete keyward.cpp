#include<iostream>
using namespace std;
int main(){
    int *ptr1;
    int *ptr2;
    int *ptr3;
    int avg;
    ptr1=new int;
    ptr2=new int;
    ptr3=new int;
    cout<<"enter first number:"<<endl;
    cin>>*ptr1;
    cout<<"enter the second number:"<<endl;
    cin>>*ptr2;
    cout<<"enter the third number:"<<endl;
    cin >>*ptr3;
    avg=(*ptr1+*ptr2+*ptr3)/3;
    cout<<"the avarage is the "<<avg<<endl;
    delete ptr1;
    delete ptr2;
    delete ptr3;
    return 0;

}