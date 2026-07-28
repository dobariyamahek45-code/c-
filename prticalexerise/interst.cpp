#include <iostream>
using namespace std;
int main() {
	
		float p, r, n, si;
		
		cout << "Enter principal amount: ";
		cin >> p;
		
		cout << "Enter rate: ";
		cin >> r;
		
		cout << "Enter time: ";
		cin >> n;
		
		si = (p * r * n) / 100;
		cout << "Simple Interest = " << si;
		
		return 0;
}
