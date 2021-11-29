#include <iostream>
#include <vector>
#include "ch06ex04.h"

using namespace ch06ex04;
using namespace std;

int main()
{
    //  Declare vector.
    vector<Name_value> data;
    //  Get inputs.
    GetInput(data);
    //  Print vectors.
    PrintVectors(data);
    return 0;
}

void ch06ex04::GetInput(vector<Name_value> &data)
{
    string name;
    int score;
    cin >> name >> score;
    //  Terminating condition.
    if (name == "NoName" && score == 0)
        return;
    //  Check for duplicate name.
    for (const Name_value& nV : data)
        if (nV.name == name) {
            PrintLn("Error: " + nV.name + " has already been entered");
            return;
        }
    //  Add to vectors.
    data.push_back(*new Name_value(name, score));
    //  Recurse.
    GetInput(data);
}

void ch06ex04::PrintLn(const string &s)
{
    cout << s << endl;
}

void ch06ex04::PrintVectors(vector<Name_value> &data)
{
    for (Name_value &i : data)
    {
        PrintLn("" + i.name + " " + to_string(i.score) + ",");
    }
}

ch06ex04::Name_value::Name_value(const string &name, const int score) : score(score), name(name) {
    this->name = name;
    this->score = score;
}
