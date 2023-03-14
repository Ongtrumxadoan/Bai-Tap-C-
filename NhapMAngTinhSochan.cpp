#include<iostream>
using namespace std;

void Nhapmang(int a[],int n, int i){
    //nhap mang
    for ( i=0;i<= n;i++){
        cout<<"a["<<i<<"] =";
        cin >> a[i];
    }
    
}
 void Xuatmang(int a[],int n,int i){
     //xuat mang
    cout<<"xuat mang ra:";
    for( i=0;i<=n;i++){
        cout<<a[i]<<" ;"; 
    }
       
 }
 int TinhTongChanTrongMang(int a[], int n){
     
        int i, tong=0 ,d=0 ;
        for(i=0;i<=n;i++)
            if(a[i]%2==0)
            {
                 d=1;
                tong =tong +a[i];
            }
             if(d==1)
             return tong; 
     
     
 }

      int main(){
    
        
        int a[100],n,i,kq;
        do{
        cout<<"nhap so phan tu n la:" ;
        cin>>n;
        if(n<=1||n>100){
            cout<<"nhap lai n";
        }
    }while(n<=1||n>100);
    
      
     Nhapmang(a,n,i);
     Xuatmang(a,n,i);
     
     kq=TinhTongChanTrongMang(a,n);
     cout<<"ket qua la: "<<kq;
 }    
 
 
 
 
 
 
 





     

