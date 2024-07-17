#include <fstream>
#include <istream>
#include <iterator>
#include <string>
#include "dumbstr.h"
#include <iostream>
#include <sstream>

std::string dumbfmt(std::vector<std::string> o, std::string delimiter)
{
    std::string base = "";
    for (auto iter = o.begin(); iter != o.end(); iter++)
    {
        base.append(*iter);
        if (!delimiter.empty() && iter + 1 != o.end())
            base.append(delimiter);
    }
    return base;
}

std::string dumbfmt_replace(std::string needle, std::string gold, std::string &haystack)
{
    int last_found = 0;
    while (haystack.find(needle, last_found) != std::string::npos)
    {
        last_found = haystack.find(needle, last_found);
        haystack.replace(last_found, needle.length(), gold);
    }
    return haystack;
}

std::string dumbfmt_file(std::string path, std::map<std::string, std::string> dict, bool cach)
{
    std::string body;
    static std::map <std::string, std::string> cache;
    if (cache.find(path) != cache.end() && cach)
        body = cache.at(path);
    else
    {
        std::fstream f;
        f.open(path);
        body = {(std::istreambuf_iterator<char>(f)), std::istreambuf_iterator<char>()};
        f.close();
        cache.emplace(path, body);
    }
    for (std::pair<std::string, std::string> p : dict)
        body = dumbfmt_replace(dumbfmt({"{{{", p.first,"}}}"}), p.second, body);
    return body;
}

std::string dumbfmt_html_escape(std::string o)
{
    std::string res = o;
    res = dumbfmt_replace("&", "&amp;", res);
    res = dumbfmt_replace(">", "&gt;", res);
    res = dumbfmt_replace("<", "&lt;", res);
    res = dumbfmt_replace("\"", "&quot;", res);
    res = dumbfmt_replace("\'", "&apos;", res);
    return res;
}

std::vector<std::string> dumbfmt_split(std::string &input, char delimiter)
{
    std::vector<std::string> res;
    std::string acc = "";
    
    foreach(input, c)
    {
        if (*c == delimiter)
        {
            res.push_back(acc);
            acc = "";
        }
        else 
        {
            acc.append(std::string(1, *c));
        }
    }
    res.push_back(acc);
    return res;
}

std::string dumbfmt_collapse_whitespace(std::string input)
{
    std::string acc = "";
    
    foreach(input, c)
    {
        if (*c == ' ' && acc.back() == ' ')
        {
            continue;
        }
        else 
        {
            acc.append(std::string(1, *c));
        }
    }
    return acc;
}

std::string dumbfmt_before(std::string &haystack, char delimiter)
{
    std::string acc = "";
    foreach(haystack, c)
    {
        if (*c == delimiter)
            break;
        acc.push_back(*c);
    }
    return acc;
}

std::string dumbfmt_after(std::string &haystack, char delimiter)
{
    std::string acc = "";
    bool hit = false;
    foreach(haystack, c)
    {
        if (*c == delimiter)
            hit = true;
        if (hit)
            acc.push_back(*c);
    }
    return acc;
}

std::vector<std::string> dumbfmt_sandwich(std::vector<std::string> v, std::string before, std::string after)
{
    std::vector<std::string> res;
    foreach(v, i)
    {
        res.push_back(dumbfmt({before, *i, after}));
    }
    return res;
}
