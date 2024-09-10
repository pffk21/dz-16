#include <iostream>
#include "cat.h"
#include "dog.h"
#include "hamster.h"
#include "parrot.h"
using namespace std;

void Pet::SetPet(const char* o, double v, double w, const char* n,const char* s,const char* t)
{
 okras = new char[strlen(o) + 1];
 strcpy(okras, o);
 vozrast = v;
 wes = w;
 name = new char[strlen(n) + 1];
 strcpy(name, n);
 sound = new char[strlen(s) + 1];
 strcpy(sound, s);
 type = new char[strlen(t) + 1];
 strcpy(type, t);
}

void Pet::Print() const
{
 cout << "Value is undefined" << endl;
}
void Pet::Sound() const
{
 cout << "Value is undefined" << endl;
}
void Pet::Show() const
{
 cout << "Value is undefined" << endl;
}
void Pet::Type() const
{
 cout << "Value is undefined" << endl;
}
