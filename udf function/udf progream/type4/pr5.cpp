//35. Write a function to return the square of a number.
#include <iostream>
using namespace std;
int square(int n) {
    return n * n;
}
int main() {
    int ans;
	ans = square(5);
    cout << "Square:- " << ans;
	return 0;
}

