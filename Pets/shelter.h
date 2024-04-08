#include "pet.h"

class Shelter {
private:
    Pet** pets;
    int num_of_pets{};

public:
    explicit Shelter(Pet **pets, int num_of_pets);

    void increment_age_by_one() {
        for (int i = 0; i < num_of_pets; ++i) {
            pets[i]->increment_age_by_one();
        }
    }

    void print_pets() {
        for (int i = 0; i < num_of_pets; ++i) {
            std::cout << pets[i]->as_string() << std::endl;
        }
    }

    virtual ~Shelter();


};
