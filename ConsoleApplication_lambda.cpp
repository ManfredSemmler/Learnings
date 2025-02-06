// ConsoleApplication_lambda.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
// see also https://learn.microsoft.com/de-de/cpp/cpp/lambda-expressions-in-cpp?view=msvc-170#%C3%9Cbersicht
// and https://learn.microsoft.com/de-de/cpp/cpp/examples-of-lambda-expressions?view=msvc-170





#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

void ForEach(const std::vector<int>& values, const std::function<void(int)>& func)
{
    for (int value : values)
        func(value);
}


int mySort()
{
    std::vector<int> mylist = { 3, 1, 4, 1, 5, 9, 2, 6, 5, 3, 5 };

    // Drucken mit Lambda als definierte funktion, die dann als Parameter in der Funktion verwendet wird
    auto print_X = [](int value) {std::cout << std::endl << value << ", "; };

    std::cout << std::endl << "unsorted" << std::endl;
    for_each(mylist.begin(), mylist.end(), print_X);

    //sort
    std:sort(mylist.begin(), mylist.end(), std::greater<>());
    //print
    std::cout << std::endl << "sorted" << std::endl;
    for_each(mylist.begin(), mylist.end(), print_X);

    return 0;
}


int mySort_2()
{
    std::vector<int> mylist = { 3, 1, 4, 1, 5, 9, 2, 6, 5, 3, 5 };

    // Drucken mit Lambda direkt in den Funktionsparameter eingebaut
    
    std::cout << std::endl << "unsorted L2" << std::endl;
    for_each(mylist.begin(), mylist.end(), [](int value) {std::cout << std::endl << value << ", "; });

    //sort
    std:sort(mylist.begin(), mylist.end(), std::greater<>());
    //print
    std::cout << std::endl << "sorted L2" << std::endl;
    for_each(mylist.begin(), mylist.end(), [](int value) {std::cout << std::endl << value << ", "; });

    return 0;
}



int main()
{
 	std::vector<int> values = { 1,5,4,2,3,8};
    int a = 5;
    auto lambda = [=](int value)  { std::cout << "Value: " << value << std::endl; };

    std::cout << "-------------- My ForEach-------------" << std::endl;
    ForEach(values, lambda);

    std::cout << "-------------- My Sort-------------" << std::endl;
    mySort_2();
    std::cin.get();
}

