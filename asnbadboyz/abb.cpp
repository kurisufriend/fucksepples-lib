#include "abb.h"

void abb::prip(abb::ipv4 &gay)
{
    std::cout << "IPv4: " << (int)gay.a << "." << (int)gay.b << "." << (int)gay.c << "." << (int)gay.d << std::endl;
}

std::vector<abb::range> abb::load_data()
{

    std::fstream f;
    f.open(DATA_LOC);
    
    std::string cur = "";
    std::vector<abb::range> read;
    while (std::getline(f, cur))
    {
        if (cur == "")
        {
            break;
        }
        abb::range war; // memorial gymnasium, in permanent construction
        cur = dumbfmt_collapse_whitespace(cur);
        cur = dumbfmt_replace("/", ".", cur);
        cur = dumbfmt_replace("	", ".", cur);
        std::vector<std::string> split = dumbfmt_split(cur, '.');
        war.ip.a = std::stoi(split.at(0));
        war.ip.b = std::stoi(split.at(1));
        war.ip.c = std::stoi(split.at(2));
        war.ip.d = std::stoi(split.at(3));
        war.block = std::stoi(split.at(4));
        try 
        {
            war.asn = std::stoi(split.at(5));
        } 
        catch (std::out_of_range& e) 
        {
            continue;
        }
        read.push_back(war);
    }
    f.close();
    return read;
}

int abb::lookup(std::vector<abb::range> &read, abb::ipv4 myip)
{
    foreach(read, ite)
    {
        uint32_t victim = *((uint32_t*)&(myip));
        uint32_t champion = *((uint32_t*)&((*ite).ip));
        uint32_t mask = ~(~(uint32_t(0))  >> (*ite).block);
        uint32_t amatchmadeinheaven = victim & mask;
        uint32_t amatchyoureinhell = champion & mask;
        abb::ipv4 makeschickslook20percentnicer = *((abb::ipv4*)(&mask));
        abb::ipv4 muzzled = *((abb::ipv4*)(&(amatchmadeinheaven)));
        abb::ipv4 understanding = *((abb::ipv4*)(&(amatchyoureinhell)));

        if (amatchmadeinheaven == amatchyoureinhell)
        {
            return (int)((*ite).asn);
        }
    }
    return -1337;
}