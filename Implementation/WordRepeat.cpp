#include <bits/stdc++.h>
using namespace std;

string findFirstRepeated(string s)
{
    istringstream iss(s);
    string token;

    unordered_map<string, int> setOfWords;

    while (getline(iss, token, ' ')) {
        if (setOfWords.find(token) != setOfWords.end())
            setOfWords[token] += 1;
        else
            setOfWords.insert(make_pair(token, 1));
    }

    istringstream iss2(s);
    while (getline(iss2, token, ' ')) {
        int count = setOfWords[token];
        if (count > 1) {
            return token;
        }
    }

    return "NoRepetition";
}

// driver program
int main()
{
    string s;
    getline(cin,s);
    string firstWord = findFirstRepeated(s);
    if (firstWord != "NoRepetition")
        cout << "First repeated word :: "
             << firstWord << endl;
    else
        cout << "No Repetitionn";
    return 0;
}
