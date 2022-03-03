#include <iostream>

using namespace std;


// function to print the divisors
void printDivisors(int n)
{
    int arrD[30];
    int j = 0;
    for (int i=1;i<=n;i++)
        if (n%i==0){
            arrD[j] = i;
            j++;
            cout << i << " ";
        }
        cout << endl << j << endl;
}

/* Driver program to test above function */
int main()
{
    cout << "The divisors of 100 are: \n";
    printDivisors(100);
    return 0;
}
