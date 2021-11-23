#include <iostream>
#include <cstring>
using namespace std;

class Clasa
{
protected:
    int nr_elevi;
public:
    Clasa();
    Clasa(int);
    Clasa(const Clasa&);
    Clasa& operator=(const Clasa&);
    friend ostream& operator<<(ostream&, const Clasa&);
    friend istream& operator>>(istream&, Clasa&);
    int get_NrElevi();
    friend void Update_Nr(Clasa&, const int);
};

