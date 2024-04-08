#pragma once

#include <iostream>

#define PRINT(x) std::cout<< x << std::endl

class Pet {
protected:
    std::string name;
    int age{};

public:
    void increment_age_by_one() {
        age++;
    }

    Pet() : name({}), age(0) {};

    virtual ~Pet() {}

    Pet(const std::string &name, int age) : name(name), age(age) {};

    virtual void play(const std::string &) = 0;

    virtual const std::string as_string() {
        return "{name:" + name + ", age:" + std::to_string(age) + "}";
    };
};