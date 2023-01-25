#include <iostream>
#include <regex>
using namespace std;
int main() {
    std::string input = "Hello, wes world!";
    std::regex pattern("ort");
    std::smatch match;
   

    if (std::regex_search(input, match, pattern)) {
        std::cout << "Pattern found in input" << std::endl;
    }
    

    return 0;
}