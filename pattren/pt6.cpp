#include<iostream>
using namespace std;
int main(){

// 	  *
//   * *
//  * * *
// * * * *
//* * * * *
// * * * *
//  * * *
//   * *
//    *


	int i,j,s;
	for(i = 1; i <= 5; i++)
	{
   
    for(s = 1; s <= 5 - i; s++)
    {
        cout << " ";
    }

   
    for(j = 1; j <= 2*i - 1; j++)
    {
        cout << "*";
    }

    cout <<"\n";
	}
	
	for(i = 4; i >= 1; i--)
	{
    
    for(j = 1; j <= 5 - i; j++)
    {
        cout << " ";
    }

    
    for(j = 1; j <= 2*i - 1; j++)
    {
        cout << "*";
    }

    cout <<"\n";
	}
	return 0;
}






   
