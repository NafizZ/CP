#include <iostream>

using namespace std;

int main()
{
    int t, n;
    cin >> t;
    for(int i=0; i<t; i++){
        cin >> n;
        int arr[n];

        int k_sum = 0, j_sum = 0; //j_sum to keep the sum of even numbers && k_sum to keep the sum of odd numbers

        int j=2, k=1, l=1, x=0;
        while(j<=n){

            arr[x]=j;
            x++;
            j_sum += j;
            j=j+2;
        }
        while(l<n/2){

            l++;
            arr[x] = k;
            k_sum += k;
            x++;
            k=k+2;
        }

        int r = j_sum - k_sum; //

        if(r%2 == 1 && r>0){
            arr[x] = r;
            cout << "YES" << endl;
            for(int m=0; m<n; m++){
                cout << arr[m] << " " ;
            }
            cout << endl;
        }
        else{
            cout << "NO" << endl;
        }

    }
    return 0;
}
