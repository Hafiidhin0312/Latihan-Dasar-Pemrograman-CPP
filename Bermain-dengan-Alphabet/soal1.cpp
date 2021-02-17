#include <iostream>
#include <iomanip>

using namespace std;


int main(){
	int jb;
	
	cout<<"masukkan jumlah baris = ";
	cin>>jb;
	
    
    for(int i=0; i<jb; i++){
		 for(int j=90-i; j<=90; j++){
		 	char x = (char)90-i;
		 	cout<<setw(5)<<x;
		 }
		 cout<<endl;
     }
}
