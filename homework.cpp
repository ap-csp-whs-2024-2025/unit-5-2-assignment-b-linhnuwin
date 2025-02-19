#include <iostream>  // std::cin, std::cout
#include <string>    // std::string, std::getline
#include <vector>    // std::vector

template <typename T>    // no need to worry about this; Mr. Vu is using this to make teaching easier
void displayList(std::vector<T> const &v);

int main()
{
    // You can follow along with any code in class here
    std::vector<std::string> Players = {"Peter", "Bruce", "Steve", "Tony", "Natasha", "Clint", "Wanda", "Hope", "Danny", "Carol"};
    std::vector<int> Numbers = {100, 50, 10, 1, 2, 7, 11, 17, 53, -8, -4, -9, -72, -64, -80};

    //Problem #1
    int curr_index = 0;
    while (curr_index < Players.size())
    {
        std::cout << Players[curr_index] << " ";
        curr_index = curr_index + 2;
    }
    std::cout << std::endl;

    //Problem #2
    curr_index = 0;
    while (curr_index < Numbers.size())
    {
        if (Numbers[curr_index] > 0)
        {
            std::cout << Numbers[curr_index] << " ";
        }
        curr_index = curr_index + 1;
    }
    std::cout << std::endl;

    //Problem #3
    curr_index = 0;
    int sum = 0;
    while (curr_index < Numbers.size())
    {
        sum = Numbers[curr_index] + sum;
        curr_index = curr_index + 1;
    }
    std::cout << sum << std::endl;

    //problem #4
    curr_index = 0;
    while (curr_index < Numbers.size())
    {
        if (Numbers[curr_index] % 2 == 1 || Numbers[curr_index] % 2 == -1)
        {
            std::cout << Numbers[curr_index] << " ";
        }
        curr_index = curr_index + 1;
    }
    std::cout << std::endl;


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
    std::cout << std::endl;

        //Problem 6
    curr_index = 0;
    int max = 0;
    int min = 0;
    while (curr_index < Numbers.size())
    {
        if (max < Numbers[curr_index])
        {
            max = Numbers[curr_index];
        }

        if (min > Numbers[curr_index])
        {
            min = Numbers[curr_index];
        }
        curr_index = curr_index + 1;
    }
    std::cout << max << std::endl;
    std::cout << min << std::endl;


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