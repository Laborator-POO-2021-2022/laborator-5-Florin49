#include "Clasa.hpp"

Clasa::Clasa():nr_elevi(-1)
{

}
Clasa::Clasa(int n):nr_elevi(n)
{

}
Clasa::Clasa(const Clasa &C)
{
    nr_elevi=C.nr_elevi;
}
ostream& operator<<(ostream& on, const Clasa& C)
{
    on<<"Clasa are "<<C.nr_elevi<<" elevi";
    return on;
}
istream& operator>>(istream& in,Clasa& C)
{
    in>>C.nr_elevi;
    return in;
}
int Clasa::get_NrElevi()
{
    return nr_elevi;
}
Clasa& Clasa::operator=(const Clasa& C)
{
    this->nr_elevi=C.nr_elevi;
    return *this;
}
void Update_Nr(Clasa& C, int n)
{
    C.nr_elevi+=n;
}