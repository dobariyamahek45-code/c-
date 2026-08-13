//14. Write a function to check whether a number is even or odd.
#include<iostream>
using namespace std;
void even(int num){
	if(num%2==0){
		cout<<"odd";
	}else{
		cout<<"even";
	}
	
}
int main(){
	int num;
	cout<<"enter a num";
	cin>>num;
	
	even(num);
	return 0;
}
