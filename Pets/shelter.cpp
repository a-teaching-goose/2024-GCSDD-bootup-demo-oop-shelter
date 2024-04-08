#include "shelter.h"

Shelter::Shelter(Pet **pets, int number_of_pets) : pets(pets), num_of_pets(number_of_pets) {}

Shelter::~Shelter() {
    for (int i = 0; i < num_of_pets; ++i) {
        delete pets[i];
    }
    delete []pets;
}
