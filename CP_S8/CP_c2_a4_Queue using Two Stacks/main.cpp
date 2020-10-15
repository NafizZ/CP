#include <iostream>
#include <queue>


using namespace std;

int main()
{
    queue <int> qu;

    int N;
    cin >> N;

    for(int i = 0; i<N; i++){
        int p;
        cin >> p;

        if(p == 1){
            int q;
            cin >> q;
            qu.push(q);
        }

        else if(p == 2){
                qu.pop();

        }

        else if(p == 3){
            cout << qu.front() << endl ;

        }

    }

    return 0;
}
