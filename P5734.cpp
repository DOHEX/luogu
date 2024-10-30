#include <iostream>
#include <string>
using namespace std;

int main()
{
    int p, q, a, b;
    string doc, str;
    cin >> q >> doc;
    for (int i = 0; i < q; ++i)
    {
        cin >> p;
        if (p == 1)
        {
            cin >> str;
            doc += str;
            cout << doc << endl;
        }
        else if (p == 2)
        {
            cin >> a >> b;
            doc = doc.substr(a, b);
            cout << doc << endl;
        }
        else if (p == 3)
        {
            cin >> a >> str;
            doc = doc.insert(a, str);
            cout << doc << endl;
        }
        else if (p == 4)
        {
            cin >> str;
            int fd = doc.find(str);
            if (fd == string::npos)
            {
                cout << -1 << endl;
            }
            else
            {
                cout << doc.find(str) << endl;
            }
        }
    }
    return 0;
}