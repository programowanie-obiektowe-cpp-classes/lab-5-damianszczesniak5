#ifndef FOO_HPP
#define FOO_HPP

#include <list>
#include <string> // Zak³adamy, ¿e Human u¿ywa std::string do przechowywania danych
#include <vector>

class Human
{
public:
    void birthday(); // Zwiêksza pole age o 1
    bool isMonster(
        const std::string& animal) const; // Zwraca true, jeœli osoba nie lubi danego zwierzêcia
};

std::vector< char > foo(std::list< Human >& humans)
{
    std::vector< char > result;

    for (auto& human : humans) {
        human.birthday();
    }

    for (auto it = humans.rbegin(); it != humans.rend(); ++it) {
        if (it->isMonster("pies") && it->isMonster("kot")) {
            result.push_back('n');
        }
        else {
            result.push_back('y');
        }
    }

    return result;
}

#endif // FOO_HPP
