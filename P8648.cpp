#include <iostream>
using namespace std;
bool a[10001][10001];
int main()
{
    int n, x1, x2, y1, y2, sum = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x1 >> y1 >> x2 >> y2;
        for (int x = x1; x < x2; x++)
        {
            for (int y = y1; y < y2; y++)
            {
                if (a[x][y] == 0)
                {
                    a[x][y] = 1;
                    sum++;
                }
            }
        }
    }
    cout << sum;
    return 0;
}
