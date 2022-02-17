#include<iostream>
using namespace std;
int main(){

int a;
int b;
cout<<"enter the value of the a and b:"<<endl;
cin>>a; 
cin>>b;
int x=a-b;
try{
    if(x!=0){
        cout<<"the result is "<<a/x<<endl;

    }
    else{
        throw(x);
    }
}
catch(int i){
    cout<<"exception error "<<endl;
}
return 0;
}