#include <iostream>

using namespace std;

#define MOD 1000003

int calc(long long int base, long long int n, long long int div) {
    if (n == 0) { // 0乗
        return 1;
    }
    if (n == 1) { // 1乗
        return base % div;
    }
    if (n % 2 == 1) { // 奇数乗
        return base * calc(base, n - 1, div) % div;
    }
    long long int tmp = calc(base, n / 2, div);
    return tmp * tmp % div;
}

int main() {
    long long int n;
    cin >> n;

    cout << calc(2, n, MOD);

    return 0;
}
