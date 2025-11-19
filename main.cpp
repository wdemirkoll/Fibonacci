#include <iostream>

int main()
{

    int first=1;    // First number of the Fibonacci sequence
    int second=1;   // Second number of the Fibonacci sequence
    int number,third; // 'number' is user input, 'third' stores the next Fibonacci value

    std::cout << "Enter a number: ";
    std::cin >> number; // Read how many Fibonacci numbers to generate

    std::cout << "\n1 1 "; // Print the first two Fibonacci numbers

    for(int i=1; i<=number-2; i++) {  // Loop to generate the remaining numbers
        third = first + second;  // Calculate next Fibonacci number
        std::cout << third << " ";  // Print the number
        first = second;  // Update previous values
        second = third;
    }

  return 0;
}
