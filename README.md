# Net Salary Calculator and Sorting Names

The Net Salary Calculator is a program designed to compute the net salary from a given gross salary. The calculation takes into account various deductions, including tax, medication insurance, maternity leave, and social security fund. Each deduction is handled by a standalone function, and the net salary is calculated by aggregating all deductions.The Sorting Names program sorts a list of 20 full names either in ascending or descending order based on user input. The sorting is performed using the bubble sort algorithm.
![Alt text](./image/salary.jpg "Net Salary Calculator and Sorting Names")

## Table of Contents
Requirements
Installation
Configuration
Troubleshooting & FAQ

## Requirements
A function to calculate tax based on salary ranges:
Gross salary ≤ USD 100: 0% tax
USD 100 < Gross salary ≤ USD 300: 20% tax
Gross salary > USD 300: 28% tax
A function to calculate medication insurance (5% of gross salary)
A function to calculate maternity leave (0.3% of gross salary)
A function to calculate social security fund (3% of gross salary)
All functions will use pointers to return the calculated values.
A function to sort a list of 20 full names in either ascending or descending order using the bubble sort algorithm.
User input to determine the sorting order (ascending or descending).

## Installation
To install Net Salary Calculator and Sorting Names, run the following command:
git clone https://github.com/your-repository.git
## Navigate to the project directory:
cd your-repository
## Compile the C programs:
gcc net_salary_calculator.c -o net_salary_calculator
gcc sorting_names.c -o sorting_names
## Run the programs:
./net_salary_calculator
./sorting_names
## Troubleshooting & FAQ
Net Salary Calculator
Q: Why is my net salary not being calculated correctly?

A: Ensure you are entering a valid numeric value for the gross salary. Check that the functions are implemented correctly and that the calculations align with the given percentage values for deductions.
Sorting Names
Q: Why are the names not sorted correctly?

A: Ensure you entered 'asc' or 'desc' correctly when prompted. Check the implementation of the bubble sort algorithm and the swap function for correctness.
## Maintainers
For any issues or contributions, please contact:

Name: Group_B
## Emails:
c.onuoha@alustudent.com 
j.malong@alustudent.com
e.pius1@alustudent.com

