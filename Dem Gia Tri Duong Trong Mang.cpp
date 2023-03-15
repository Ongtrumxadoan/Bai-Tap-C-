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
         
        cout<<a[i]<<"; ";
    }
    
}
int DemSoDuongTrongMang( int a[],int n){
    int d =0;   
    for(int i=0;i<=n;i++)
    {
        if(a[i]>0)
        {
         d++;   
        }
         cout<<"so phan tu duong trong mang la: "<<d;
    }    

        
}

int main(){
    
    int n;
    int a[100],i;
    
    do{
        cout<<"=>> nhap n so mang tu ban phim la:  ";
        cin>>n;
        if (n<-100||n>100){
            cout<<"nhap lai n nhe ban oi !\n";
            
        }
    }while (n<-100||n>100);
    
    NhapMang(a,n);
    XuatMang(a,n);
    DemSoDuongTrongMang(a,n);
}
