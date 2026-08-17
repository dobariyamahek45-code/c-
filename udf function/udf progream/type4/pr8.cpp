//38. Write a function to return the largest of two numbers.
#include <iostream>
using namespace std;
int largest(int a, int b) {
    if(a > b)
        return a;
    else
        return b;
}
int main() {
    int ans;
	ans = largest(20, 15);
    cout << "Largest:- " << ans;

    return 0;
}
