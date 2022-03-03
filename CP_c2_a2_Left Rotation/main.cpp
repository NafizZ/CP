//Hacker rank
//Left Rotation

#include <iostream>
#include <queue>

using namespace std;

void show(queue <int> qu, int d){

    for(int i=1; i<=d; i++){
        int temp = qu.front();
        qu.push(temp);
        qu.pop();

    }

    while(!qu.empty()){
        cout << qu.front() << " ";
        qu.pop();
    }

}

int main()
{
    queue <int> qu;
    int n, m, d;
    cin >> n >> d;

    for(int i=1; i<=n; i++){
        cin >> m;
        qu.push(m);
    }

    show(qu, d);

    return 0;
}
