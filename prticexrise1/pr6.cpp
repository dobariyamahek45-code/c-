#include<iostream>>
using namespace std;
int main(){
	
	int num;
	
	cout<<"enter a number";
	cin>>num;
	
	if(num % 5 ==0 && num % 11 ==0){
		cout<<"divisible 5 & 11";
	}else{
		cout<<" not divisible 5 & 11";	
	}
	
	return 0;
}
