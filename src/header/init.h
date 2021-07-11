#ifndef INIT_H
#define INIT_H
#include <string>
#include <iostream>
#include <unistd.h>
#include <cstring>

#include "logger.h"

struct InitArguments {
    bool VERBOSE_MODE = false;
    
    /*char output_filename[255];
    char input_filename[255];
    char target_host[255];*/

    std::string output_filename;
    std::string input_filename;
    std::string target_host;
    unsigned long port = 161;
};

class InitProgram {
    //Logger logger();
    [[no_unique_address]] InitArguments ProgramArguments;
    InitArguments GetArguments(int argc, char* argv[]);
    void HelpMenu() const noexcept;
public:
    InitProgram(int argc, char* argv[]);
};

#endif // INIT_H