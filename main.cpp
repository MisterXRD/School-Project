#include <iostream>

using namespace std;

#define gravitational_constant 6.6743 * pow(10, 11);

float calculate_surface_gravity(float flMass, float flRadius) 
{
    float G, M, r, a;

    // "G" --> The gravitational constant
    G = gravitational_constant;

    // "M" --> The mass of the planet
    M = flMass;

    // "r" --> The distance to the center of the sphere
    r = flRadius;

    // Run the calculation
    a = (G * M) / pow(r, 2);

    // Return the result
    return a;
}

int main() 
{
    // Create the variables we will use
    float flMass, flRadius, flResult;

    // Get some required inputs from the client
    cout << "(sextillions) Planet's Mass: ";
    cin >> flMass;
    cout << "(kilometers) Planet's Radius: ";
    cin >> flRadius;

    // Calling our function to calculate the surface gravity
    flResult = calculate_surface_gravity(flMass, flRadius);

    // Letting the client see what we got back from our function
    cout << "(acceleration) Planet's Gravity: " << flResult << endl;
    
    // Exit the application with the code 0x0000
    return 0;
}