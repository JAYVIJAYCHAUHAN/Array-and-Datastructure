#include<iostream>
using namespace std;
int  main(){
    int num[]={1,2,3,4,5,6};
    int*ptr;
    int i;
    cout<<"the array value is the given in the below\n"<<endl;
    for(i=0;i<5; i++)
cout<<num[i]<<"\n"<<endl;
ptr=num;
cout<<"value of the ptr"<<*ptr<<endl;
ptr++;
cout<<"the value is th ptr++:\n"<<*ptr<<endl;
ptr--;
cout<<"the value is the ptr--\n"<<*ptr<<endl;
ptr=ptr+2;
cout<<"the value is the ptr+2\n"<<*ptr<<endl;
ptr=ptr-1;
cout<<"the value is the ptr-1\n"<<*ptr<<endl;
return 0;

}