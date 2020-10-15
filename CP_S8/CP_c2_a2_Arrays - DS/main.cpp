//Hacker rank
//Arrays - DS

#include <iostream>
#include <stack>

using namespace std;

void show(stack <int> stk){

    while(!stk.empty()){
        cout << stk.top() << " ";
        stk.pop();
    }

}

int main()
{
    stack <int> stk;
    int N, m;
    cin >> N;
    for(int i=0; i<N; i++){
        cin >> m;
        stk.push(m);
    }

    show(stk);

    return 0;
}
