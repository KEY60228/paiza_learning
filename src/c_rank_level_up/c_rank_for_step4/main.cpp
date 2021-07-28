#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    int m;
    cin >> m;

    vector<char> vm;
    for (int i = 0; i < m; i++) {
        char tmp;
        cin >> tmp;
        vm.push_back(tmp);
    }

    int n;
    cin >> n;

    vector<string> vn;
    for (int i = 0; i < n; i++) {
        string tmp;
        cin >> tmp;
        vn.push_back(tmp);
    }

    for (int i = 0; i < vm.size(); i++) {
        for (int j = 0; j < vn.size(); j++) {
            bool b = false;
            for (int k = 0; k < vn[j].length(); k++) {
                if (vm[i] == vn[j][k]) {
                    b = true;
                    break;
                }
            }
            if (b) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        }
    }

    return 0;
}