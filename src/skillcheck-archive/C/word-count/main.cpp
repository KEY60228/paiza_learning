#include <iostream>
#include <string>
#include <vector>
// #include <fstream>

using namespace std;

int main() {
    vector<string> v, key;
    string s;

    // ifstream in("sample.txt");
    // cin.rdbuf(in.rdbuf());

    while (cin >> s) {
        v.push_back(s);
    }

    for (int i = 0; i < v.size(); i++) {
        if (key.empty()) {
            key.push_back(v[i]);
            continue;
        }
        for (int j = 0; j <= key.size(); j++) {
            if (v[i] == key[j]) {
                break;
            }
            if (j == (key.size() - 1)) {
                key.push_back(v[i]);
            }
        }
    }

    vector<int> vn;
    for (int i = 0; i < key.size(); i++) {
        vn.push_back(0);
    }

    for (int i = 0; i < v.size(); i++) {
        for (int j = 0; j < key.size(); j++) {
            if (v[i] == key[j]) {
                vn[j]++;
            }
        }
    }

    for (int i = 0; i < key.size(); i++) {
        cout << key[i] << " " << vn[i] << endl;
    }

    return 0;
}
