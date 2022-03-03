#include <iostream>

using namespace std;

int main()
{
    int n, c=0, s=0;
    cin >> n;

    string arr;
    cin >> arr;

    for(int i=0; i<n; i++){
        if(arr[i] == '8'){
            c++;
        }
    }

    s=n/11;

    if(s<=c)
        cout << s;
    else
        cout << c;

    return 0;
}

