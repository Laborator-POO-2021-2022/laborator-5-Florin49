


#include <iostream>
#include <cstring>
using namespace std;

class Diriginte
{
protected:
   char *nume;
   char grupa[7];

public:
   Diriginte();
   Diriginte(const char*,const char*);
   Diriginte(const Diriginte&);
   ~Diriginte();
   Diriginte& operator=(const Diriginte&);
   friend ostream& operator<<(ostream&, const Diriginte&);
   friend istream& operator>>(istream&, Diriginte&);
   friend void Dirig_nou(Diriginte&, const char*);
};