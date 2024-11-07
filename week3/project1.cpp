#include <iostream>
#include <algorithm>
#include <string>

bool isPalindrome(const std::string &str) {
    int n = str.size();
    for (int i = 0; i < n / 2; i++) {
        if (str[i] != str[n - i - 1])
            return false;
    }
    return true;
}

bool areAnagrams(const std::string &str1, const std::string &str2) {
    if (str1.size() != str2.size())
        return false;
    
    std::string sortedStr1 = str1;
    std::string sortedStr2 = str2;
    
    std::sort(sortedStr1.begin(), sortedStr1.end());
    std::sort(sortedStr2.begin(), sortedStr2.end());
    
    return sortedStr1 == sortedStr2;
}

int main() {
    std::string str1, str2;

    std::cout << "Enter the first string: ";
    std::getline(std::cin, str1);
    std::cout << "Enter the second string: ";
    std::getline(std::cin, str2);

    if (isPalindrome(str1))
        std::cout << "The first string is a palindrome.\n";
    else
        std::cout << "The first string is not a palindrome.\n";

    if (isPalindrome(str2))
        std::cout << "The second string is a palindrome.\n";
    else
        std::cout << "The second string is not a palindrome.\n";

    if (areAnagrams(str1, str2))
        std::cout << "The strings are anagrams of each other.\n";
    else
        std::cout << "The strings are not anagrams of each other.\n";

    return 0;
}
