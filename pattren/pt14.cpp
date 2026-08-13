#include<iostream>
using namespace std;

int main()
{
	
	
// 	      *
//
//      *   *
//
//    *       *
//
//  *           *
//
//* * * * * * * * *


    int i, j,s;

    for(i = 1; i <= 5; i++)
    {
        for(s = 1; s<=5-i; s++)
        		
        {
            cout << "  ";
        }

        for(j = 1; j <= 2 * i - 1; j++)
        {
            if(i == 5|| j == 1 || j == 2 * i - 1)
                cout << "* ";
            else
                cout << "  ";
        }

        cout <<"\n\n";
    }

    return 0;
}
