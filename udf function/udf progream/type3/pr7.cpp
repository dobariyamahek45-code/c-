//27. Write a function to return the largest of two numbers.
#include <iostream>
using namespace std;
int largest() {
    int a = 20, b = 15;

    if(a > b)
        return a;
    else
        return b;
}

int main() {
    int ans = largest();
	ans = largest();
    cout << "Largest:- " << ans;
	return 0;
}
