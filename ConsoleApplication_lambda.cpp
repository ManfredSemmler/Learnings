// ConsoleApplication_lambda.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

void ForEach(const std::vector<int>& values, const std::function<void(int)>& func)
{
    for (int value : values)
        func(value);
}

int main()
{
 	std::vector<int> values = { 1,5,4,2,3,8};

    auto lambda2 = [](int value) {return value > 3;
	auto it = std::find_if(values.begin(), values.end(), [](int value) {return value > 3; });
    std::cout << *it << std::endl;


	int a = 5;

    auto lambda = [=](int value)  { std::cout << "Value: " << value << std::endl; };

    ForEach(values, lambda2);
    std::cin.get();
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
