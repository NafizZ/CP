#include <iostream>

using namespace std;

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int x, c=0;
    cin >> x;

    int j=4;

    while(j>=0){
        int temp = 0;
        if(x == 0){
            break;
        }
        if(arr[j]<=x){
            temp = x/arr[j];
            c = c+temp;
            x = x-(c*arr[j]);
        }
        j--;

    }
    cout << c << endl;

    return 0;
}
