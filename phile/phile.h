#pragma once 
#include <string>

namespace ph 
{
    bool file_exists(std::string path);
    bool folder_exists(std::string path);
    void file_put_contents(std::string path, std::string content, bool append = false);
}