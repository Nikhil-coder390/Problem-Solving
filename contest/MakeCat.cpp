#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    string res = "cat";
    sort(s.begin(), s.end());
    sort(res.begin(), res.end());
    if (s == res)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
    return 0;
}
