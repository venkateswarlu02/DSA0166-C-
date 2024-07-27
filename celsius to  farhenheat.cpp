#include <iostream>


double celsiusToFahrenheit(double celsius) {
    return (celsius * 9.0 / 5.0) + 32.0;
}

int main() {
    double celsius;
    std::cout << "Enter temperature in Celsius: ";
    std::cin >> celsius;
    
    double fahrenheit = celsiusToFahrenheit(celsius);
    std::cout << "Temperature in Fahrenheit: " << fahrenheit << std::endl;
    
    return 0;
}

