#include <iostream>

using namespace std;

float fahrenheitToCelsius(float temp_far);

int main() {
    
    float temp_far, temp_cel;
    
    cout << "Temperatura em Fahrenheit: ";
    cin >> temp_far;
    
    temp_cel = fahrenheitToCelsius(temp_far);
    
    cout << "Tal temperatura equivale a " << temp_cel << "ºC.";
    
    return 0;
}

float fahrenheitToCelsius(float temp_far)
{
    return (temp_far - 32) * 5 / 9;
}
