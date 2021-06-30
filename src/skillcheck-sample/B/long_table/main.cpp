#include <iostream>
// #include <fstream>

using namespace std;

int main() {
    // ifstream in("input.txt");
    // cin.rdbuf(in.rdbuf());

    int n, m, i, a_i[100], b_i[100];
    int j, s[100] = {}, flag = 0, count = 0;

    cin >> n;
    cin >> m;

    for (i = 0; i < m; i++) {
        cin >> a_i[i];
        cin >> b_i[i];
    }

    for (i = 0; i < m; i++) {
        for (j = 0; j < a_i[i]; j++) {
            if (s[(b_i[i] + j) % n] != 0) {
                flag = 1;
            }
        }
        if (flag == 0) {
            for (j = 0; j < a_i[i]; j++) {
                s[(b_i[i] + j) % n] = 1;
                count++;
            }
        }
        flag = 0;
    }

    cout << count << endl;

    return 0;
}
