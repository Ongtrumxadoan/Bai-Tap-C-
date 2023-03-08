#include<iostream>
using namespace std;
struct Ngay {
	int Day; 
	int Month; 
	int Year;
 	
};
void NhapNgay(Ngay & n){
	
	
	do{
	cout<<"nhap Nam la: ";
	cin>>n.Year;
		if( n.Year<=0){
			cout<<"nhap lai Nam !\n";
			cout<<"-----------------\n";
			
		} 
	}while( n.Year<=0);
	if(n.Year%2==0||n.Year%4==0){
		cout<<"la nam nhuan\n";
		cout<<"---------------\n";
	}else{
		cout<<"khong la nam nhuan\n";
		cout<<"-------------------\n";
	}
	
	
	do{
	cout<<"nhap thang la: ";
	cin>>n.Month;
		if( n.Month<=0||n.Month>12 ){
			cout<<"nhap laiThang !\n";
			
		} 
	}while(  n.Month<=0||n.Month>12 );
	
	cout<<"nhap ngay la: ";
	cin>>n.Day;
	  
  
	
	
}
void XuatNgay(Ngay n){
	cout<<"\nvay Ngay la: "<<n.Day<<endl;
	cout<<"vay Thang la: "<<n.Month<<endl;
	cout<<"vay Nam la: "<<n.Year<<endl;
	cout<<"----------------------------------"<<endl;
	cout<<"vay Ngay da nhap tu ban phim la:  "<<n.Day<<" thang "<<n.Month<<" nam "<<n.Year;
}
void KiemTranamNhuan(Ngay n){
	do{
		if(n.Year%2==0||n.Year%4==0||n.Month==2||n.Day>29){
			cout<<"\nnhap lai Ngayyy !\n";
			cout<<"Ngay la: ";
			cin>>n.Day;
		 
		}
	}while(n.Day>29);
  
}
void KiemTranamKhongNhuan(Ngay n){
	do{
	
		if( n.Year%2==1||n.Year%4==1||n.Month==2||n.Day>28 ){
			cout<<"\nnhap lai Ngay !\n";
			cout<<"Ngay la: ";
			cin>>n.Day;
		}
	}while(n.Day>28 );
}
void KiemTraNgay(Ngay n){
	do{
	
		if(n.Day<=0||n.Day>31 ){
			cout<<"\nnhap lai Ngay !\n";
			cout<<"Ngay la: ";
			cin>>n.Day;
		}
			
		 
		 
		
	}while(n.Day<=0||n.Day>31);
}
 
int main(){
	Ngay n;
	NhapNgay(n);
	XuatNgay(n);
	KiemTraNgay(n);
	KiemTranamKhongNhuan(n);
	KiemTranamNhuan(n);

	}
