#include <iostream>
#include <cstring>
#include <algorithm> 
using namespace std;

void reverseWords(char* str) {
    int n = strlen(str);
    
    reverse(str, str + n);

    int start = 0;
    for (int end = 0; end <= n; ++end) {
        if (str[end] == ' ' || str[end] == '\0') {
            reverse(str + start, str + end);
            start = end + 1;
        }
    }
}

int main() {
    char str[] = "I live in Palestine";
    
    std::cout << "the original text is :   " << str << endl;
    
    reverseWords(str);
    
    std::cout << "the Reversed string :   " << str << endl;
    
    return 0;
}