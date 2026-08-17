//18. Write a function to print the Fibonacci series.
#include<iostream>
using namespace std;
void fibo(int n){
	int a=0,b=1,c;
	for(int i=1;i<=n;i++){
		cout<<a<<" ";
		c=a+b;
		a=b;
		b=c;
	}
}
int main(){
	fibo(10);
	return 0;
}
