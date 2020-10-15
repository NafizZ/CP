#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    string word;
    for(int i=0; i<n; i++){
        cin >> word;

        int w_length = word.length();
        if(w_length>10){
            cout << word[0] << w_length-2 << word[w_length-1] << endl;
        }
        else{
            cout << word << endl;
        }

    }

    return 0;
}
