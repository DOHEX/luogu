#include <iostream>
#include <map>
using namespace std;

int main()
{
    string a;
    cin >> a;
    map<string, int> m = {{"Jan", 1},
                          {"Feb", 2},
                          {"Mar", 3},
                          {"Apr", 4},
                          {"May", 5},
                          {"Jun", 6},
                          {"Jul", 7},
                          {"Aug", 8},
                          {"Sep", 9},
                          {"Oct", 10},
                          {"Nov", 11},
                          {"Dec", 12}};
    cout << m[a.substr(0, 3)] << " " << stoi(a.substr(3, 4));
    return 0;
}
