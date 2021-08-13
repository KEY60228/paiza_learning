#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    int h, w, n;
    cin >> h >> w >> n;

    vector<string> v;
    for (int i = 0; i < h; i++) {
        string s;
        cin >> s;
        v.push_back(s);
    }

    for (int i = 0; i < n; i++) {
        int y, x;
        cin >> y >> x;
        v[y][x] = '#';
    }

    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << endl;
    }

    return 0;
}
