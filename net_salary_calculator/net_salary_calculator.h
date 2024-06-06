// net_salary_calculator.h

#ifndef NET_SALARY_CALCULATOR_H
#define NET_SALARY_CALCULATOR_H
// Function prototypes
void calculate_tax(float gross_salary, float *tax);
void calculate_medication_insurance(float gross_salary, float *med_insurance);
void calculate_maternity_leave(float gross_salary, float *mat_leave);
void calculate_social_security(float gross_salary, float *soc_security);
void calculate_net_salary(float gross_salary, float *net_salary);

#endif // NET_SALARY_CALCULATOR_H