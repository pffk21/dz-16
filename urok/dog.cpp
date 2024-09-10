#include <iostream>
#include "dog.h"

using namespace std;

void Dog::Print() const
{
 cout << "Pet: Dog\nType okras: " << okras << "\nVozrast: " << vozrast << "\nWes: " << wes << "\nName: " << name << endl;
}

void Dog::Sound() const
{
    cout<<"Sound: "<<sound<<endl;
}
void Dog::Show() const
{
    cout<<"Name: "<<name<<endl;
}
void Dog::Type() const
{
    cout<<"Type: "<<type<<endl;
}
