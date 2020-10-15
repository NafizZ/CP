#include <iostream>

using namespace std;

int main()
{
    int x=0, n=0;
    cin >> n;
    for(int i=0; i<n; i++){
        string X;
        cin >> X;
        if(X == "++X" || X == "X++"){
            x++;
        }
        else{
            x--;
        }
    }
    cout << x << endl;


    return 0;
}
