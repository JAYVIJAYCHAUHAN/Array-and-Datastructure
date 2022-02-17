#include<iostream>
using namespace std;
int main(){
    int *ptr;
    int arr[8]={1,2,3,4,5,6,7,8};
    ptr=arr;
    for(int i=0;i<8;i++){
        cout<<*ptr<<endl;

        ptr++;
    }
    return 0;
}