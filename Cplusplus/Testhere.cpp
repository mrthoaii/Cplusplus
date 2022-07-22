#include<iostream>
using namespace std;
int main(){
	char s[8];
	cout<<"Nhap vao so Khach Hang: LLLNNNN"<<endl;
	cout<<"(LLL = letters and NNNN = numbers):"; cin.get(s,8);
    bool lan1;
	for(int i=0;i<3;i++){
		if(s[i]>=97 && s[i] <=122|| s[i]>=65 && s[i]<= 90){
			lan1=true; 
		} 
		else{
			lan1=false; 
		} 
	} 
	bool lan2; 
	for(int i=3;i<7;i++){
		if(s[i]>='0' && s[i]<='9'){
			lan2=true; 	
		}
		else{
			lan2=false; 
		} 
	} 
	if(lan1==true && lan2==true){
		cout<<"So hop le.Chuc mung."; 
	} 
	else{
		cout<<"So khong hop le, vui long nhap lai; So khach hang."<<endl;
		cout<<"ViDu:"<<endl;
		cout<<"    ABC1234 hay abc1234"; 
	} 
	return 0; 
}