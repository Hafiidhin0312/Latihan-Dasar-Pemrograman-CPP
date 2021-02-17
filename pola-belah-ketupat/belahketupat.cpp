#include <iostream>

using namespace std;

int main(){

cout<<"==== membuat berbagai pola menggunakan bintang===="<<endl<<endl;

cout<<"-----------pola 1------------ "<<endl<<endl;

cout<<"    4 spasi          *"<<endl;
cout<<"    3 spasi        * * *"<<endl;
cout<<"    2 spasi      * * * * *"<<endl;
cout<<"    1 spasi    * * * * * * *"<<endl;
cout<<"    0 spasi  * * * * * * * * *"<<endl;
cout<<"    1 spasi    * * * * * * *"<<endl;
cout<<"    2 spasi      * * * * *"<<endl;
cout<<"    3 spasi        * * *"<<endl;
cout<<"    4 spasi          *"<<endl;

cout<<endl<<endl<<endl;

  cout<<"STEP 1 :"<<endl<<endl;
  
  for(int i=0;i<5;i++){
  	cout<<"     ";
  	for(int j=4-i;j>0;j--){
  		cout<<" ";
	  }
	  for(int k=0;k<=i;k++){
	  	cout<<"*";
	  }
	  cout<<endl;
  }


 cout<<"STEP 2 :"<<endl<<endl;
 
 for(int i=0;i<5;i++){
 	cout<<"         ";
 	for(int j=1;j<=i;j++){
 		cout<<"*";
	 }
	 
	 cout<<endl;
 	
 }
 
 cout<<"STEP 3 (Gabungan step 1 dan 2): "<<endl<<endl;
 
 for(int i=0;i<5;i++){
  	cout<<"     ";
  	for(int j=4-i;j>0;j--){
  		cout<<" ";
	  }
	  for(int k=0;k<=i;k++){
	  	cout<<"*";
	  }
	  
	  for(int a=1;a<=i;a++){
 		cout<<"*";
	 }
	  cout<<endl;
  }

 cout<<"STEP 4 (pola terbalik y-axis pada step 1): "<<endl<<endl;


for(int i=4; i>0; i--){
		cout<<"     ";
		for(int k=5-i; k>0; k--){
			cout<<" ";                  
		}
		
		
		for(int j=0;j<i;j++){
			cout<<"*";
		}
		
		cout<<endl;
		
}

 cout<<"STEP 5 (pola terbalik y-axis pada step 2): "<<endl<<endl;

for(int i=4; i>0; i--){
		cout<<"          ";
		
		for(int b=1;b<i;b++){
			cout<<"*";
		}		
	
	cout<<endl;
}

cout<<"STEP 6 (gabungan step 4 dan 5): "<<endl<<endl;

for(int i=4; i>0; i--){
		cout<<"     ";
		for(int k=5-i; k>0; k--){
			cout<<" ";                  
		}
		
		
		for(int j=0;j<i;j++){
			cout<<"*";
		}
		
		for(int b=1;b<i;b++){
			cout<<"*";
		}		
	
	cout<<endl;
}

cout<<"STEP 7 Final Step (gabungan step 3 dan 5): "<<endl<<endl;
	
	for(int i=0; i<5; i++){
		cout<<"     ";
		for(int k=4-i; k>0; k--){
			cout<<" ";                  
		}
		
		
		for(int j=0;j<=i;j++){
			cout<<"*";
		}
		
		for(int b=0;b<i;b++){
			cout<<"*";
		}		
	
	cout<<endl;
}

for(int i=4; i>0; i--){
		cout<<"     ";
		for(int k=5-i; k>0; k--){
			cout<<" ";                  
		}
		
		
		for(int j=0;j<i;j++){
			cout<<"*";
		}
		
		for(int b=1;b<i;b++){
			cout<<"*";
		}		
	
	cout<<endl;
}
	
	
}
