#include<iostream>
using namespace std;
int main(){
	
	int a,b,c;
	
	cout<<"enter a three number";
	cin>>a>>b>>c;
	
	if(a>=b && a>=c){
		cout<<"largest number of a";
	}else if(a>=b && b>=c){
		cout<<"largest number of b";
	}else{
		cout<<"largest number of c";
	}
	
	return 0;
}
