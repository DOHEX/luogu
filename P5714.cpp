#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    float m, h;
    cin >> m >> h;
    float bmi = m / (h * h);
    if (bmi < 18.5)
        cout << "Underweight";
    else if (bmi < 24)
        cout << "Normal";
    else
        cout << bmi << "\n" << "Overweight";
    return 0;
}
