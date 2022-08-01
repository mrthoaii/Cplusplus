/*
7. A Student is an object in a university management System. Analyze the concept and
identify the data members that a Student class should have. Also analyze the
behavior of student in a university management System and identify the methods
that should be included in Student class. 
*/

#include<iostream>
#include<string>
using namespace std;
class Student {
    private :
        string name ;
        string id;
        string school;
        string address;
        string hobby;
        int age;
    public:
        Student();
        void set_inf(string , string , string , string , string , int );
        void get_inf();
        void display_inf();
       
};
Student::Student(){
    cout<<"\n\t________MANAGEMENT SYSTEM________ ";
}
void Student::set_inf(string a, string b, string c, string d, string e, int f){
    name=a;
    id=b;
    school=c;
    address=d;
    hobby=e;
    age=f;
}
void Student::get_inf(){
    cout<<"\n\t_____Input Your Information_____";
    cin.ignore();
    cout<<"\nInput your name :";getline(cin,name);
    cout<<"\nYour address :";getline(cin,address);
    cout<<"\nYour ID :";getline(cin,id);
    cout<<"\nYour school :";getline(cin,school);
    cout<<"\nYour hobby :";getline(cin,hobby);
    cin.ignore();
    cout<<"\nYour age :";cin>>age;
}
void Student::display_inf(){
    cout<<"\n\t_____Your Information_____";
    cout<<"\nYour name :"<<name;
    cout<<"\nYour school :"<<school;
    cout<<"\nYour age :"<<age;
    cout<<"\nYour ID :"<<id;
    cout<<"\nYour address :"<<address;
    cout<<"\nYour hobby :"<<hobby;
}
//Different
void get_infs(Student a[],int &n,int &i){
    while (i<n){
        a[i].get_inf();
        i++;
    }
    //n++;
}
void display_infs(Student a[],int &n){
    int i=0;
    while (i<n){
        a[i].display_inf();
        i++;
    }
}
int main(){
cout<<"\n\t________MENU________";
cout<<"\n1.Input information.";
cout<<"\n2.Display Information.";
cout<<"\n3.Exit.";
int limit=0;
//cout<<"\nNhap gioi han :";cin>>limit; 
Student obj1[50];

int i =0;
while (true){
    int choice=0;
    cout<<"\nInput your choice:";cin>>choice;
    cin.ignore();
    switch(choice){
        case 1:{
            limit+=1;
            get_infs(obj1,limit,i);
            break;
        }
        case 2:{
            display_infs(obj1,limit);
            break;
        }
        case 3:{
            cout<<"\nSEE YOU SOON.";
            exit(0);
        }
        default :
        cout<<"\nSo ban nhap khong hop le!!\nVui long nhap lai. ";
        break;
    }
}

    return 0;
}