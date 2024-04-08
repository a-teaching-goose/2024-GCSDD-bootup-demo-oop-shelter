#include <iostream>
#include <vector>
#include "Pets/dog.h"
#include "Pets/cat.h"
#include "Pets/shelter.h"

int main() {
    const int number_of_pets = 10;
    Pet **pets = new Pet *[number_of_pets];

    for (int i = 0; i < number_of_pets; ++i) {
        std::string id = std::to_string(i);
        if (i%3==0) {
            pets[i] = new Cat("cat" + id, i + 1, "toy" + id);
        } else {
            pets[i] = new Dog("dog" + id, i + 2, "owner" + id);
        }
    }

    Shelter shelter(pets, number_of_pets);

    shelter.print_pets();

    shelter.increment_age_by_one();

    shelter.print_pets();

}
