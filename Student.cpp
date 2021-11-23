#include "Student.hpp"

Student::Student():Nota(),Diriginte(),Clasa(),nume(NULL)
{
    
}
Student::Student(int* Notes, int No, const char* Nume, const char* Grup, int nr_e, const char* num):Nota(Notes,No),Diriginte(Nume,Grup),Clasa(nr_e)
{
    this->nume=new char[strlen(num)+1];
    strcpy(this->nume,num);
}
Student::Student(const Student& S)
{
    (Clasa&)(*this)=(Clasa&)(S);
    (Diriginte&)(*this)=(Diriginte&)(S);
    (Nota&)(*this)=(Nota&)(S);
    if(nume!=NULL)
        delete[] nume;
    nume=new char[strlen(S.nume)+1];
    strcpy(nume,S.nume);
}
ostream& operator<<(ostream& OuT, const Student& S)
{
    OuT<<"Numele studentului este: "<<S.nume<<endl;
    OuT<<(const Clasa&)S;
    OuT<<(const Nota&)S;
    OuT<<(const Diriginte&)S;
    
    return OuT;
}
istream& operator>>(istream& IN, Student& S)
{
    IN>>(Clasa&)S;
    IN>>(Diriginte&)S;
    IN>>(Nota&)S;
    char buffer[30];
    IN>>buffer;
    if(S.nume!=NULL)
          delete[] S.nume;
    S.nume=new char[strlen(buffer)+1];
    strcpy(S.nume,buffer);
    
    return IN;
}
Student& Student::operator=(const Student& S)
{
    (Clasa&)(*this)=(Clasa&)S;
    (Nota&)(*this)=(Nota&)S;
    (Diriginte&)(*this)=(Diriginte&)S;
    if(this->nume !=NULL)
        delete[] this->nume;
    this->nume=new char[strlen(S.nume)+1];
    strcpy(this->nume,S.nume);
    return *this;
}
void Switch(Student& S1,Student& S2)
{
    Student S(S1);
    S1=S2;
    S2=S;
    
/*
    if(S1.nume !=NULL)
        delete[] S1.nume;
    S1.nume=new char[strlen(S2.nume)+1];
    strcpy(S1.nume,S2.nume);

    if(S2.nume !=NULL)
        delete[] S2.nume;
    S2.nume=new char[strlen(S.nume)+1];
    strcpy(S2.nume,S.nume);
*/
}

