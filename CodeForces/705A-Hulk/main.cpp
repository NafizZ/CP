#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    string s1 = "I hate that ", s2 = "I love that ", s3 = " that ", s4 = " it", s="";
    for(int i=1; i<=n; i++){
        if(i%2 == 1){
            s += s1;

        }
        if(i%2 == 0){
            s += s2;

        }
    }
    // 'resize(STRING(STRING.size()-(the number of character you want to remove))' function is use to resize a string
    s.resize(s.size() - s3.size());
    s += s4;
    cout << s << endl;
    return 0;
}
