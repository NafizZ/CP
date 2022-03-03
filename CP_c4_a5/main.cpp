//codility
//Task name: PassingCars
//CP_c4_a5

#include <iostream>

using namespace std;

int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)

    int temp = A[0];
    int m=1, ans=0;
    for(int i=1; i<A.size(); i++){
        if(A[i] == temp){
            m++;
        }
        else{
            ans = ans + (m*1);
        }
    }
    return ans;
}

int main()
{

    return 0;
}
