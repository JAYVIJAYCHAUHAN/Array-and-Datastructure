#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ofstream fout;
    fout.open("country");
    cout<<"india \n"<<endl;
    cout<<"pakistan \n"<<endl;
    cout<<"united state of america \n"<<endl;
    fout.close();
    fout.open("capital");
    fout<<"new delhi\n"<<endl;
    fout<<"isalamabad \n"<<endl;
    fout<<"vashingtan\n"<<endl;
    fout.close();
    const int n =80;
    char line[n];

    ifstream fin;
    fin.open("country");
    cout<<"country contain the file"<<endl;
    while(fin){
        fin.getline(line,n);
        cout<<line;
    }
    fin.close();
    fin.open("capital");
    cout<<"\ncapital is the following cooutry"<<endl;
    while(fin)
    {
        fin.getline(line,n);
        cout<<line;
    }
    return 0;
    }