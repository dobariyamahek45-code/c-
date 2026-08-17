//24. Write a function to return the factorial of a number.
#include <iostream>
using namespace std;

int fact() {
    int n = 6, f = 1;
	for(int i = 1; i <= n; i++) {
        f = f * i;
    }
	return f;
}

int main() {
    int ans = fact();
	ans = fact();
    cout << "Factorial:- " << ans;
	return 0;
}
