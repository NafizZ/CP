#include <iostream>

using namespace std;

int S(int s){
    int sR = 0;
    while(s >= 1){
        sR = sR+(s%10);
        s=s/10;
    }
    return sR;
}

int main()
{
    int n;
    cin >> n;
    int a, b;

    if(n%2 == 0){
        a = (n/2) - 1;
        b = n - a;
    }
    else{
        a = (n/2);
        b = n - a;
    }

    int r = S(a) + S(b);
    cout << r;

    return 0;
}
