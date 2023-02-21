//
// Created by chris on 2/18/2023.
//

#ifndef P1_TESTSCANNER_H
#define P1_TESTSCANNER_H

#include "scanner.h"
#include "token.h"
#include <fstream>
#include <iostream>
using namespace std;

void testScanner(fstream &file);
void printTokenInfo(Token);

#endif //P1_TESTSCANNER_H
