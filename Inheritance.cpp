// here we are going to learn about the inheritance

#include <bits/stdc++.h>
using namespace std;

class car
{

public:
    string color;
    int weight;

public:
    void run()
    {

        cout << "The Speed of your car is great";
    }

    void loose()
    {

        cout << "Your Car is too Loose";
    }

    //  Note we cannot make constructor in Muti-Inheritance :)
};

class mahindra : public car
{

    int rating;

public:
    void intro()
    {

        cout << "This is Mahindra";
    }
};

class scorpio : public mahindra
{
};

int main()
{

    mahindra(*legacy) = new mahindra;
    scorpio(*mycar) = new scorpio;

    (*legacy).color = "red";

    cout << "The color of Mahindra is :" << (*legacy).color;

    cout << endl;

    (*mycar).loose();

    cout << endl;

    (*mycar).intro();

    cout << endl;
}
