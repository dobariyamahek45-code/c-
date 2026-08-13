#include<iostream>
using namespace std;
void larg(int a,int b,int c){
	if(a>b && a>c){
		cout<<"largest number a:-"<<a;
	}else if(b>a && b>c){
		cout<<"largest number b:-"<<b;
	}else{
		cout<<"largest number c:-"<<c;
	}
}
int main() {
	larg(10,20,45);
	return 0;
}
