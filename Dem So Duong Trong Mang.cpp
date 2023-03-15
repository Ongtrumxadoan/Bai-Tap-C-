#include<iostream>
using namespace std;

void NhapMang(int a[],int n){
    for(int i=0;i<=n;i++){
        cout<<"a["<<i<<"] = ";
        cin>>a[i];
    }
    
}
void XuatMang(int a[],int n){
    cout<<"- xuat mang ra man hinh: "<<endl;
    for(int i=0;i<=n;i++){
         
        cout<<"\t"<<a[i]<<"; ";
    }
    
}
int DemSoDuongTrongMang( int a[],int n){
    int d =0;   
    for(int i=0;i<=n;i++)
    {
        if(a[i]==0)
        {
            return 0;
        }
        if(a[i]>0)
        {
            
            return 1+DemSoDuongTrongMang(a,n-1);
            return DemSoDuongTrongMang(a,n-1);
        } 
    } 
}

int main(){
    
    int n;
    int a[100],i,kq;
    
    do{
        cout<<"=>> nhap n so mang tu ban phim la:  ";
        cin>>n;
        if (n<-100||n>100){
            cout<<"nhap lai n nhe ban oi !\n";
            
        }
    }while (n<-100||n>100);
    
    NhapMang(a,n);
    XuatMang(a,n);
    kq=DemSoDuongTrongMang(a,n);
    cout <<"\nso duong trong mang la:"<<kq;
}
