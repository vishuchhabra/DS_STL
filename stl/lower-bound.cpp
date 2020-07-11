#include <bits/stdc++.h>
#include<iostream>
#include<vector>

// Driver code
int main()
{
    std::vector<int> v{ 10, 20, 30, 40, 50 };

    // Print vector
    std::cout << "Vector contains :";
    for (unsigned int i = 0; i < v.size(); i++)
        std::cout << " " << v[i];
    std::cout << "\n";

    std::vector<int>::iterator low1, low2;

    // std :: lower_bound
    low1 = std::lower_bound(v.begin(), v.end(), 10);
    low2 = std::lower_bound(v.begin(), v.end(), 55);

    std::cout << "\nlower_bound for element 20 at position : " << (low1 - v.begin());
    std::cout << "\nlower_bound for element 55 at position : " << (low2 - v.begin());

    return 0;}
