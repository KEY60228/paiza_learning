#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    vector<int> v;

    cin >> n;

    for (int i = 0; i < n; i++) {
        int tmp;
        cin >> tmp;
        v.push_back(tmp);
    }

    for (int i = 0; i < n; i++) {
        cout << v[i] << endl;
    }

    return 0;
}