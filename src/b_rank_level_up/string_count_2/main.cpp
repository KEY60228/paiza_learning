#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    vector<string> v{"Nara", "Shiga", "Hokkaido", "Chiba"};

    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << endl;
    }

    return 0;
}