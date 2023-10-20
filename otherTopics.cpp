// A MAGIC :) (Address of the current keyword is same as "this" Keyword)

#include <bits/stdc++.h>
using namespace std;

class Mack
{

public:
    string name;
    int girlFriends;

    // calling a constructor(parameterized constructor)

    Mack(string naam, int Life)
    {

        this->name = naam;
        this->girlFriends = Life;
        cout << "Address of this :" << this << endl;
    }
};

int main()
{

    Mack mohit("MackWalker", 10);

    cout << "Address of mohit is :" << &mohit << endl;
    cout << "Your Name is :" << mohit.name << endl;
    cout << "Total Number of GirlFriend you have are : " << mohit.girlFriends << endl;

    // Now you will see that the address of "this" contain in the constructor is same as address of mohit(current keyword). so it proves that "this" is a pointer that always points to the current keyword here it is mohit


}