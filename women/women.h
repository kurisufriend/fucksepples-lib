// or, the study of random signals & noise
// facebook-tier, i know. fyad.

#pragma once
#include <vector>
#include <any>
#include <cstdlib>


#define randint(min, max) (min + rand() % (max+1))

template <typename T>
T choice_vector(std::vector<T> v)
{
    return v.at(randint(0, v.size()-1));
}