// :) Getter and Setter Method

#include <bits/stdc++.h>
using namespace std;

class Mack
{

    // All the Variable are Private

private:
    int Rank;
    int Turnover;

public:
    int marks;

    void setRank(int h) // setting a value
    {

        Rank = h;
    }

    void setTurnover(int k)// setting a value
    {

        Turnover = k;
    }

    int getRank() // getting a value
    {

        return Rank;
    }

    int getTurnover() // getting a value
    {

        return Turnover;
    }
};

int main()
{

    Mack mohit;

    mohit.setRank(9);
    mohit.setTurnover(3000000);

    mohit.marks = 100; // when  a constructor is not called so we introduce the value of a class like this

    cout << "The Rank scored by me in the contest is   : " << mohit.getRank() << endl;
    cout << "The Turnover of Flux Last year was   : " << mohit.getTurnover() << endl;

    cout << "The Marks scored by you is : " << mohit.marks;
}