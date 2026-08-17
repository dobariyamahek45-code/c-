//33. Write a function to return the product of two numbers.
#include <iostream>
using namespace std;
int product(int a, int b) {
    return a * b;
}
int main() {
    int ans;
	ans = product(5, 4);
    cout << "Product:- " << ans;
	return 0;
}
