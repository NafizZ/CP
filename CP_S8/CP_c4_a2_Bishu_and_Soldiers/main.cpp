#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int N, Q, M;

    cin >> N;
    int arr[N];

    for(int i=0; i<N; i++){
        cin >> arr[i];
    }

    sort(arr, arr+N);

    cin >> Q;

    for(int i=0; i<Q; i++){
        cin >> M;
        int C=0, sum=0;
        if(M < arr[0]){
            cout << 0 << " " << 0 << endl;
        }
        else{
            for(int j = 0; j < M && j<N; j++){
                C++;
                sum = sum + arr[j];
            }
            cout << C << " " << sum << endl;
        }
    }

    return 0;
}
