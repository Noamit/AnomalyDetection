/*
 * CLI.h
 * Authors: Noa Amit & Tomer Hadar 
 */
#ifndef CLI_H_
#define CLI_H_

#include <string.h>
#include "commands.h"

using namespace std;

class CLI {
    vector<Command*> c;
    DefaultIO* dio;
    clientDate* cd;
    // you can add data members
public:
    CLI(DefaultIO* dio);
    void start();
    virtual ~CLI();
};

#endif /* CLI_H_ */
