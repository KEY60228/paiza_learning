#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> v{1, 3, 5, 6, 3, 2, 5, 23, 2};

    sort(v.begin(), v.end());

    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << endl;
    }

    return 0;
}