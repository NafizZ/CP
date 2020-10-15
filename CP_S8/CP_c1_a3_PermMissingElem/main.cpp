#include <iostream>
#include <vector>

using namespace std;

int solution(vector<int> &A){
    int sum1=0, sum2=0, i;
    for(i=0; i<A.size(); i++){
        sum1 = sum1 + i + 1;
    }
    sum1 = sum1 + i + 1;
    for(int i=0; i<A.size(); i++){
        sum2 = sum2 + A[i];
    }
    return sum1 - sum2;
}

int main()
{
    vector <int> b = {1, 3, 2, 5};


    cout << solution(b) << endl;
    return 0;
}
