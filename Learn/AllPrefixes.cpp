#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Function to generate all prefixes
vector<string> allPrefixes(const string& s) {
    vector<string> prefixes;
    for (size_t i = 0; i <= s.length(); ++i) {
        prefixes.push_back(s.substr(0, i)); // Add prefix of length i
    }
    return prefixes;
}

int main() {
    string s = "(()())";
    vector<string> prefixes = allPrefixes(s);

    cout << "Prefixes of the string \"" << s << "\":" << endl;
    for (const string& prefix : prefixes) {
        cout << "\"" << prefix << "\"" << endl;
    }

    // Count of prefixes
    cout << "Total number of prefixes: " << prefixes.size() << endl;
    return 0;
}
