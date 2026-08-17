//20. Write a function to calculate the area of a circle.
#include <iostream>
using namespace std;
void circle(float radius) {
		float PI = 3.14;
        float area = PI * radius * radius;
        //area=3.14*2.30*2.30
        cout << "Area of circle = " << area;
}
int main(){
	circle(2.30);
	return 0;
}


