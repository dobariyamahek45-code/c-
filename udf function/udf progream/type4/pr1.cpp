//31. Write a function to return the sum of two numbers.
#include <iostream>
using namespace std;
int sum(int a, int b) {
    return a + b;
}
int main() {
    int ans;
    ans = sum(10, 20);
	cout << "Sum:- " << ans;
	return 0;
}
