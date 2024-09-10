//
//  main.cpp
//  urok
//
//  Created by paul blazhko on 10.09.2024.
//

#include "pet.h"
#include "cat.h"
#include "dog.h"
#include "hamster.h"
#include "parrot.h"
#include <iostream>
using namespace std;

int main()
{
    Pet* pets[4];
    pets[0] = new Cat();
    pets[0]->SetPet("black", 10, 14.3, "тузик","Meow","abyssinian");
    pets[1] = new Dog();
    pets[1]->SetPet("brown", 3, 22.2, "шарик","Gaw","Shepherd dogs");
    pets[2] = new Hamster();
    pets[2]->SetPet("ginger", 1, 0.5, "бобик","Piii-piii","Djungarian hamster");
    pets[3] = new Parrot();
    pets[3]->SetPet("green", 3, 0.8, "зеленый","Piii-piii","Ara");
    for (int i = 0; i < 4; i++)
    {
        pets[i]->Print();
        pets[i]->Sound();
        pets[i]->Show();
        pets[i]->Type();
        cout << endl;
    }
    for (int i = 0; i < 4; i++)
    {
        delete pets[i];
    }
}
   

