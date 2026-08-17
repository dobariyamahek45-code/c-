//34. Write a function to return the quotient of two numbers.
#include <iostream>
using namespace std;
float quotient(int a, int b) {
    return (float)a / b;
}
int main() {
    float ans ;
	ans = quotient(10, 2);
    cout << "Quotient:- " << ans;
	return 0;
}
