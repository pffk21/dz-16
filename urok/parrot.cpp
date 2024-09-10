#include <iostream>
#include "parrot.h"

using namespace std;

void Parrot::Print() const
{
 cout << "Pet: Parrot\nType okras: " << okras << "\nVozrast: " << vozrast << "\nWes: " << wes << "\nName: " << name << endl;
}

void Parrot::Sound() const
{
    cout<<"Sound: "<<sound<<endl;
}
void Parrot::Show() const
{
    cout<<"Name: "<<name<<endl;
}
void Parrot::Type() const
{
    cout<<"Type: "<<type<<endl;
}
