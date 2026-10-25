#include <iostream>
#include <iomanip>

int main()
{

    double n1, n2;
    // Decimal printer, will print 2 decimal
    std::cout << std::fixed << std::setprecision(2);

    std::cout << "Enter the first number: ";

    // Validate the first number
    if (!(std::cin >> n1))
    {
        std::cout << "Error invalid input" << std::endl;
        return 1;
    }

    std::cout << "Enter the second number: ";
    // Validate the second number
    if (!(std::cin >> n2))
    {
        std::cout << "Error invalid input" << std::endl;
        return 1;
    }

    // formula
    double sum = n1 + n2;
    double difference = n1 - n2;
    double product = n1 * n2;

    // result
    std::cout << std::endl;
    std::cout << "-----Math simulation result-----" << std::endl;
    std::cout << "The sum of " << n1 << " + " << n2 << " " << "is: " << sum << '\n';
    std::cout << "The difference of " << n1 << " - " << n2 << " " << "is: " << difference << '\n';
    std::cout << "The product of " << n1 << " * " << n2 << " " << "is: " << product << '\n';

    // check if n2 is not(!) equal(=) to zero(0)
    if (n2 != 0)
    {
        // if true
        double quotient = n1 / n2;
        std::cout << "The quotient of " << n1 << " / " << n2 << " " << "is: " << quotient << '\n';
    }
    else
    {
        // if false
        std::cout << "Cannot divide by zero.\n";
    }

    return 0;
}