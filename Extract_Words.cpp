#include <iostream>
#include <string>
using namespace std;

string extractWords(const string& sentence, int start, int end) {
    // Base case: if the start index is greater than the end index, return an empty string
    if (start > end || start < 0 || end >= sentence.length()) {
        return "";
    }

    // Find the position of the first space after the start index
    int spaceIndex = sentence.find(' ', start);

    // If there's no space after the start index or the space index is beyond the end index,
    // then the remaining part of the sentence contains the required words
    if (spaceIndex == string::npos || spaceIndex > end) {
        return sentence.substr(start, end - start + 1);
    }

    // Recursively call the function to extract words from the remaining part of the sentence
    return extractWords(sentence, spaceIndex + 1, end);
}

int main() {
    string sentence = "This is a sample sentence for testing";
    int start = 5; // index of the word "is"
    int end = 18; // index of the word "sentence"

    string result = extractWords(sentence, start, end);
    cout << "Result: " << result << endl;
    return 0;
}

