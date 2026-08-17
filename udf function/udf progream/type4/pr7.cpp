//37. Write a function to return the factorial of a number.
#include <iostream>
using namespace std;
int factorial(int n) {
    int f = 1;
	for(int i = 1; i <= n; i++) {
        f = f * i;
    }
	return f;
}

int main() {
    int ans;
	ans = factorial(8);
    cout << "Factorial:- " << ans;
	return 0;
}
