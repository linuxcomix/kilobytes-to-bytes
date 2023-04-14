#include <iostream>
using namespace std;

int main() {

    float kilobytes, bytes;

    cout << "Enter the amount of kilobytes: ";
    cin >> kilobytes;

    bytes = kilobytes * 1024; // 1 KB = 1024 Bytes

    cout << kilobytes << " KB is equal to " << bytes << " Bytes.\n"; 

    return 0;
}
