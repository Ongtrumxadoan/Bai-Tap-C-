#include<iostream>
using namespace std;

int TinhGiaiThua(int n){
    if (n==0)
       return  1;  
       return  n*TinhGiaiThua(n-1);
    
        
    }
   

int main(){
	int n;
	cout<<"nhap n tu ban phim: " ;
	cin>>n;
	cout<<"ket qua "<<"cua"<<" "<<n<<"!"<<" la: "<<TinhGiaiThua(n);
 
}
