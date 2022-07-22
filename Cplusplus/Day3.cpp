#include<iomanip>
#include<iostream>
using namespace std;
void Bai1(int *a,int n){
    for (int i =0;i<n;i++){
        cin>>*(a+i);
    }
    for (int i =0;i<n;i++){
        cout<<*(a+i)<<" ";
    }
}

void Bai2(int **a,int m,int n){
    for (int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            *(*(a+i)+j)=rand()%50;
        }
    }
    for (int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<*(*(a+i)+j)<<"\t";
        }
        cout<<endl;
    }
}
void Bai2_2(int *a,int m,int n){
    for (int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            *(a+i*n+j)=rand()%50;
        }
    }
    for (int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<*(a+i*n+j)<<"\t";
        }
        cout<<endl;
    }
}
void Bai2_2_2(int **a,int m,int n){
    for (int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            *(*a+i*n+j)=rand()%50;
        }
    }
    for (int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<*(*a+i*n+j)<<"\t";
        }
        cout<<endl;
    }
}
void Bai3(int **a,int m,int n){
    for(int i=0;i<m;i++){
        for (int j=0;j<n;j++){
            cout<<"a["<<i<<"]["<<j<<"]=";
            cin>>*(*(a+i)+j);
        }
    }
    for(int i=0;i<m;i++){
        for (int j=0;j<n;j++){
            cout<<*(*(a+i)+j)<<"\t";
        }
        cout<<endl;
    }
}
void Bai3_3(int **a,int m,int n){
    for(int i=0;i<m;i++){
        for (int j=0;j<n;j++){
            cout<<"a["<<i<<"]["<<j<<"]=";
            cin>>*(*a+i*n+j);
        }
    }
    for(int i=0;i<m;i++){
        for (int j=0;j<n;j++){
            cout<<*(*a+i*n+j)<<"\t";
        }
        cout<<endl;
    }
}
void Bai3_3_3(int *a,int m,int n){
    for(int i=0;i<m;i++){
        for (int j=0;j<n;j++){
            cout<<"a["<<i<<"]["<<j<<"]=";
            cin>>*(a+i*n+j);
        }
    }
    for(int i=0;i<m;i++){
        for (int j=0;j<n;j++){
            cout<<*(a+i*n+j)<<"\t";
        }
        cout<<endl;
    }
}
void Bai5(float *a,int n){
    for(int i =0;i<n;i++){
        cout<<"\nNgay thu "<<i+1<<":";
        cin>>*(a+i);
    }
}
float TotalSale(float *a,int n){
    float Total=0;
    for(int i =0;i<n;i++){
        Total+=*(a+i);
    }
    return Total;
}
float AverageSale(float *a,int n){
    return (TotalSale(a,n)/n);
}
int main (){
    cout<<fixed<<showpoint<<setprecision(2);
    int soluong ;
    cout<<"\nNhap so luong phan tu :";
    cin>>soluong;
    int *array;
    array=new int[soluong];
    Bai1(array,soluong);
    delete[]array;
    //___________
    cout<<endl;
    int hang ,cot ;
    cout<<"\nNhap so hang :";cin>>hang;
    cout<<"\nNhap so cot :";cin>>cot;
    int **dimension_array;
    dimension_array=new int*[hang];
    for(int i=0;i<hang;i++){
        dimension_array[i]=new int[cot];
    }
    Bai2(dimension_array,hang,cot);
    for(int i=0;i<hang;i++){
        delete[]dimension_array[i];
    }
    delete[]dimension_array;
    //___________
    cout<<endl;
    int *dimension_array1;
    dimension_array1=new int [hang*cot];
    Bai2_2(dimension_array1,hang,cot);
    delete []dimension_array1;
    //___________
    cout<<endl;
    int **dimension_array2;
    dimension_array2=new int*[hang];
    for(int i=0;i<hang;i++){
        dimension_array2[i]=new int[cot];
    }
    Bai2_2_2(dimension_array2,hang,cot);
    for(int i=0;i<hang;i++){
        delete[]dimension_array2[i];
    }
    delete[]dimension_array2;
    //____________
    int **dimension_array3;
    dimension_array3=new int*[hang];
    for(int i=0;i<hang;i++){
        dimension_array3[i]=new int[cot];
    }
    Bai3(dimension_array3,hang,cot);
    for(int i=0;i<hang;i++){
        delete[]dimension_array3[i];
    }
    delete[]dimension_array3;
    //____________
    int **dimension_array3_3;
    dimension_array3_3=new int*[hang];
    for(int i=0;i<hang;i++){
        dimension_array3_3[i]=new int[cot];
    }
    Bai3_3(dimension_array3_3,hang,cot);
    for(int i=0;i<hang;i++){
        delete[]dimension_array3_3[i];
    }
    delete[]dimension_array3_3;
    //___________
    int *dimension_array3_3_3;
    dimension_array3_3_3=new int[hang*cot];
    Bai3_3_3(dimension_array3_3_3,hang,cot);
    delete[]dimension_array3_3_3;
    //___________
    float *money;
    int songay;
    cout<<"\nNhap so ngay ban hang :";cin>>songay;
    money=new float [songay];
    Bai5(money,songay);
    cout<<"\nTotal Sales:"<<TotalSale(money,songay);
    cout<<"\nAverage Sale:"<<AverageSale(money,songay);
    delete[]money;
    return 0;
}