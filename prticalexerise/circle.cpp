#include <iostream>
using namespace std;
int main() {
	
		float radius, area;
		float PI = 3.14;
		
		cout << "Enter radius: ";
		cin >> radius;
		
		area = PI * radius * radius;
		
		cout << "Area of circle = " << area;
		return 0;
}
