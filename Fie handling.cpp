#include<iostream>
#include<fstream>

using namespace std;
int main (){
    ofstream outf("item");
    cout<<"Enter name";
    char name [50];
    cin>>name;
    outf<<name<<"\n";
    cout<<"Enter cost";
    int cost;
    cin>>cost;
    outf<<cost<<"\n";
    outf.close();

    return 0;
}