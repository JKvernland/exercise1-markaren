//
// Created by jonat on 31/08/2023.
//

#ifndef EXERCISE1_PERSON_H
#define EXERCISE1_PERSON_H

#include <string>

namespace exercise1 {

    class Person {
    private:
        std::string firstName_;
        std::string lastName_;

    public:
        Person(const std::string &firstName, const std::string &lastName)
                : firstName_(firstName), lastName_(lastName) {}

        std::string getFirstName() const {
            return firstName_;
        }

        std::string getLastName() const {
            return lastName_;
        }

        std::string getFullName() const {
            return firstName_ + " " + lastName_;
        }

    };

}


#endif //EXERCISE1_PERSON_H
