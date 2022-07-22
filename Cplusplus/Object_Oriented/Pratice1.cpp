/*
Exercises 1
Write a program that defines a shape class with a constructor that gives value to width and height. The define 
two sub-classes triangle and rectangle, that calculate the area of the shape area (). In the main, define two variables
 a triangle and a rectangle and then call the area() function in this two varibles.
*/
#include <iostream>
#include<string>
using namespace std;
class Shape {
    protected:
        int height ;
        int width;
    public:
        void set(int a,int b){
            height=a;
            width=b;
        }
        
};
class triangle: public Shape{ 
    public:
    float area(){
            return height/2*width;
        }
};
class rectangle:public Shape{
    public:
    float area(){
            return height*width;
        }
};
/*
Exercise 2:
Write a program with a mother class and an inherited daugther class.Both of them should have a method void display ()that 
prints a message (different for mother and daugther).In the main define a daughter and call the display() method on it.
*/
class Mother {
    public:
        void display(){
            cout<<"\nDisplay Mother class";
        }
};
class Daugther:public Mother{
    public:
    void display(){
        cout<<"\nDisplay Daugther class";
    }
};
/*
Exercise 3
Write a probram with a mother class animal. Inside it define a name and an age variables, and set_value() function.Then 
create two bases variables Zebra and Dolphin which write a message telling the age, the name and giving some extra information 
(e.g. place of origin).
*/
class Animal {
    private :
        string name;
        int age ;
        string address;
    public:
        void set_inf(){
            cout<<"\nInput information :";
            cout<<"\nInput name of animal:";
            getline(cin,name);
            cout<<"\nInput address of animal:";
            getline(cin,address);
            cin.ignore();
            cout<<"\nInput age of animal:";
            cin>>age;
        }
        void display_inf(){
            cout<<"\nName is :"<<name;
            cout<<"\nAddress :"<<address;
            cout<<"\nAge :"<<age;
        }
}Zebra,Dolphin;

int main (){
    cout<<"\n\t=======Exercise1=======";
    triangle A;
    A.set(4,5);
    cout<<"\nArea of Triangle :"<<A.area();
    rectangle B;
    B.set(4,5);
    cout<<"\nArea of Rectangle :"<<B.area();
    cout<<"\n\t=======Exercise2=======";
    Daugther Dau;
    Dau.display();
    cout<<"\n\t=======Exercise3=======";
    Zebra.set_inf();
    Zebra.display_inf();
    Dolphin.set_inf();
    Dolphin.display_inf();
    return 0;
}