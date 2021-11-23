#include "Diriginte.hpp"

Diriginte::Diriginte():nume(NULL),grupa("")
{

}
Diriginte::Diriginte(const char* Num,const char* Gr)
{
    this->nume=new char[strlen(Num)+1];
    strcpy(this->nume,Num);
    strcpy(this->grupa,Gr);
}
Diriginte::Diriginte(const Diriginte& D)
{
    strcpy(this->grupa,D.grupa);
    if(this->nume!=NULL)
         delete[] this->nume;
    this->nume=new char[strlen(D.nume)+1];
    strcpy(nume,D.nume);
}
Diriginte::~Diriginte()
{
    delete[] nume;
}
ostream& operator<<(ostream& oUt, const Diriginte& Dir)
{
    oUt<<"Numele dirigintelui este: "<<Dir.nume<<endl;
    oUt<<"Acesta face parte din grupa: "<<Dir.grupa<<endl;
    return oUt;
}
istream& operator>>(istream& iN,Diriginte& Dir)
{
    char buff[40];
    iN>>buff;
    if(Dir.nume!=NULL)
         delete[] Dir.nume;
    Dir.nume=new char[strlen(buff)+1];
    strcpy(Dir.nume,buff);
    iN>>Dir.grupa;

    return iN;
}
void Dirig_nou(Diriginte& D,const char* nn)
{
    if(D.nume!=NULL)
       delete[] D.nume;
    D.nume=new char[strlen(nn)+1];
    strcpy(D.nume,nn);
}
Diriginte& Diriginte::operator=(const Diriginte& D)
{
    if(this!=&D)
    {
        if(this->nume!=NULL)
            delete[] this->nume;
        if(D.nume==NULL)
             this->nume=NULL;
        else
        {
            this->nume=new char[strlen(D.nume)+1];
            strcpy(this->nume,D.nume);
        }
        strcpy(this->grupa,D.grupa);
    }
    return *this;
}
