#ifndef LOGGER_H
#define LOGGER_H

#include <string>

template<typename T>
class Logger {
public:
    Logger(); //Logger functions by default creates a file (name == current time) in logs directory
    
    //This constructor takes one argument, just the path to create the log file.
    Logger(T& PathToFile);

    //This constructor takes two arguments, PathToLogFile to create, and LogAllActions, LogAllActions will 
    //If LogAllActions is enabled we're logging every action to the console.
    Logger(T& PathToLogFile, bool LogAllActions);
    
    //The 2 following functions should usually deal with registers as args so i'm implementing the function as
    //a __fastcall
    bool PrintActionToConsole(std::string& action, std::string& logMessage) const noexcept __attribute__((fastcall));
    bool PrintMessageToConsole(std::string& message) const noexcept __attribute__((fastcall));
    bool LogAllActions = false;
    
};

#endif