#include<bits/stdc++.h>


using namespace std;




int main()
{
    int n, n1,n2, m;


    cin >> n1 >> n2 ;

    n= n1|n2;
    //cout << n1 | n2 << endl;
    cout << n << endl;

    n1 = n1 >> 1;
    cout << n1 << endl;

    m = n2&1;
    if(m == 1){
        cout << "odd" << endl;
    }
    else
        cout << "even" << endl;


    string x = bitset<8>(10).to_string();
    cout << x << endl;

    return 0;
}
