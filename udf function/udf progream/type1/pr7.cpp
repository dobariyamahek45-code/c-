//7. Write a function to check whether a number is positive or negative.
#include<iostream>
using namespace std;
void pos(){
	
	int num;
	cout<<"enter a num";
	cin>>num;
	if(num>=0){
		cout<<"postive number";
	}else{
		cout<<"negative number";
	}
}
int main(){
	pos();
	return 0;
}
