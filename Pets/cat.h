#include <iostream>
#include "pet.h"

class Cat : public Pet {
private:
    std::string favorite_toy;

public:

    Cat(const std::string &name, int age, const std::string &favorite_toy);

    Cat(const Cat &other_cat) : Cat(other_cat.name, other_cat.age, other_cat.favorite_toy) {}

    std::vector<Cat> operator*(int num);

    void play(const std::string &) override;

    const std::string as_string() override;
};