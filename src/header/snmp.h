#ifndef SNMP_H
#define SNMP_H

#include <iostream>
#include <string>
#include "init.h"

class SNMP {
    enum SNMP_ERRORS{
    NO_ERROR, // 0
    TOO_BIG,  // 1
    NO_SUCH_NAME, // 2
    BAD_VALUE, // 3
    READ_ONLY, // 4
    GENERIC_ERROR, // 5
    NO_ACCESS, // 6
    WRONG_TYPE, // 7
    WRONG_LENGTH, // 8
    WRONG_ENCODING, // 9
    WRONG_VALUE, // 10
    NO_CREATION, // 11
    INCONSISTENT_VALUE, // 12
    RESOURCES_UNAVAILABLE, // 13
    COMMIT_FAILED, // 14
    UNDO_FAILED, // 15
    AUTHORIZATION_ERROR, // 16
    NOT_WRITABLE, // 17
    INCONSISTENT_NAME // 18
};
}


#endif