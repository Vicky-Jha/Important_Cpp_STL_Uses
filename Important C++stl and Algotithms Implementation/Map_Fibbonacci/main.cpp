#include <iostream>
#include <unordered_map>

// Function to find nth Fibonacci number
int fib(int n, std::unordered_map<int,int> lookup)
{
    if (n <= 2)
        return n;
    
    // if sub-problem is seen for the first time
    if (lookup.find(n) == lookup.end())
        lookup[n] = fib(n - 1, lookup) + fib(n - 2, lookup);
    
    return lookup[n];
}

int main()
{
    int n = 8;
    std::unordered_map<int, int> lookup;
    
    std::cout << fib(n, lookup);
    
    return 0;
}
