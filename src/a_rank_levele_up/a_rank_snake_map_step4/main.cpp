#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    int h, w;
    cin >> h >> w;

    vector<string> v;
    for (int i = 0; i < h; i++) {
        string s;
        cin >> s;
        v.push_back(s);
    }

    for (int i = 0; i < v.size(); i++) {
        for (int j = 0; j < v[0].length(); j++) {
            if (i == 0 || v[i - 1][j] == '#') {
                if (i == v.size() - 1 || v[i + 1][j] == '#') {
                    cout << i << " " << j << endl;
                }
            }
        }
    }

    return 0;
}

