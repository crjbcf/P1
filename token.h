//
// Created by chris on 2/18/2023.
//

#ifndef P1_TOKEN_H
#define P1_TOKEN_H

#include <iostream>
using namespace std;

enum TokenID {T1_tk, T2_token,  T3_token, EOF_token, ERR_token};


struct Token
{
    TokenID tokenID;
    string tokenInstance;
    int lineNumber= 0;
};

#endif //P1_TOKEN_H
