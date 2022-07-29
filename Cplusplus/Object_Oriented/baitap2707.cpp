#include <iostream>
#include<cmath>
#include<string>
using namespace std;
/*
1. Write a program to print the area and perimeter of a triangle having sides of 3, 4 
and 5units by creating a class named 'Triangle' without any parameter in its constructor.
*/
class Triangle{
    private:
        float a,b,c;
    public:
        Triangle(){
            cout<<"\nInput value of a b c :";
            cin>>a>>b>>c;
        }
        ~Triangle(){
        }
        float Perimeter(){
            return (a+b+c);
        }
        float Area (){
            return sqrt((a+b+c)*(a-b+c)*(a+b-c)*(b+c-a))/4;
        }
};
/*
2. Print the average of three numbers entered by user by creating a class named 'Average'having 
a method to calculate and print the average
*/
class Average{
    private :
        float a,b,c;
        float result ;
    public:
        Average(float x, float y, float z){
            a=x;
            b=y;
            c=z;
        }
        
        void Calculator(){
            result=(a+b+c)/3;
        }
        void print_result(){
            cout<<"\nResult of Average :"<<result;
        }
};
/*
3. Print the  sum,  difference  and   product of   two  
complex numbers by  creating a   classnamed 'Complex' with separate methods for each operation
 whose real and imaginaryparts are entered by user.
*/
class Complex_Number{
    private :
        int real , image;
    public:
        Complex_Number(int a, int b){
            real =a;
            image =b;
        }
        void print_complex(){
            cout<<real<<" + "<<image<<"i";
        }
};
/*
Write a program by creating an 'Employee' class having the following methods and printthe final salary.(15$/day)
 1 - 'getInfo()' which takes the salary, number of hours of work per day of employee asparameter
 2 -'AddSal()'   which   adds   $10   to   salary   of   the   employee   if   it   is   less   than   $500.
 3 - 'AddWork()' which adds $5 to salary of employee if the number of hours of work perday is more than 6 hours.
*/
class Employee{
    private:
        string name ;
        string id;
        int NumberOfHour;
        double Salary;
    public:
        void get_inf(string &a,string &b,int &c);
        void print_inf();
        void Add_Salary();
        void Add_Work();
        double print_Salary();
};
void Employee::get_inf(string &a,string &b,int &c){
    name=a;
            id=b;
            NumberOfHour=c;
            Salary=NumberOfHour*15*30;
}
void Employee::print_inf(){
    cout<<"\n\t______ Output your Information ______";
            cout<<"\nName :"<<name;
            cout<<"\nId :"<<id;
            cout<<"\nNumber of hour :"<<NumberOfHour;
            cout<<"\nYour Salary :"<<print_Salary()<<"$";
}
void Employee::Add_Salary(){
    if (Salary<500){
                Salary+=15;
            }
}
void Employee::Add_Work(){
    if(NumberOfHour>=6){
                Salary+=5;
            }
}
double Employee::print_Salary(){
    return Salary;
}
/*
5. Create a class called 'Matrix' containing constructor that initializes the number of rows 
and number of columns of a new Matrix object. The Matrix class has the following 
information:
    1.number of rows of matrix
    2 number of columns of matrix
    3 - elements of matrix in the form of 2D array
The Matrix class has methods for each of the following:
    1 - get the number of rows
    2 - get the number of columns
    3 - set the elements of the matrix at given position (i,j)
    4 - adding two matrices. If the matrices are not addable, "Matrices cannot be added" 
        will be displayed.
    5 - multiplying the two matrices
*/
class Matrix{
   
};
/*
6. Write a program that has variables to store Car data like; CarModel, CarName, CarPrice
and CarOwner. The program should include functions to assign user defined values to
the above mentioned variable and a display function to show the values. Write a main
that calls these functions. Now write another runner class that declares three Car
objects and displays the data of all three.
*/
class Car{
    private:
        string Car_Model;
        string Car_Name;
        string Car_Price;
        string Car_Owner;
    public:
        //Car(string , string , string , string );
        void get_inf();
        void display_inf();
        void get_infs(int );
        void display_infs(int );
};

void Car::get_inf(){
    cout<<"\n\t_____Input your Information_____";
    cout<<"\nInput Car_Model:";getline(cin,Car_Model);
    cout<<"\nInput Car_Name:";getline(cin,Car_Name);
    cout<<"\nInput Car_Price:";getline(cin,Car_Price);
    cout<<"\nInput Car_Owner:";getline(cin,Car_Owner);
}
void Car::display_inf(){
    cout<<"\n\t_____Output your Information_____";
    cout<<"\nCar Model:"<<Car_Model;
    cout<<"\nCar Name:"<<Car_Name;
    cout<<"\nCar Price:"<<Car_Price;
    cout<<"\nCar Owner:"<<Car_Owner;
}
void Car::get_infs(int a){
    for(int i =0;i<a;i++){
        get_inf();
    }
}
void Car::display_infs(int a){
    for(int i=0;i<a;i++){
        display_inf();
    }
}
/*
7. A Student is an object in a university management System. Analyze the concept and
identify the data members that a Student class should have. Also analyze the
behavior of student in a university management System and identify the methods
that should be included in Student class. 
*/
class University_Managment_Sys{};
int main (){
    /*
    cout<<"\n\t_________________Area and Perimeter of Triangle____________________";
    Triangle obj1;
    cout<<"\nPerimeter of Triangle is :"<<obj1.Perimeter();
    cout<<"\nArea of Triangle is :"<<obj1.Area();
    cout<<"\n\t_________________Gia tri TB(Average)____________________";
    float a,b,c;
    cout<<"\nNhap gia tri cac so hang :";
    cin>>a>>b>>c;
    Average obj2=Average(a,b,c);
    obj2.Calculator();
    obj2.print_result();
    cout<<"\n\t__________________ComPlex Number___________________";
    int real,image;
    cout<<"\nInput value of real and image number :";cin>>real>>image;
    Complex_Number obj3=Complex_Number(real,image);
    obj3.print_complex();
    cout<<"\n\t__________________Employee___________________";
    string name,id;
    int hour;
    cout<<"\nNhap ten cua ban :";
    getline(cin,name);
    cout<<"\nId :";
    getline(cin,id);
    cin.ignore();
    cout<<"\nSo gio lam trong mot ngay :";
    cin>>hour;
    Employee obj4;
    obj4.get_inf(name,id,hour);
    obj4.print_inf();
    */
   Car no1;
   no1.get_infs(2);
   no1.display_infs(2);
    return 0;
}
