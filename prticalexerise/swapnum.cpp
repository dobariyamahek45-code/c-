#include<iostream>
using namespace std;
int main(){
	
	int x,y,temp;
	
	
	cout<<"enter two num:";
	cin>>x>>y;
	
	temp = x;
	x = y;
	y = temp;
	
	cout<<"after swapping"<<endl;
	cout<<"a ="<<x<<endl;
	cout<<"b ="<<y<<endl;


	
	
	return 0;
	
	
}
