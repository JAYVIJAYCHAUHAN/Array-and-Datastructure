#include<iostream>
using namespace std;
void increment (int &s){
    s=s+500;
    cout<<"salary inside is"<<s<<endl;
}
int main(){
    int sal =500;
    increment(sal);
    cout<<" the salary is th inside in the"<<endl;
    return 0;
}