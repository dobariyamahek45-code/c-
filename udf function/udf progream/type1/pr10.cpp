//10. Write a function to print the multiplication table of a number.
#include<iostream>
using namespace std;
void tbl(){
	int num,i;
	cout<<"enter a num";
	cin>>num;
	
	for(i=1;i<=10;i++){
		cout<<num<<" * "<<i<<" = "<<num*i<<endl;
	}
}
int main(){
	
	tbl();
	return 0;
}
