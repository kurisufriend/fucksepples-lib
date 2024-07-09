#pragma once
#include <string>
#include <vector>
#include <map>
#include <iostream>
#include <sstream>

#define foreach(a, b) for (auto b = a.begin(); b != a.end(); b++)
#define dfmt dumbfmt 

std::string dumbfmt(std::vector<std::string> o, std::string delimiter = "");
std::string dumbfmt_replace(std::string needle, std::string gold, std::string &haystack);
std::string dumbfmt_file(std::string path, std::map<std::string, std::string> dict, bool cach=true);
std::string dumbfmt_html_escape(std::string o);
std::vector<std::string> dumbfmt_split(std::string &input, char delimiter);
std::string dumbfmt_collapse_whitespace(std::string input);
std::string dumbfmt_before(std::string haystack, char delimiter);
std::vector<std::string> dumbfmt_sandwich(std::vector<std::string> v, std::string before, std::string after);

template <typename T>
void dumbfmt_pprint(T iterable)
{
    std::cout << "[";
    foreach(iterable, i)
    {
        std::stringstream ss;
        ss << *i;
        std::cout << ss.str();
        if (i+1 != iterable.end())
            std::cout << ", ";
    }
    std::cout << "]" << std::endl;
}