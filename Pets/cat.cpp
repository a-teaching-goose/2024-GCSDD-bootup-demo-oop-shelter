#include <vector>
#include "cat.h"

void Cat::play(const std::string &words) {
    PRINT("cat(" + name + ", " + std::to_string(age) + ") is zipping around after eating catnip");
}

Cat::Cat(const std::string &name, int age, const std::string &favorite_toy) : Pet(name, age) {
    this->favorite_toy = favorite_toy;
}

const std::string Cat::as_string() {
    return "cat{name:" + name + ", age:" + std::to_string(age) + "}";
}

std::vector<Cat> Cat::operator*(int num_of_copies) {
    std::vector<Cat> copy_cats;
    copy_cats.reserve(num_of_copies);
    for (int i = 0; i < num_of_copies; ++i) {
        copy_cats.push_back(Cat(name, age, favorite_toy));
    }
    return copy_cats;
}