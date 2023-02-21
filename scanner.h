//
// Created by chris on 2/18/2023.
//

#ifndef P1_SCANNER_H
#define P1_SCANNER_H

#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include "token.h"
#include "testScanner.h"
using namespace std;


Token scanner(fstream &file, int);
int** buildFSATable();
int characterLookup(int);
Token checkTokens(int, string);


#endif //P1_SCANNER_H
