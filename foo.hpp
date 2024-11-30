#ifndef FOO_HPP
#define FOO_HPP

#include "Human.hpp"
#include <list>
#include <vector>

std::vector< char > foo(std::list< Human >& humans)
{
    std::vector< char > result;

    for (auto& human : humans) {
        human.birthday();
    }

    for (auto it = humans.rbegin(); it != humans.rend(); ++it) {
        result.push_back(it->isMonster() ? 'n' : 'y');
    }

    return result;
}

#endif // FOO_HPP
