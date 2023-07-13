// Section 20
// Challenge 1
// Identifying palindrome strings using a deque
#include <cctype>
#include <deque>
#include <iostream>
#include <string>
#include <vector>
#include <string.h>
#include <iomanip>

bool is_palindrome(const std::string &s)
{
    std::deque<char> d;
    char ch1, ch2;
    for (char c : s)
    {
        if (isalpha(c))
            d.push_back(c);
    }
    while (d.size() > 1)
    {
        ch1 = d.front();
        ch2 = d.back();
        d.pop_front();
        d.pop_back();
        if (ch1 != ch2)
            return false;
    }
    return true;
}

int main()
{
    std::vector<std::string> test_strings{"kiran", "a", "aa", "aba", "abba", "abbcbba", "ab", "abc", "radar", "bob", "ana",
                                          "avid diva", "Amore, Roma", "A Toyota's a toyota", "A Santa at NASA", "C++",
                                          "A man, a plan, a cat, a ham, a yak, a yam, a hat, a canal-Panama!", "This is a palindrome", "palindrome"};

    std::cout << std::boolalpha;
    std::cout << std::setw(8) << std::left << "Result"
              << "String" << std::endl;
    for (const auto &s : test_strings)
    {
        std::cout << std::setw(8) << std::left << is_palindrome(s) << s << std::endl;
    }
    std::cout << std::endl;
    return 0;
}