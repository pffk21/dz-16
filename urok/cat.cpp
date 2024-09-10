#include <iostream>
#include "cat.h"

using namespace std;

void Cat::Print() const
{
 cout << "Pet: Cat\nType okras: " << okras << "\nVozrast: " << vozrast << "\nWes: " << wes << "\nName: " << name <<endl;
}
void Cat::Sound() const
{
    cout<<"Sound: "<<sound<<endl;
}
void Cat::Show() const
{
    cout<<"Name: "<<name<<endl;
}
void Cat::Type() const
{
    cout<<"Type: "<<type<<endl;
}
