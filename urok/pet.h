#pragma once
class Pet
{
protected:
 char* okras;
 double vozrast;
 double wes;
 char* name;
 char* sound;
 char* type;
public:
 void SetPet(const char* o, double v, double w, const char* n,const char* s,const char* t);
 virtual void Print() const;
 virtual void Sound() const;
 virtual void Show() const;
 virtual void Type() const;
};

