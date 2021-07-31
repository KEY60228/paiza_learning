#include <iostream>

using namespace std;

int main() {
    int i = 10000;
    while (i % 13 != 0) {
        i++;
    }
    cout << i << endl;

    return 0;
}
