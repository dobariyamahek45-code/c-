//25. Write a function to return the reverse of a number.
#include<iostream>
using namespace std;
int rev(){
	int a=12345, rev=0;
	while(a!=0)
	{
	   rev=rev*10+a%10;
	   a/=10;
	}
	return rev;
}
int main(){
	int ans;
	ans=rev();
	cout<<"reverse of a number:-"<<ans;
	return 0;
}





