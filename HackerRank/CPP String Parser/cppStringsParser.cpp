#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
// Sample language to parse
// <tag-name attribute1-name = "value1" attribute2-name = "value2" ...>

int main() {
    bool DEBUG = true;
    int n, q; // n lines of "code" and q queries
    vector<string> lines;

    cin >> n >> q;

    for (int i = 0; i < n; i++)
    {
        string line;
        getline(cin,line);
        lines.push_back(line);
        if (DEBUG) { cout << line;}
    }
    

    
    
    if (DEBUG)
    {
        cout << "   DEVU: " << n<< " " <<q;
    }

    return 0;
}
