#include <iostream>

using namespace std;

int main()
{
    int k, n, w, T1=0, T2=0;
    cin >> k >> n >> w;

    for(int i=1; i<=w; i++){
        T1 = i*k;
        T2 = T2+T1;
    }

    int r=T2-n;
    if(r > 0)
        cout << r << endl;
    else
        cout << 0 << endl;
    return 0;
}
