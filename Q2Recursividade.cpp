#include <iostream>
using namespace std;

int fatorialDuplo(int num) {
    if (num <= 0) {
        return 1;
    } else {
        return num * fatorialDuplo(num - 2);
    }
}

int main() {
    int num;
    cin >> num;

    int resultado = fatorialDuplo(num);
    cout << resultado << endl;

    return 0;
}
