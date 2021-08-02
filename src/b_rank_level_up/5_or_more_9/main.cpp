#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> v;
    for (int i = 0; i < n; i++) {
        int tmp;
        cin >> tmp;
        v.push_back(tmp);
    }

    int sum = 0;
    for (int i = 0; i < v.size(); i++) {
        if (v[i] >= 5) {
            sum += v[i];
        }
    }

    cout << sum << endl;

    return 0;
}