#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int y=0;
    for(int i=0; i<n; i++){
        int r=0;
        for(int j=0; j<3; j++){
            int t;
            cin >> t;
            if(t == 1)
                r++;
        }
        if(r >= 2)
            y++;
    }
    cout << y << endl;
    return 0;
}
