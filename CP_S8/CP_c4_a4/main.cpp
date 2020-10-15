#include <iostream>

using namespace std;

int solution(int A, int B, int K) {
    // write your code in C++14 (g++ 6.2.0)
    int temp, sum = 0;
    while(A % K != 0){
        A++;

    }
    temp = A;

    for(int i = temp; i<=B; i = i+K){
        sum ++;
    }

    return sum;

}

int main()
{
    int A, B, K;

    cin >> A >> B >> K;
    cout << solution(A, B, K) ;

    return 0;
}
