#include<iostream>
using namespace std;
int main(){
	
	char ch;
	
	cout<<"enter a charachter";
	cin>>ch;
	
	if((ch >= 'A'&& ch <='Z')||(ch >= 'a'&& ch <='b')){
		cout<<"alphabet charachter";
	}else{
		cout<<" not alphabet charachter";
	}
	
	return 0;
}
