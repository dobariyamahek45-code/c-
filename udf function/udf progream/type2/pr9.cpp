//19. Write a function to print the multiplication table of a number.
#include<iostream>
using namespace std;
void table(int n){
  for(int i=1;i<=10;i++){
  	cout<<n<<" * "<<i<<" = "<<n*i<<endl;
   }
}

int main(){
	table(5);
	return 0;
}
