#include <iostream>
using namespace std;

bool isMatching(char* text, char* pattern) {
    if (*pattern == '\0' && *text == '\0')
        return true;

    if (*pattern == '\0')
        return false;

    // Duyệt qua các ký tự của text và pattern
    while (*text != '\0' && *pattern != '\0') {
        if (*pattern == '?') { // Kiểm tra ký tự '?'
            text++;
            pattern++;
        }
        else {
            if (*text == *pattern) { 
                text++;
                pattern++;
            }
            else { 
                return false;
            }
        }
    }

    return *text == '\0' && *pattern == '\0';
}
int main()
{
    cout << isMatching("a*", "abab") << endl;
}