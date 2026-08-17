//36. Write a function to return the cube of a number.
#include <iostream>
using namespace std;
int square(int n) {
    return n * n * n;
}
int main() {
    int ans;
	ans = square(4);
    cout << "Square:- " << ans;
	return 0;
}

