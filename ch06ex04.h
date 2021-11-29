/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Alex Fowler
 */

#ifndef FOWLER_COP3330_CH06_EX04_CH06EX04_H
#define FOWLER_COP3330_CH06_EX04_CH06EX04_H

using namespace std;

namespace ch06ex04
{
    class Name_value
    {
    public: Name_value(const string& name, int score);
    public: string name;
    public: int score;
    };
    void GetInput(vector<Name_value> &data);
    void PrintLn(const string &s);
    void PrintVectors(vector<Name_value> &data);
}

#endif //FOWLER_COP3330_CH06_EX04_CH06EX04_H
