#include <vector>
#include <iostream>
#include <string>

int main()
{
// Task 1
std::vector<int> integers = {0, 1, 2, 3, 4, 5, 6};
std::vector<double> decimal = {2.5, 3.4, 4.2, 6.7, 10.2};
std::vector<std::string> fruits = {"apple", "banana", "orange", "grapefruit", "coconut"};

//Task 2
std::vector<int> integers = {0, 1, 2, 3, 4, 5, 6};
int x = 0;
while (x <= integers.size());
{
     if (integers[x] % 2 == 0);
    { 
     std::cout << integers[x] << "";
    }
    x = x + 1;
}

//Task 3
std::vector<std::string> fruits = {"apple", "banana", "orange", "grapefruit", "coconut"};
int y = 0;
while (y <= fruits.size())
{
    std::cout << fruits[x] << "";
    y = y + 1;
}
fruits.push_back(Long);
while ( y <= fruits.size())
{
    std::cout << fruits[y] << "",
    y = y + 1;
}

//Task 4
std::vector<double> decimal = {2.5, 3.4, 4.2, 6.7, 10.2};
int z = 0;
while (z <= decimal.size())
{
    std::cout << decimal[z] << "";
    z = z + 1;
}
decimal.pop_back();
while ( z <= decimal.size())
{
    std::cout << decimal[z] << "";
    z = z + 1;
}
}