#include <bits/stdc++.h>
using namespace std;

int n;

struct Student
{
    int id, a, b, c, z;
} s[305];

bool cmp(Student s1, Student s2)
{
    if (s1.z == s2.z)
    {
        if (s1.a == s2.a)
            return s1.id < s2.id;
        return s1.a > s2.a;
    }
    return s1.z > s2.z;
}

int main()
{
    cin.tie(nullptr)->sync_with_stdio(false);
    cin >> n;
    for (int i = 1; i <= n; ++i)
    {
        s[i].id = i;
        cin >> s[i].a >> s[i].b >> s[i].c;
        s[i].z = s[i].a + s[i].b + s[i].c;
    }
    sort(s + 1, s + n + 1, cmp);
    for (int i = 1; i <= 5; ++i)
    {
        cout << s[i].id << " " << s[i].z << "\n";
    }
    return 0;
}
