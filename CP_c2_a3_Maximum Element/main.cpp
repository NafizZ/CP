//hacker rank
//Maximum Element

#include <iostream>
#include <stack>



using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int N;
    cin >> N;


    stack <int> stk;
    stack <int> stk2;


    for(int i=0; i<N; i++){

        int input;
        cin >> input;


        if(input == 1){
            int p;
            cin >> p;
            stk.push(p);

            if(stk2.empty()){
                stk2.push(p);

            }
            else{
                if(p > stk2.top()){
                    stk2.push(p);
                }
                else{
                    int m = stk2.top();
                    stk2.push(m);
                }

            }

        }
        else if(input == 2){
                stk.pop();
                stk2.pop();

        }
        else if(input == 3){

           cout << stk2.top() << endl;

        }

    }

    return 0;
}
