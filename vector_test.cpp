#include <iostream>
#include <string>
#include <sstream>
#include <vector>

using namespace std;

int main(void) {
    vector<vector<int>> mainVector{};
    string tempInput = "";
    int number = 0;
    int lines = 0;

    cout << "Enter the number of lines: ";
    cin >> lines;

    for (int i = 0; i <= lines; i++) {
        // temporary vector
        vector<int> tempVector{};
        // getting the entire inputted line from the user
        getline(cin, tempInput);

        // parsing the string into the integer
        stringstream ss(tempInput);

        // pushing the integer
        while (ss >> number)
            tempVector.push_back(number);
        
        mainVector.push_back(tempVector);
    }

    // displaying them back to verify they're successfully stored
    for (int i = 0; i <= lines; i++) {
        for (size_t j = 0, len = mainVector[i].size(); j < len; j++)
            cout << mainVector[i][j] << ' ';

        cout << endl;
    }

    return 0;
}
