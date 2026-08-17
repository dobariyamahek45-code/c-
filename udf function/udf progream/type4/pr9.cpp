//39. Write a function to return the largest of three numbers.
#include <iostream>
using namespace std;
int largest(int a, int b, int c) {
    if(a > b && a > c)
        return a;
    else if(b > c)
        return b;
    else
        return c;
}
int main() {
    int ans;
	ans = largest(10, 25, 15);
    cout << "Largest:- " << ans;

    return 0;
}
