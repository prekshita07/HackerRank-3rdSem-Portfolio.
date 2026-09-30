#include <bits/stdc++.h>
using namespace std;

vector<int> matchingStrings(vector<string> stringList, vector<string> queries) {
    unordered_map<string, int> frequency;

    for (string s : stringList) {
        frequency[s]++;
    }

    vector<int> result;

    for (string q : queries) {
        result.push_back(frequency[q]);
    }

    return result;
}
