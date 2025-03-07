// Copyright (c) 2025 Reid MacLean All rights reserved.
//
// Created by Reid MacLean
// Created on March 2025
// This program calculates the cost of a pizza with user input

#include <iomanip>  // For setting precision
#include <iostream>

using namespace std;

double calculate_pizza_cost(double diameter_inch_d, double& tax) {
    // Constants for fixed costs
    const double HST = 0.13;
    const double labour_cost = 2.00;
    const double rental_cost = 2.25;
    const double ingredients_cost_per_inch = 1.50;

    // Step 1: Calculate the subtotal (cost before tax)
    double subtotal = labour_cost + rental_cost + (ingredients_cost_per_inch * diameter_inch_d);

    // Step 2: Calculate the HST (tax)
    tax = subtotal * HST;

    // Step 3: Calculate the total cost
    double total_cost = subtotal + tax;

    // Return the subtotal
    return subtotal;
}

int main() {
    // Declare variables
    double diameter;
    double tax;

    // Get user input for the diameter of the pizza
    std::cout << "Enter the diameter of the pizza (in inches): ";
    std::cin >> diameter;

    // Call the function to calculate costs
    double subtotal = calculate_pizza_cost(diameter, tax);
    double total_cost = subtotal + tax;

    // Output the results
    std::cout << fixed << setprecision(2);  // Set the output to show two decimal places
    std::cout << "\nSubtotal: $" << subtotal << std::endl;
    std::cout << "Tax: $" << tax << endl;
    std::cout << "Total Cost: $" << total_cost << std::endl;

    return 0;
}
