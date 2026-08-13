//6. Write a function to check whether a number is even or odd.
#include<iostream>
using namespace std;
void even(){
	int num;
	cout<<"enter a num";
	cin>>num;
	if(num%2==0){
		cout<<"even";
	}else{
		cout<<"odd";
	}
}
int main(){
	even();
	return 0;
}
