#include <iostream>
using namespace std;

int main() {
  
	int i,num,sum=0;
//	print 1 to 10
//	for(i=1; i<=10; i++){
//		cout<<i<<" ";
//	}

//	print 10 to 1
//	for(i=10; i>=1; i--){
//		cout<<i<<" ";
//	}

//	print even number
//	for(i=2; i<=100; i=i+2){
//		cout<<i<<" ";
//	}

//	print odd number
//	for(i=1; i<=100; i=i+2){
//		cout<<i<<" ";
//	}


	cout<<"enter your number";
	cin>>num;
	
//	1 to n number print
	for(i=1; i<=num; i++){
		cout<<i<<" ";
		sum+=i;
		
	}
	cout<<"sum "<<sum<<endl;

	


  return 0;
}
  
  

