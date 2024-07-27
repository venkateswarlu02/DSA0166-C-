#include <iostream>
using namespace std;

class TemperatureConverter {
public:
    double celsiusToFahrenheit(double celsius) {
        return (celsius * 9.0 / 5.0) + 32.0;
    }
};

int main() {
    TemperatureConverter converter;
    double celsius;

    cout << "Enter temperature in Celsius: ";
    cin >> celsius;

    double fahrenheit = converter.celsiusToFahrenheit(celsius);
    cout << "Temperature in Fahrenheit: " << fahrenheit << endl;

    return 0;
}

