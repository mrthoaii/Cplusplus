#include<iostream>
#include<cmath>
#include<fstream>
#include<string>
using namespace std;
bool kiemtra_ngto(int n ){
    if (n==2) return true ;
    if (n==0 || n==1 )return false;
    else {
        for (int i=2;i<n;i++){
        if (n%i==0) return false ;
    } 
    return true ;
    }
}
bool kiemtra_chanle(int n ){
    if (n%2==0)return true ;
    else return false;
}
bool kiemtra_chinhphuong(int n){
    float temp=sqrt(n);
    if((int)sqrt(n)-temp==0)return true ;
    else return false;
}
int sohoanthien(int n){
    int sum=0;
    for (int i=1;i<n;i++){
        if (n%i==0){
            sum+=i;      
        }
    }
    return sum;
}
bool kiemtra_sohoanthien(int n){
    if (sohoanthien(n)==n)return true;
    return false;
}

int print_number(int n){
    int sum=0;
    if (n==0)return 0;
    else if (kiemtra_ngto(n)==true){
        sum+=n;
    }
    return sum+print_number(n-1);
}
//xuat ra so fibonacci thu n .
/*
print_fibonacci(n-1)+print_fibonacci(n-2);

print_fibonacci(3)+print_fibonacci(2)
print_fibonacci(2)+print_fibonacci(1)+print_fibonacci(2)
1+1+1
*/
int print_fibonacci(int n){
    if (n==1||n==2)return 1;
    return print_fibonacci(n-1)+print_fibonacci(n-2);
}
int dequy_giaithua(int n){
    if(n==1)return 1; 
    return n*dequy_giaithua(n-1);
}
//________String________
void xuat_xau(string a){
    for(int i=0;i<a.size();i++){
        cout<<a[i];
    }

}
void cat_xau(string a){
    cout<<"\nChuoi sau khi cat :"<<a.substr(4,15);
}
void xoa_xau(string a){
    a.erase(5,15);
    cout<<"\nChuoi sau khi xoa :"<<a;
}
void thaythe_xau(string a){
    a.replace(5,10,"dep trai");
    cout<<"\nChuoi sau khi thay the :";
    xuat_xau(a);
}
int main (){
    string xauA;
    cout<<"\nNhap vao noi dung cua xau ki tu:";
    getline(cin,xauA);
    xuat_xau(xauA);
    cat_xau(xauA);
    xoa_xau(xauA);
    thaythe_xau(xauA);
    
}

