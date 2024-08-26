#include "women.h"
#include <openssl/sha.h>
#include <openssl/evp.h>
#include <string>
#include <sstream>
#include <cstdlib>
#include <iostream>
#include <iomanip>

std::string b64enc(std::string in)
{
    char res[(4*in.length()+2)/3];
    EVP_EncodeBlock((unsigned char*)res, (const unsigned char*)in.c_str(), in.length());
    return std::string(res);
}


std::string sha256(std::string input)
{
    std::stringstream res;
    unsigned char hash[SHA256_DIGEST_LENGTH];
    SHA256((const unsigned char*)input.c_str(), input.size(), hash);
    for (int i = 0; i < SHA256_DIGEST_LENGTH; i++)
        res << std::hex << std::setfill('0') << std::setw(2) << (int)hash[i];

    return res.str();
}
