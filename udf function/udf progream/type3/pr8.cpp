//28. Write a function to return the largest of three numbers.
#include <iostream>
using namespace std;
int largest() {
    int a = 10, b = 25, c = 15;
	if(a > b && a > c)
        return a;
    else if(b > c)
        return b;
    else
        return c;
}
int main() {
    int ans = largest();
	ans = largest();
    cout << "Largest:- " << ans;
	return 0;
}
