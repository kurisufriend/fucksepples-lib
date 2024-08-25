#include "phile.h"
#include <ios>
#include <sys/stat.h>
#include <fstream>

bool ph::file_exists(std::string path)
{
    struct stat s;
    return !stat(path.c_str(), &s);
}

bool ph::folder_exists(std::string path)
{
    struct stat s;
    return (!stat(path.c_str(), &s) && (s.st_mode & S_IFDIR));
}

void ph::file_put_contents(std::string path, std::string content, bool append)
{
    std::fstream f;
    f.open(path, append ? std::ios_base::app : std::ios_base::out);
    f << content;
    f.close();
}