#include <iostream >
 
using namespace std;
  void NhapDiem(float &x,float &y){
  	cout<<"nhap diem x la: ";
	  	cin>>x;
	cout<<"nhap diem y la: ";
		cin>>y;
  }
 
  void XuatDiem(float x, float y){
  
	cout<<"vay diem x la: "<<x<<endl<<"vay diem  y la: "<<y;
}

void NhapDuongTRon(float &i,float &r){
	cout <<"nhap diem i la: ";
	cin>>i;
	
	cout<<"nhap diem r la: ";
	cin>>r;
}
void XuatDuongTron(float i, float r){
	cout<<endl<<"vay diem i la: "<<i<<endl<<"vay diem r la: "<<r;
}
	
 
int main(){
	 float x,y,i,r;
	NhapDiem(x,y);
	NhapDuongTRon(i,r);
	XuatDiem(x,y);
	XuatDuongTron(i,r);

	
}
