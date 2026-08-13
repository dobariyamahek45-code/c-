//15. Write a function to check whether a number is positive, negative, or zero.
#include<iostream>
using namespace std;
void pos(int num ){
	if(num >0){
		cout<<"number is postive";
	}else if(num < 0){
		cout<<"number is nagative";
	}else{
		cout<<"number is zero";
	}
}
int main(){
	int num;
	cout<<"enter a num";
	cin>>	num;
	pos(num);
	return 0;
	
}
