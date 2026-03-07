#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;   // read into n

    int* ptr = new int[n];   // allocate array of size n

    cout << "Accept elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> ptr[i];
    }

    cout << "Display elements:\n";
    for (int i = 0; i < n; i++) {
        cout << ptr[i] << endl;
    }

    delete[] ptr;  // free allocated memory
    return 0;
}
