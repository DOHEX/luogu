#include <bits/stdc++.h>
using namespace std;

string build_tree(const string& s) {
    // 基本情况，如果字符串只有一个字符，直接返回该类型
    if (s == string(s.size(), '0')) {  // 全 0 串
        return "B";
    }
    if (s == string(s.size(), '1')) {  // 全 1 串
        return "I";
    }
    // 否则是 F 串，递归构造左右子树
    int mid = s.size() / 2;
    string left = build_tree(s.substr(0, mid));  // 左子串
    string right = build_tree(s.substr(mid));    // 右子串
    return left + right + "F";  // 后序遍历：左 + 右 + 根
}
int main()
{
    cin.tie(nullptr)->sync_with_stdio(false);

    int N;
    cin >> N; 
    string S;
    cin >> S;
    cout << build_tree(S) << endl;
    
    return 0;
}
