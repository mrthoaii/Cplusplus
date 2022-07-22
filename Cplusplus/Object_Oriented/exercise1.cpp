//Write a complete OOP program to represent the student class,define 5 data
//members ,with constructor ooverloading ,define five student objects and 
//use friend function to find the number of passing students
#include <iostream>
#include<string>
using namespace std;
class Student {
    private:
        string name ;
        string address;
        char mssv[20];
        int age;
    public:
        void get_inf(){
            cout<<"\n\t_____Input your information_____";
            cout<<"\nEnter your name :";getline(cin,name);
            cout<<"\nYour address :";
            getline(cin,address);
            cout<<"\nYour Id :";
            cin.getline(mssv,20);
            cin.ignore();
            cout<<"\nYour age:";
            cin>>age;
        }
        void display_inf(){
            cout<<"\n\t_____Output your information_____";
            cout<<"\nMy name's :"<<name;
            cout<<"\nMy address :"<<address;
            cout<<"\nMy ID :"<<mssv;
            cout<<"\nMy age :"<<age;
        }
};

int main(){
    Student peo1;
    peo1.get_inf();
    peo1.display_inf();
    return 0;
}