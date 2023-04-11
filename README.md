# Fibonacci sequence
This code calculates and displays the Fibonacci sequence for a user-specified number of elements using memoization. The fibonacci() function is a recursive function that takes an integer n and a memoization vector memo as its arguments. Memoization is used to store the previously computed Fibonacci numbers in the memo vector, allowing for faster calculation times by avoiding redundant computations.

In the main() function, the user is prompted to enter the number of Fibonacci sequence elements they wish to generate. The memoization vector is initialized with a size of n + 1 and filled with -1 to indicate uncalculated values. The program then iterates through the Fibonacci sequence, calling the fibonacci() function for each element, and outputs the resulting sequence.
