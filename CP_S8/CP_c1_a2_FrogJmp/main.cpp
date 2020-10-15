#include <iostream>
#include <cmath>


using namespace std;


int solution(int X, int Y, int D) {
    // write your code in C++14 (g++ 6.2.0)

    float R = (float)(Y-X) / (float)D;
    R = ceil(R);
    int r = (int)R;

    return r;
}


int main()
{
    int X, Y, D;


    cin >> X >> Y >> D;


    cout << solution(X, Y, D) << endl ;

    return 0;
}
