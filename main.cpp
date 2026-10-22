#include <iostream>

using namespace std;

int main() {
    long long v, a, b, n;
    cin >> v >> a >> b >> n;

    /* for (int i = 0; i <= n; i++) {
        if (i % a == 0) {
            v += 1;
        }
        if (i % b == 0) {
            v -= 1;
        }
    }

    cout << v; */

    long long plus = n / a;
    long long minus = n / b;

    long long answer = v + plus - minus;

    cout << answer;

    return 0;
}