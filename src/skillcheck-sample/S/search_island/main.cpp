#include <iostream>
#include <vector>
// デバッグ
// #include <fstream>
// デバッグ

using namespace std;

void searchRight(vector<vector<int>>&, int, int, int, int);
void searchLeft(vector<vector<int>>&, int, int, int, int);
void searchBottom(vector<vector<int>>&, int, int, int, int);
void searchTop(vector<vector<int>>&, int, int, int, int);

int main() {
    vector<vector<int>> v;
    vector<int> x;
    int w, h, land = 0;
    // デバッグ
    // ifstream in("sample.txt");
    // cin.rdbuf(in.rdbuf());
    // デバッグ

    cin >> w;
    cin >> h;

    for (int i = 0; i < w * h; i++) {
        int tmp;
        cin >> tmp;
        x.push_back(tmp);
        if (i % w == (w - 1)) {
            v.push_back(x);
            x.clear();
        }
    }

    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            if (v[i][j] == 1) {
                land++;
                v[i][j] = 0;
                searchRight(v, h, w, i, j);
                searchBottom(v, h, w, i, j);
            }
        }
    }

    cout << land << endl;

    // // デバッグ
    // for (int i = 0; i < h; i++) {
    //     for (int j = 0; j < w; j++) {
    //         cout << v[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    // cout << endl;
    // // デバッグ

    return 0;
}

void searchRight(vector<vector<int>>& v, int maxH, int maxW, int h, int w) {
    for (int i = (w + 1); i < maxW; i++) {
        if (v[h][i] == 0) {
            break;
        }
        v[h][i] = 0;
        searchBottom(v, maxH, maxW, h, i);
        searchTop(v, maxH, maxW, h, i);
    }
    // // デバッグ
    // for (int i = 0; i < maxH; i++) {
    //     for (int j = 0; j < maxW; j++) {
    //         cout << v[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    // cout << endl;
    // // デバッグ
}

void searchLeft(vector<vector<int>>& v, int maxH, int maxW, int h, int w) {
    for (int i = (w - 1); i >= 0; i--) {
        if (v[h][i] == 0) {
            break;
        }
        v[h][i] = 0;
        searchBottom(v, maxH, maxW, h, i);
        searchTop(v, maxH, maxW, h, i);
    }
}

void searchBottom(vector<vector<int>>& v, int maxH, int maxW, int h, int w) {
    for (int i = (h + 1); i < maxH; i++) {
        if (v[i][w] == 0) {
            break;
        }
        v[i][w] = 0;
        searchRight(v, maxH, maxW, i, w);
        searchLeft(v, maxH, maxW, i, w);
    }
}

void searchTop(vector<vector<int>>& v, int maxH, int maxW, int h, int w) {
    for (int i = (h - 1); i >= 0; i--) {
        if (v[i][w] == 0) {
            break;
        }
        v[i][w] = 0;
        searchRight(v, maxH, maxW, i, w);
        searchLeft(v, maxH, maxW, i, w);
    }
}
