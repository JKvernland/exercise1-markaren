
#include <vector>
#include "Include/Greet.h"

using namespace exercise1;


std::vector<Person> createPersons() {

    std::vector<Person> persons{
            {"Michael",  "Santa"},
            {"Franklin",  "Clinton"},
            {"Trevor", "Phillips"}
    };

    return persons;
}
int main() {

    auto persons = createPersons();

    for (const auto& p : persons) {
        greet(p);
    }

}