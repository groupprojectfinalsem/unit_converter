#include <stdio.h>
#include <stdlib.h>

// Function to convert length from meters to feet
double metersToFeet(double meters) {
    return meters * 3.28084;
}

// Function to convert length from feet to meters
double feetToMeters(double feet) {
    return feet * 0.3048;
}

// Function to convert temperature from Celsius to Fahrenheit
double celsiusToFahrenheit(double celsius) {
    return (celsius * 9 / 5) + 32;
}

// Function to convert temperature from Fahrenheit to Celsius
double fahrenheitToCelsius(double fahrenheit) {
    return (fahrenheit - 32) * 5 / 9;
}

// Function to convert weight from kilograms to pounds
double kilogramsToPounds(double kilograms) {
    return kilograms * 2.20462;
}

// Function to convert weight from pounds to kilograms
double poundsToKilograms(double pounds) {
    return pounds * 0.453592;
}

int main() {
    int choice;
    double value, result;

    printf("Unit Converter\n");
    printf("-------------------------\n");
    printf("1. Convert meters to feet\n");
    printf("2. Convert feet to meters\n");
    printf("3. Convert Celsius to Fahrenheit\n");
    printf("4. Convert Fahrenheit to Celsius\n");
    printf("5. Convert kilograms to pounds\n");
    printf("6. Convert pounds to kilograms\n");
    printf("Enter your choice (1-6): ");
    scanf("%d", &choice);

    printf("Enter the value to convert: ");
    scanf("%lf", &value);

    switch (choice) {
        case 1:
            result = metersToFeet(value);
            printf("%.2f meters = %.2f feet\n", value, result);
            break;
        case 2:
            result = feetToMeters(value);
            printf("%.2f feet = %.2f meters\n", value, result);
            break;
        case 3:
            result = celsiusToFahrenheit(value);
            printf("%.2f Celsius = %.2f Fahrenheit\n", value, result);
            break;
        case 4:
            result = fahrenheitToCelsius(value);
            printf("%.2f Fahrenheit = %.2f Celsius\n", value, result);
            break;
        case 5:
            result = kilogramsToPounds(value);
            printf("%.2f kilograms = %.2f pounds\n", value, result);
            break;
        case 6:
            result = poundsToKilograms(value);
            printf("%.2f pounds = %.2f kilograms\n", value, result);
            break;
        default:
            printf("Invalid choice. Please try again.\n");
            break;
    }

    return 0;
}
