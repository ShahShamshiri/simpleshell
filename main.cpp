#include <sstream>
#include<vector>
#include <string>
#include <iostream>
using namespace std;

vector<string> split(const string& line) {
    istringstream iss(line);
    vector<string> tokens;
    string token;

    while (iss >> token) {
        tokens.push_back(token);
    }
    return tokens;
}


int main() {

    while(true) {
        cout << "$ ";
        cout.flush();

        string line;
        if (!getline(cin, line)) {
            break;
        }
        auto args = split(line);

        if (args.empty()) {
            continue;
        }
        cout << "Tokens: " << endl;
        for (auto arg : args) {
            cout << arg << "." << endl;
        }

    }


    return 0;
}
