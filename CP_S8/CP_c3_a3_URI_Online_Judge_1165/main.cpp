#include <iostream>
using namespace std;

int main()
{
  int N, X;

  cin >> N;

  for(int j=0; j<N; j++){

    bool isPrime = true;
    cin >> X;

    for(int i = 2; i <= X / 2; ++i)
    {
        if(X % i == 0)
        {
            isPrime = false;
            break;
        }
    }
    if (isPrime){
        cout << X << " eh primo" << endl;
    }
    else{
        cout << X << " nao eh primo" << endl;
    }
  }

  return 0;
}
