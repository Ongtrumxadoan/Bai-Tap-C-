#include <iostream>
using namespace std;
int main(){
	int a;
	float b, c;
	
	cout<<"nhap a tu ban phim: ";
	cin>>a;
	cout<<"nhap b tu ban phim: ";
	cin>>b;
		float honso = a*b/c;
	
	
	
	
	do{
		cout<<"nhap c tu ban phim: ";
		cin>>c;
		if(c==0){
			cout<<"vui long nhap lai dieu kien phai khac 0, ";
			} 
		  
		}while(c==0);
	cout<<"Hon so ta co la:"<<a<<" " <<b<<"/"<<c;

	return 0 ;
	
}


