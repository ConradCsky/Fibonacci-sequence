#include <iostream>
#include <vector>

using namespace std;

// Function to calculate Fibonacci numbers using memoization
long long fibonacci(int n, vector<long long>& memo) {
    if (n <= 1)
        return n;

    // If the value hasn't been calculated yet, calculate and store it
    if (memo[n] == -1)
        memo[n] = fibonacci(n - 1, memo) + fibonacci(n - 2, memo);

    return memo[n];
}

int main() {
    int n;

    cout << "Enter the number of Fibonacci sequence elements: ";
    cin >> n;

    vector<long long> memo(n + 1, -1); // Initialize memoization vector with -1
    cout << "Fibonacci sequence for " << n << " elements:\n";
    for (int i = 0; i < n; ++i)
        cout << fibonacci(i, memo) << " ";

    cout << endl;
    return 0;
}
