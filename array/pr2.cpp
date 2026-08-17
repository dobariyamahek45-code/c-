#include<iostream>
using namespace std;

int main() {
    int arr[row][col];

    cout << "Matrix of A:" << endl;

    cout << "Enter your row: ";
    cin >> row;

    cout << "Enter your col: ";
    cin >> col;

    // Input matrix
    cout << "Enter matrix elements:" << endl;

    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            cin >> arr[i][j];
        }
    }

    // Display matrix
    cout << "Matrix is:" << endl;

    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
