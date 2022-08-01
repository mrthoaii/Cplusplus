/*
7. A Student is an object in a university management System. Analyze the concept and
identify the data members that a Student class should have. Also analyze the
behavior of student in a university management System and identify the methods
that should be included in Student class. 
*/

#include<iostream>
#include<string>
#include<cstring>
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
        void set_inf(string , string , string , string , string , int );
        void add_inf();
        void display_inf();
        void check_member(Student [] ,string ,int &);
        void delete_member(Student a[],int &,string );
       
};
void Student::set_inf(string a, string b, string c, string d, string e, int f){
    name=a;
    id=b;
    school=c;
    address=d;
    hobby=e;
    age=f;
}
void Student::add_inf(){
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
void Student::check_member(Student a[],string b,int &n){
    for(int i =0;i<n;i++)
    {
        int var=a[i].name.compare(b);
        //if (a[i].name == b){
        if (var==0){
            Student temp;
            for(int j=i+1;j<n;j++){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
            n--;
    }
    }
}

//Different
void add_infs(Student a[],int &n,int &i){
    while (i<n){
        a[i].add_inf();
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
void delete_members(Student a[],string x,int &n){
   for(int i=0;i<n;i++)
   {
    a[i].check_member(a,x,n);
   }
}
int main(){
cout<<"\t\t|__________________________________|";
cout<<"\n\t\t|_______________MENU_______________|";
cout<<"\n\t\t|1.INPUT YOUR INFORMATION..";
cout<<"\n\t\t|2.DISPLAY YOUR INFORMATION.";
cout<<"\n\t\t|3.DELETE INFORMATION.";
cout<<"\n\t\t|4.EXIT.";
cout<<"\n\t\t|__________________________________|";
int limit=0;
Student obj1[50];

int i =0;
while (true){
    int choice=0;
    cout<<"\nInput your choice:";cin>>choice;
    cin.ignore();
    switch(choice){
        case 1:{
            limit+=1;
            add_infs(obj1,limit,i);
            break;
        }
        case 2:{
            display_infs(obj1,limit);
            break;
        }
        case 3:{
            string x;
            cout<<"\nNhap ten ban muon xoa thong tin :";getline(cin,x);
            delete_members(obj1,x,limit);
            break;
        }
        case 4:{
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