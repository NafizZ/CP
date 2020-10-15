#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--){
        string s;
        set<char> res;// using set to keep the value sorted and unique(not repeated) value
        cin >> s;
        s+='#'; // insert last value '#' so that loop can check the last character of string s

        for(int i=1; i<s.length(); i++){
            if(s[i] == s[i-1]){
                i++;
            }
            else{
                res.insert(s[i-1]);

            }
        }


        for (auto it=res.begin(); it != res.end(); ++it)
            cout << *it;

        cout << endl;

    }
    return 0;
}
