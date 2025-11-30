#pragma once

#include "Human.hpp"

#include <algorithm>
#include <list>
#include <vector>

std::vector< char > foo(std::list< Human >& people)
{
    std::vector< char > retval;
    retval.reserve(people.size());

    std::for_each(people.begin(), people.end(), [](Human& h) { h.birthday(); });

    // Twoja implementacja tutaj

    return retval;
}
