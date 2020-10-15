#include<iostream>
#include<cstdlib>



using namespace std;

int main()
{

    int a, b;

    cin>>a>>b;

    if(a==0 && b==0)
        cout<<"NO";

    else
    {
        if(abs(a-b)==1 || a==b)
            cout<<"YES";
        else
            cout<<"NO";
    }

    return 0;

}
