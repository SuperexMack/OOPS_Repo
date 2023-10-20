// constructor calling code

#include <bits/stdc++.h>
using namespace std;

class mohit
{

public:
    int rank;
    float cgpa;

    // calling a constructor
    mohit(int rank, float cgpa)
    {

        this->rank = rank;
        this->cgpa = cgpa;
    }

    void print()
    {

        cout << "your rank is : " << this->rank << endl;
        cout << "Your cgpa is  :" << this->cgpa;
    }
};

int main()
{

    // these are the options to print the values of the class and one more method is avilable and that is using get and set method

    mohit boss(1, 7.5);

    // first Method

    boss.print();

    cout << endl;

    // second Method

    cout << "Your Rank is : " << boss.rank << endl;
    cout << "Your CGPA is :" << boss.cgpa;

    return 0;
}
