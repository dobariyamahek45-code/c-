//14. Write a function to check whether a number is even or odd.
#include<iostream>
using namespace std;
void even(int num){
	if(num%2==0){
		cout<<"this num is odd";
	}else{
		cout<<"this num is even";
	}
	
}
int main(){
	
	even(7);
	return 0;
}
