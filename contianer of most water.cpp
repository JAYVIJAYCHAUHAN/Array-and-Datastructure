#include<iostream>
using namespace std;
int maxlenth(int arr[],int len){
    int area=0;
    for(int i=0;i<len;i++){
        for(int j=i;j<len;j++){
            area=max(area,min(arr[j],arr[i]),arr[i]*(j-i));

        }
    }
    return area;
}
int main(){
    int arr[]={1,5,4,3};
    
    int len1=sizeof(arr)/sizeof(arr[0]);
    cout<<maxlenth(arr,len1)<<endl;
    
}