//32. Write a function to return the difference of two numbers.
#include <iostream>
using namespace std;
int difference(int a, int b) {
    return a - b;
}
int main() {
    int ans;
	ans = difference(20, 10);
    cout << "Difference:- " << ans;
	return 0;
}
