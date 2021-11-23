#include "Diriginte.hpp"
#include "Clasa.hpp"
#include "Nota.hpp"


class Student: public Nota, public Diriginte, public Clasa
{
    char *nume;
public:
    Student();
    Student(int*, int, const char*, const char*, int, const char*);
    Student(const Student&);
    Student& operator=(const Student&);
    friend void Switch(Student&, Student&);
    friend ostream& operator<<(ostream&, const Student&);
    friend istream& operator>>(istream&, Student&);
};