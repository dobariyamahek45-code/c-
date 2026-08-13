//16. Write a function to check whether a year is a leap year.
#include <iostream>
using namespace std;

void leap(int year) {
		if(year % 4 == 0){
			cout << "Leap Year";	
		}
		else{
			cout << "Not Leap Year";
		}
		
	}
int main(){
	int year;
	 
	 cout<<"enter a year";
	 cin>>year;
	 leap(year);
	 return 0;
}
