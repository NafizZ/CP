#include <iostream>

using namespace std;

int main()
{
    int n, p;
    double r = 0.0;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> p;
        r += (double)p;
    }
    r = r/n;
    cout << r << endl;
    return 0;
}
