#include <iostream>
#include <iomanip>

using namespace std;


int main(){
	int jb;
	
	cout<<"masukkan jumlah baris = ";
	cin>>jb;
	
	for(int i=0; i<jb;i++){
		for(int j=jb; j>=jb-i; j--){
			if(j%2==0){
				cout<<"X";
			}else{
				cout<<"Z";
			}
		}
		cout<<endl;
	}

	for(int i=jb-1; i>0; i--){
		for(int j=0; j<i; j++){
			if(j%2==0){
				cout<<"Z";
			}else{
				cout<<"X";
			}
		}
		
		cout<<endl;
	}
}
