#include<iostream>
using namespace std; 
struct  dathuc{
	int a[100];
	int n;
};
void NhapDaThuc( dathuc & ndt){
	cout<<"nhap bac cua da thuc la:";
	cin >>ndt.n;
	for(int i=0;i<=ndt.n;i++){
		cout<<"nhap he so cua x^"<<ndt.n-i<<" la: ";
		cin>>ndt.a[ndt.n-i];
	}
}
void XuatDaThuc(dathuc ndt){
 for(int i=0; i<=ndt.n;i++){
 	if(ndt.n-i==0){
 		cout<<ndt.a[0];
 		break;
 		
	 }
 	cout<<ndt.a[ndt.n-i]<<"x^"<<ndt.n-i<<"+";
 }
} 

int main(){
 	dathuc ndt;
	NhapDaThuc(ndt);
	XuatDaThuc(ndt);
}
