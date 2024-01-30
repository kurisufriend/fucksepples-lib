#pragma once


#define DATA_LOC "lib/asnbadboyz/data-raw-table"

#include "../dumbstr/dumbstr.h"


#include <cstdint>
#include <iostream>
#include <map>
#include <any>
#include <stdexcept>
#include <string>
#include <vector>
#include <fstream>
#include <string>


namespace abb 
{
    struct ipv4
    {
        uint8_t d, c, b, a;
    };

    struct range
    {
        ipv4 ip;
        uint8_t block;

        int asn;
    };

    void prip(ipv4 &gay);
    std::vector<range> load_data();
    int lookup(std::vector<range> &read, ipv4 myip);
}
