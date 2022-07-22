#include<iostream>
#include<string>
#include<cstring>
#include<iomanip>
using namespace std;
void Bai1(){
    char text;
    do {
        cout<<"\nToi dang hoc lap trinh!";
        cout<<"\nBan co muon thay thong bao nay nua khong ?";
        cin>>text;
        cin.ignore();
    }
    while(text=='Y'||text=='y');
}
void Bai2(string a){
    cout<<"\nTen cua ban la :";
    for (int i=0;i<a.length();i++){
        cout<<a[i];
        if (a[i]==' ')break;
    }
}
void Bai3(char a[],char b[]){
int result=strcmp(a,b);
if(result>0)cout<<b<<"\n"<<a;
else if(result<0)cout<<a<<"\n"<<b;
else if(result ==0)cout<<"\nTen ban nhap giong nhau";
}
void Bai4(char a[],int n){
    int count_alpha=0;
    int count_digit=0;
    if (n !=7){
        cout<<"\nMa so bao gom 7 ki tu chu va so!!!!";
        exit;
    }
    else {
        for (int i =0;i<3;i++){
        if (isalpha(a[i]))
            count_alpha ++;
    }
    for (int i =3;i<7;i++){
        if (isdigit(a[i]))
            count_digit ++;
    }
if (count_alpha ==3 && count_digit==4)cout<<"\nMa so hop le .";
else cout<<"\nMa so khong hop le ,vui long nhap lai.";
}
}
void  Bai5 (string a){
    int count =0;
    for(int i =0;i<a.size();i++){
        if (isalpha(a[i]) && a[i+1]==' ' || isalpha(a[i]) && a[i+1]=='\0')count ++;
    }
    cout<<"\nSo tu co trong cau :"<<count;
}
void Bai6(float a[],int n){
    for (int i=0;i<n;i++){
        a[i]=(float)(rand()%50)/(float)(rand()%100);
    }
    for (int i=0;i<n;i++){
        cout<<a[i]<<"  ";
    }
}
int main(){
//Bai4
/*
{
    char Id[10];
    cout<<"\nNhap vao ma Id cua ban :";
//LLLNNNN
    cin.getline(Id,10);
    int i=0;
    int size=0;
    while (Id[i]!='\0')
        {
        size++;
        i++;
        }
    
Bai4(Id,size);
}
*/

float array[10];
int soluong;
cin>>soluong;
cout<<fixed<<showpoint<<setprecision(1);
Bai6(array,soluong);
}