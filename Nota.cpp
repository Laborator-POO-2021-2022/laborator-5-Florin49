#include "Nota.hpp"

Nota::Nota():note(NULL),nr_note(0)
{

}
Nota::Nota(int* notes,int no):nr_note(no)
{
    note=new int[no];
    for(int i=0;i<no;i++)
                this->note[i]=notes[i];
}
Nota::Nota(const Nota& N)
{
    nr_note=N.nr_note;
    if(note!=NULL)
       delete[] note;
    note=new int[N.nr_note];
    note=N.note; 
}
Nota::~Nota()
{
    delete[] note;
}
ostream& operator<<(ostream& O,const Nota& N)
{
    O<<endl<<"Nr notelor este: "<<N.nr_note<<endl;
    O<<"Acestea sunt: ";
    for(int i=0;i<N.nr_note;i++)
         O<<N.note[i]<<" ";
    O<<endl;
    return O;
}
istream& operator>>(istream& I,Nota& N)
{
    I>>N.nr_note;
    N.note=new int[N.nr_note];
    for(int i=0;i<N.nr_note;i++)
        I>>N.note[i];
    return I;
}
float Nota::getMedie()
{
    int s=0;
    float med;
    for(int i=0;i<nr_note;i++)
        s+=note[i];
    med=(float)s/nr_note;
    return med;
}
Nota& Nota::operator=(const Nota& N)
{
    if(this!=&N)
    {
        
        if(this->note!=NULL)
             delete[] this->note;
        if(N.note==NULL)
            this->note=NULL;
        else
           this->note=new int[N.nr_note];
           for(int i=0;i<N.nr_note;i++)
                this->note[i]=N.note[i];
           this->nr_note=N.nr_note;  
        
    }
    return *this;
}