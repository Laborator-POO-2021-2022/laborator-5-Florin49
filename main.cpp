#include "Student.hpp"
#include <fstream>
#include <cstdlib>
int main()
{
    Student *S=new Student[11];
    ifstream F("Studenti.txt");
    for(int i=0;i<11;i++)
        F>>S[i];

    cout<<"Datele pentru fiecare student:\n\n";
    for(int i=0;i<11;i++)
       cout<<S[i]<<endl;


    Student St;
    cout<<endl;
    for(int i=0;i<10;i++)
        for(int j=i+1;j<11;j++)
            if(S[i].getMedie()>S[j].getMedie())
                {
                    St=S[i];
                    S[i]=S[j];
                    S[j]=St;
                }
    cout<<"\n\nDatele pentru fiecare student dupa ordonarea in functie de medie:\n\n";
    for(int i=0;i<11;i++)
       cout<<S[i]<<endl;


    char nume_dirig_nou[40];
    cout<<"Cititi numele noului diriginte (fara spatiu intre nume si prenume si intre prenume) si modificati pentru fiecare student numele vechi in acesta: "<<endl;
    cin>>nume_dirig_nou;
    for(int i=0;i<11;i++)
        Dirig_nou(S[i],nume_dirig_nou);
    cout<<"Datele pentru fiecare student actualizate dupa schimbarea dirigintelui:\n\n"; 
    for(int i=0;i<11;i++)
       cout<<S[i]<<endl;
    Student *V=new Student[12];
    for(int i=0;i<11;i++)
        {
            V[i]=S[i];
            Update_Nr(V[i],1);
        }
    int X;
    cout<<"Pozitia pe care se adauga noul elevul: ";
    cin>>X;
    int note[3]={8,8,8};
    Student Z(note,3,nume_dirig_nou,"4236BN",12,"IlaoiTania");
    
    for(int i=11;i>=X+1;i--)
        V[i]=V[i-1];
    V[X]=Z; 
    cout<<"\n\nDatele pentru fiecare student in urma venirii noului student: \n\n";  
    for(int i=0;i<12;i++)
       cout<<V[i]<<endl;
    return 76;
}