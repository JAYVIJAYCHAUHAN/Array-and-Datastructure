#include<iostream>
using namespace std;
int main(){

    int n ;
    cout<<"enter number"<<endl;
    cin>>n;
    
    char ch ='A';
    for(int i=0;i<n;i++){
        for(int j;j<n-(i+1);j++){

        }
        for(int j =0; j<=i;j++){
            cout<<ch++<<" "<<endl;
                       if(ch>'Z')
            ch='A';
        }
        cout<<"\n"<<endl;

    }
    return 0;
}