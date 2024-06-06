#include <stdio.h>
#include "net_salary_calculator.h"

// Function implementations
void calculate_tax(float gross_salary, float *tax) {
    if (gross_salary <= 100) {
        *tax = 0.0;
    } else if (gross_salary <= 300) {
        *tax = gross_salary * 0.20;
    } else {
        *tax = gross_salary * 0.28;
    }
}

void calculate_medication_insurance(float gross_salary, float *med_insurance) {
    *med_insurance = gross_salary * 0.05;
}

void calculate_maternity_leave(float gross_salary, float *mat_leave) {
    *mat_leave = gross_salary * 0.003;
}

void calculate_social_security(float gross_salary, float *soc_security) {
    *soc_security = gross_salary * 0.03;
}

void calculate_net_salary(float gross_salary, float *net_salary) {
    float tax, med_insurance, mat_leave, soc_security;

    calculate_tax(gross_salary, &tax);
    calculate_medication_insurance(gross_salary, &med_insurance);
    calculate_maternity_leave(gross_salary, &mat_leave);
    calculate_social_security(gross_salary, &soc_security);

    *net_salary = gross_salary - tax - med_insurance - mat_leave - soc_security;
}


//function to validate the gross salary input and return error when input is less
int validateGrossSalary(float *gross_salary){
    char input[100];
    float temp;

    printf("Enter the gross salary: ");
    if (fgets(input, sizeof(input), stdin) == NULL) {
        printf("Error: Invalid input. \n");
        return 0;
    }

    if (sscanf(input, "%f", &temp) != 1){
        printf("Error: invalid input. Please enter a number.\n");
        return 0;
    }

    if (temp < 0.0) {
        printf("Error: Gross salary cannot be negative.\n");
        return 0;
    }

    *gross_salary = temp;
    return 1;
}

// int main() {
//     float gross_salary, net_salary;

//     printf("Enter the gross salary: ");
//     scanf("%f", &gross_salary);

//     calculate_net_salary(gross_salary, &net_salary);

//     printf("The net salary is: %.2f\n", net_salary);

//     return 0;
// }


int main() {
    float gross_salary;

    while (!validateGrossSalary(&gross_salary))
    {   /* Keep asking for input */
    }

    float net_salary; calculate_net_salary(gross_salary, &net_salary);
    printf("The net salary is: %.2f\n", net_salary);

    return 0;
    
}