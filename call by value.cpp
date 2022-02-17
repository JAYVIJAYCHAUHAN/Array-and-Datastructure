#include<iostream>
using namespace std;
void salary_change(int s)
{
    s=500;
    cout<<"the value is the s"<<s<<endl;
}

int main(){
    int sal=6000;
    salary_change(sal);
    cout<<"the value inside the main"<<sal<<endl;
    return 0;
}