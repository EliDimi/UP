#include <iostream>
using namespace std;

int main() {
    int a, b, c, d;
    int sum = 0;
    cin >> a >> b >> c >> d;
    if (a % 2 == 0) {
        sum = sum + a;
    }
    if (b % 2 == 0) {
        sum = sum + b;
    }
    if (c % 2 == 0) {
        sum = sum + c;
    }
    if (d % 2 == 0) {
        sum = sum + d;
    }
    cout << sum;
    return 0;
}
