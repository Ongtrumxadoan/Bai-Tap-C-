#include<iostream>
using namespace std;
void NhapDiem(float &a, float &n){
	cout<<"nhap diem a la: ";
	cin>>a;
	cout<<"nhap diem n la: ";
	cin>>n;
	
	
}
void XuatRaDaThuc(float a, float n){
	cout<<"Vay da thuc cua "<< "P(x) = "<<a<<"x^"<<n;
	
}


int main (){
	float a;
	float n;
	NhapDiem(a,n);
	XuatRaDaThuc(a,n);
}
