#include<iostream>
using namespace std;
int main(){
    char c;
    cout<<"enter the alphabet :"<<endl;
    cin>>c;
    if((c>='a'&& c<='z') || (c>='A'&& c<='z'))
    cout<<c<<"\nis the alphabet:"<<endl;
    
    else
    cout<<c<<"/\nis not a alphabet:"<<endl;
    return 0;
}