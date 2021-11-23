#include <iostream>
#include <cstring>
using namespace std;

class Nota
{
protected:
     int *note;
     int nr_note;
public:
    Nota();
    Nota(int*,int);
    ~Nota();
    Nota(const Nota&);
    Nota& operator=(const Nota&);
    friend ostream& operator<<(ostream&, const Nota&);
    friend istream& operator>>(istream&, Nota&);
    float getMedie();
};
