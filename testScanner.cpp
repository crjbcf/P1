//
// Created by chris on 2/18/2023.
//

#include "testScanner.h"



void testScanner(fstream &file)
{

    int lookahead;
    int lineNum = 1;

    while ((lookahead = file.get()) != EOF)
    {
        file.unget();
        Token t = scanner(file, lineNum);

        if(t.tokenID!= ERR_token)
        {
            printTokenInfo(t);
        }
        else if (t.tokenID == EOF_token)
        {
            printTokenInfo(t);
            exit(0);
        }
        else
        {
            printTokenInfo(t);
        }

        if (lookahead == '\n')
            lineNum++;
    }
}

void printTokenInfo(Token token)
{
    string tokenNames[] = {"token_1", "token_2", "token_3", "EOF", "Scanner_Error"};
    for(int i = 0; i < 5; i++)
    {
        if (i == token.tokenID)
        {
            cout << tokenNames[i];
        }
    }
    if (token.tokenID == ERR_token)
    {
        cout << "\t\ttoken instance with error: " << token.tokenInstance << "\tline number: " << token.lineNumber << endl;
    }
    else if (token.tokenID != EOF_token)
        cout << "\t\t" << token.tokenInstance << "\t" << token.lineNumber << endl;
}