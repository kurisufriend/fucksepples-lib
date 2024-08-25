//the internet turns things (women) easier (into tismwhores)
// LOL FUCK YOU IM HILARIOUS KILL YOURSELF
#pragma once

#ifndef foreach
#define foreach(a, b) for (auto b = a.begin(); b != a.end(); b++)
#endif

#include <vector>
#define ezin(needle, haystack) (std::find(haystack.begin(), haystack.end(), needle) != haystack.end())

#include <string>
inline int sstoi(std::string i, int defaul = -1337)
{
    try
    {
        return std::stoi(i);
    }
    catch (...)
    {
        return defaul;
    }
}