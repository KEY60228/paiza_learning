#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    vector<pair<string, string>> v;
    v.push_back({"Kyoko", "B"});
    v.push_back({"Rio", "O"});
    v.push_back({"Tsubame", "AB"});
    v.push_back({"KurodaSensei", "A"});
    v.push_back({"NekoSensei", "A"});

    for (int i = 0; i < v.size(); i++) {
        cout << v[i].first << " " << v[i].second << endl;
    }

    return 0;
}