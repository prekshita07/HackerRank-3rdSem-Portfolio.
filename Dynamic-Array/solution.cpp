#include <bits/stdc++.h>
using namespace std;

vector<int> dynamicArray(int n, vector<vector<int>> queries) {
    vector<vector<int>> seqList(n);
    vector<int> result;
    int lastAnswer = 0;

    for (auto query : queries) {
        int type = query[0];
        int x = query[1];
        int y = query[2];

        int index = (x ^ lastAnswer) % n;

        if (type == 1) {
            seqList[index].push_back(y);
        }
        else if (type == 2) {
            int pos = y % seqList[index].size();
            lastAnswer = seqList[index][pos];
            result.push_back(lastAnswer);
        }
    }

    return result;
}
