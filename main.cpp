#include <bits/stdc++.h>

using namespace std;

/*
 *
 */

string pangrams(string str) {

    set<char> alphabeta;
    string pg;

    for_each(str.begin(), str.end(), [](char c){
        c = tolower(c); } );

    for (auto itr = str.begin(); itr != str.end(); ++itr){
        if(isalpha(*itr)){
            alphabeta.insert(*itr);
        }
    }

    if (alphabeta.size() == 26){
        pg = "a pangram";
    }
    else {
        pg = "not a pangram";
    }

    return pg;
}

int main()
{
    int checkCont = 1;
    do{
        string userStr = "";
        cout << "\n Enter a sentence to see if it's a pangram" << endl << " \t";
        getline(cin, userStr);

        string result = pangrams(userStr);

        cout << "\n Your sentence is " << result << endl << endl;

        cout << " Continue?" << endl << endl << " 1. Yes" << endl << " 0. Exit Program" << endl;
        cin >> checkCont;
        cin.ignore(); // clear whitespace so the next getline() call works

    } while(checkCont == 1);

    return 0;
}
