#include<iostream>
using namespace std;

    void test( int x){
        try{
            if(x==0)
            throw x;
            if(x==1)
            throw 'x';
            if(x==-1)
            throw x;

            
        }
        catch(...){
            cout<<"expection"<<endl;
        }
    }
    int main(){
        cout<<"testing"<<endl;
        test(0);
        test(1);
        test(-1);
        return 0;
    }
