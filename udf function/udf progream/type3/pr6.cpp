//26. Write a function to return the sum of digits of a number.
#include<iostream>
using namespace std;
int sumdig(){
	int n=678,sum=0;
	while(n!=0){
		sum+=n%10;
		n/=10;
	}
	return sum;
}
int main(){
	int ans;
	ans=sumdig();
	cout<<"sum of digits"<<ans;
	return 0;
}

