#include<iostream>
using namespace std;
int inso(int n){
    if (n==30)return 0;
    else {
    cout<<n<<" ";
    return inso(n+1);
    }
}
int tinhtong(int n){
    int sum=0;
    if (n==0)
    return 0;
    return n+tinhtong(n-1);
}
int fibonacci(int n){
    if (n==0)return 0;
    if (n==1 || n==2)return 1;
    return fibonacci(n-1)+fibonacci(n-2);
}
int x2_tong(int n){
    if (n==0)return 0;
    return 2*n+x2_tong(n-1);
}
int main (){
    //in day so dung de quy
    inso(0);
    cout<<"\nTong gia tri tu 1 den n :"<<tinhtong(5);
    cout<<endl;
    for(int i =0;i<10;i++){
        cout<<fibonacci(i)<<" ";
    }
    cout<<"\nTong hai lan so tu nhien:"<<x2_tong(3);
}