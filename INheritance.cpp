#include<iostream>

using namespace std;
 class person{
public:
     char name[20];
     char gender[20];
     int age;
     
     void getdata(){
         cout<<" your name and gerder:";
         cout<<"your age:";
         cin>>name>>gender>>age;
     }
     void display(){

         cout <<"your name is:"<<name;
         cout<<"age is:"<<age;
         cout<<"gender"<<gender;
     }
     };
     class emplyee:public person{ 
         public:
     char company[70];
     int salary;
     
     void getdata(){
         cout<<"company";
        
         cout<<"salary";
         cin>>company>>salary;
     }
     void display(){
         cout<<"company"<<company;
         cout<<"salary"<<salary;

     }
     };
    int main () {
person r;
emplyee p;
p.display();
return 0;
    }
 