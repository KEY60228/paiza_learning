#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    vector<string> v{"HND", "NRT", "KIX", "NGO", "NGO"};

    sort(v.begin(), v.end());
    int flg = 0;
    for (int i = 0; i < v.size() - 1; i++) {
        if (v[i] == v[i + 1]) {
            flg = 1;
        }
    }

    if (flg) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }

    return 0;
}