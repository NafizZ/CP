#include<iostream>
#include<set>
#include<stack>


using namespace std;

int main()
{
    set <int> mySet;
    set <int> :: iterator its;

    mySet.insert(21);
    mySet.insert(20);
    mySet.insert(25);
    mySet.insert(24);
    mySet.insert(25);

    its= mySet.find(5);

    cout << *its << endl;


    its = mySet.find(24);

    mySet.erase(its, mySet.end());



    for(its = mySet.begin(); its != mySet.end(); its++){
        cout << *its;
    }


    mySet.erase(mySet.begin(), mySet.end());

    for(its = mySet.begin(); its != mySet.end(); its++){
        cout << *its;
    }

    cout << endl << endl << endl;

    stack <int> myStack;
    myStack.push(4);
    myStack.push(3);
    myStack.push(5);
    myStack.push(1);
    myStack.push(3);

    int t = myStack.top();
    cout << t << endl;


    return 0;
}
