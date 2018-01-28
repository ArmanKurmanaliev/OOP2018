#include <iostream>
using namespace std;
int main() {
    int p, yy, x, y;
    cin >> p >> x >> y;
    yy = x * p % 100;
    x = x + x * p / 100;
    y = y + y * p / 100 + yy;
    x = x + y / 100;
    y = y % 100;
    cout << x << " " << y;
    return 0;
}