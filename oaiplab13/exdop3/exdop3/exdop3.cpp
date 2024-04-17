#include <iostream>
#include <string>

int main() {
    std::string sentence1, sentence2;
    std::getline(std::cin, sentence1);
    std::getline(std::cin, sentence2);

    std::string words;

    std::string word;
    for (size_t i = 0; i < sentence2.length(); ++i) {
        if (sentence2[i] == ' ') {
            if (words.find(word) == std::string::npos) {
                words += word + " ";
            }
            word.clear();
        }
        else {
            word += sentence2[i];
        }
    }
    if (words.find(word) == std::string::npos) {
        words += word + " ";
    }

    std::string result;
    word.clear();
    for (size_t i = 0; i < sentence1.length(); ++i) {
        if (sentence1[i] == ' ') {
            if (words.find(word) == std::string::npos) {
                result += word + " ";
            }
            word.clear();
        }
        else {
            word += sentence1[i];
        }
    }
    if (words.find(word) == std::string::npos) {
        result += word + " ";
    }

    std::cout << result << std::endl;

    return 0;
}
