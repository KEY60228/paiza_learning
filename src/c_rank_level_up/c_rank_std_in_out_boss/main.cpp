#include <iostream>
#include <string>

using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        string s;
        int a;
        cin >> s;
        cin >> a;
        cout << s << " " << a + 1 << endl;
    }

    return 0;
}
