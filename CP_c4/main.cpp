#include <iostream>

using namespace std;

int main()
{
    int arr[10] = {5, 4, 1, 2, 3, 6, 9, 8, 10, 7};

    int key = 7, i;

    for(i = 0; i<10; i++){
        if(key == i)
            break;
    }

    if(i == 10)
        cout << "not found" ;
    else
        cout << "index: " << i;
    return 0;
}
