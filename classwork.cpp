#include <iostream>  // std::cin, std::cout
#include <string>    // std::string, std::getline
#include <vector>    // std::vector

template <typename T>    // no need to worry about this; Mr. Vu is using this to make teaching easier
void displayList(std::vector<T> const &v);

int main()
{
    // You can follow along with any code in class here
    std::vector<std::string> names = {"Peter", "Bruce", "Steve", "Tony"};
    std::vector<int> numbers = {100, 50, 10, 1, 2, 7, 11, 17, 53, -8};

    // Problem 1
    int curr_index = 0;
    while (curr_index < names.size())
    {
        std::cout << names[curr_index] << " ";
        curr_index = curr_index + 2;
    }

    // Problem 2
    int curr_index = 0;
    while (curr_index < numbers.size())
    {
        if (numbers(curr_index) 
    }

    //Problem 5
    curr_index = 0;
    while (curr_index < Players.size())
    {
        if (Players[curr_index] < "Thor")
        {
            std::cout << Players[curr_index] << " ";
        }
        curr_index = curr_index + 1;
    }



    return 0;
}





// ignore everything down here
template <typename T>
void displayList(std::vector<T> const &v)
{
    if (v.empty())
    {
        std::cout << "[]\n";
        return;
    }

    std::cout << "[";
    for (int i = 0; i < v.size()-1; ++i)
    {
        std::cout << v[i] << ", ";
    }
    std::cout << v.back() << "]\n";
}