/*#include<iostream>
using namespace std;

int main(){
	
		int x , y , c;
		
		cout<<"enter two numner"<<endl;
		cin>>x>>y; 
		
		//swapping 
		c = x;
		x = y;
		y = c;
		
		
		
		cout << "After swapping:" << endl;
		cout<< " x is sawp"<<x<<endl;
		cout<< " y is sawp"<<y<<endl;
		
		return 0;
}*/


#include <iostream>
using namespace std;

int main() {

    int x = 10, y = 20;

    x = x + y;
    y = x - y;
    x = x - y;

    cout << "x = " << x << endl;
    cout << "y = " << y << endl;

    return 0;
}
