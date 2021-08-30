#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> v(N);
    for (int i = 0; i < N; i++) {
        cin >> v[i];
    }

    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int s, e;
        cin >> s >> e;
        int a = 0;
        for (int j = s; j <= e; j++) {
            a += v[j];
        }
        cout << a << endl;
    }

    return 0;
}