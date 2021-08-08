#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    vector<string> v{"HND", "NRT", "KIX", "NGO", "NGO", "NGO", "NGO", "NGO"};

    vector<string> u;
    for (int i = 0; i < v.size(); i++) {
        if (find(u.begin(), u.end(), v[i]) == u.end()) {
            u.push_back(v[i]);
        }
    }

    int ans;
    for (int i = 0; i < u.size(); i++) {
        int tmp = 0;
        for (int j = 0; j < v.size(); j++) {
            if (u[i] == v[j]) {
                tmp++;
            }
        }
        if (tmp > 0) {
            ans = tmp;
        }
    }

    cout << ans << endl;

    return 0;
}