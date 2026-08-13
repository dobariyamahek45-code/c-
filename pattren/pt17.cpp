#include<iostream>
using namespace std;
int main(){
	
//1
//2 3
//4 5 6
//7 8 9 10
	
	int i,j,s=1;
	for(i=1;i<=4;i++)
	{
		for(j=1;j<=i;j++){
		cout<<s<<" ";
		s++;	
		}
		cout<<"\n";
	}
    return 0;
	
}
