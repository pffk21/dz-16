#include <iostream>
#include "hamster.h"

using namespace std;

void Hamster::Print() const
{
 cout << "Pet: Hamster\nType okras: " << okras << "\nVozrast: " << vozrast << "\nWes: " << wes << "\nName: " << name << endl;
}

void Hamster::Sound() const
{
    cout<<"Sound: "<<sound<<endl;
}
void Hamster::Show() const
{
    cout<<"Name: "<<name<<endl;
}
void Hamster::Type() const
{
    cout<<"Type: "<<type<<endl;
}

