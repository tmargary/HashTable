#include <chrono>
#include <iostream>
#include <random>
#include <ranges>
#include <unordered_map>
#include <vector>

#include "HashTable.h"

int main()
{//
    HashTable<std::string, std::hash<std::string>> t;
    for (int i = 0; i < 200; i++)
    {
        t.insert(std::to_string(i));
    }

    t.for_each([](const auto &v)
               { std::cout << (*v) << " "; });

    std::cout << "\n\n\n\n";
    HashTable<std::string, std::hash<std::string>> t2 = t;
    t.clear();
    t2.for_each([](const auto &v)
                { std::cout << (*v) << " "; });
}
