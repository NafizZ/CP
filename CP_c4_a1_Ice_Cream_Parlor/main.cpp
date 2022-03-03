#include <iostream>

using namespace std;

int main()
{
    int t, m, n;

    cin >> t ;


    for(int i = 0; i<t; i++){
        int flag = 0;
        cin >> m >> n;
        int cost[n];

        for(int j=0; j<n; j++){
            cin >> cost[j];
        }

        for(int k=0; k-1 <n; k++){
            for(int l=k+1; l<n; l++){
                if(cost[k] + cost[l] == m){
                    cout << k+1 << " " << l+1 << endl;
                    flag = 1;
                    break;
                }
            }
            if(flag == 1)
                break;
        }

    }

    return 0;
}
