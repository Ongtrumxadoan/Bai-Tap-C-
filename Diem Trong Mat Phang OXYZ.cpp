#include<iostream>
using namespace std ;

void NhapDiem(float &x,float &y, float &z, float &i, float &r){
	cout<<"diem cua x la: ";
	cin>>x;
	
	cout<<"diem cua y la: ";
	cin>>y;

	cout<<"diem cua z la: ";
	cin>>z;
	
	cout<<"diem cua i la: ";
	cin>>i;
	
	cout<<"diem cua r la: ";
	cin>>r;
	 
}
void XuatDiem(float x, float y, float z, float i, float r){
	cout
	<<"-------------------------"<<endl
	<<"vay diem x la: "<<x<<endl
	<<"vay diem y la: "<<y<<endl
	<<"vay diem z la: "<<z<<endl
	<<"vay diem i la: "<<i<<endl
	<<"vay diem r la: "<<r;
	                                                                                                                                
}

int main(){
	float x;float y;float z;float i;float r;
	  NhapDiem( x,y,z,i,r);
	  XuatDiem(x,y,z,i,r);
	
}
