#include <iostream>
#include<vector>
#include <cstdlib>

using namespace std;

int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    int arr1[A.size()] = {0}, arr2[A.size()] = {0};
    int n = A.size(), temp=0, r=10000000;

    //vector <int> :: iterator itF, itB;

    //itF = A.begin();
    //itB = A.end();

    arr1[0] = A.front();
    //cout << "arr1[0] =" << arr1[0] << endl;

    arr2[n-1] = A.back();
    //cout << "arr2[4]" << arr2[n-1] << endl;

    for(int i = 1, j=n-2; i < n; i++, j--){
        arr1[i] = A[i] + arr1[i-1];
        //cout << "arr1[" << i << "]=" << arr1[i] << endl;
        arr2[j] = A[j] + arr2[j+1];
        //cout << "arr2[" << j << "]=" << arr2[j] << endl;
    }


    for(int i = 1; i <= n; i++){
        temp = abs(arr1[i-1] - arr2[i]);
        //cout << "check :"  <<temp << endl;
        if(temp < r){
            r = temp;
        }
    }

    return r;
}


int main()
{
    //int N = 5;
    vector <int> A;
    /*int A[N];
    A[0] = 8;
    A[1] = 1;
    A[2] = 2;
    A[3] = 1;
    A[4] = 3;
    A[5] = 1;
    */


    A.push_back(3);
    A.push_back(1);
    A.push_back(2);
    A.push_back(4);
    A.push_back(3);


    cout << "output :" <<  solution(A);


    return 0;
}















