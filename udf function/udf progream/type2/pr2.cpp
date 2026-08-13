//12. Write a function to find the largest of two numbers.
#include<iostream>
using namespace std;
void larg(int a,int b){
	if(a>b){
		cout<<"largest number a:-"<<a;
	}else{
		cout<<"largest number b:-"<<b;
	}
}
int main() {
	larg(10,20);
	return 0;
}
