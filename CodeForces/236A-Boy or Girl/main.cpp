#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    set<char> set_s(begin(s), end(s));

    int l = set_s.size()%2;
    if(l == 1){
        cout << "IGNORE HIM!" << endl;
    }
    else{
        cout << "CHAT WITH HER!" << endl;
    }

    return 0;
}
