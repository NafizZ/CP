#include <iostream>

using namespace std;


int HMP(int n){
    int flag = -1;
    int ans = 0;
    if(n == 1 ){
        ans = ans + 0;
    }
     if(n == 2){
        ans = ans + 1;
    }
    else{
        for(int i = 2; i <= n/2; i++){
            if(n%i == 0){
                flag = 0;
                break;
            }
            flag = 1;
        }
        if(flag == 0)
            ans = ans + 0;
        else
            ans = ans + 1;
    }

    return ans;
}

int main()
{
    int n;

    while(cin >> n){
        int r = 0;
        while(n>1){

            r = r + HMP(n);
            n = n/10;
        }
        cout << r << endl;
    }

    return 0;
}
