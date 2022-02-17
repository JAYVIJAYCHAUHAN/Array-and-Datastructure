#include<iostream>
using namespace std;
int fact( int number){
    if(number<1){
        return 1;//bace case
    }
    else{
        return number*fact(number-1);
    }
}
int main(){
    int number;
    cout<<"enter the number"<<endl;
    cin>>number;
    cout<<"the factorial of the number the :"<<fact(number)<<endl;
    return 0;
}