#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    set<char> st;

    // using transform() function and ::tolower in STL
    transform(s.begin(), s.end(), s.begin(), ::tolower);

    //cout << s << endl;

    if(n>=26){
        for(int i=0; i<n; i++){
            if(s[i] >= 'a' && s[i] <= 'z'){
                st.insert(s[i]);
            }
        }
        int set_l = st.size();
        if(set_l == 26){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }

    }
    else{
        cout << "NO" << endl;
    }
    return 0;
}
