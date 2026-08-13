#include<iostream>
using namespace std;
int main(){
	
//@ @ @ @ @
//# # # #
//@ @ @
//# #
//@
	
	int i,j,s;
	for(i=5;i>=1;i--){
			for(s=4;s>=i; s--){
			cout<<"  ";
		}
		
	 	for(j=1;j<=i;j++){

	 		if(i%2==0){
	 			cout<<" #";
			 }else{
			 	cout<<" @";
			 }
		 }
		 cout<<"\n";
	 }
	return 0;
	
}
