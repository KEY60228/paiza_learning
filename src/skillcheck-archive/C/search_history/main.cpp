#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<string> v;
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        auto itr = find(v.begin(), v.end(), s);
        if (itr != v.end()) {
            v.erase(itr);
        }
        v.push_back(s);
    }

    for (int i = v.size() - 1; i >= 0; i--) {
        cout << v[i] << endl;
    }

    return 0;
}
