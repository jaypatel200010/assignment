//20.Accept monthly salary from the user and deduct 10% insurance premium, 10% loan installment find out of remaining salary.
#include <stdio.h>
int main() {
    float monthly_salary, insurance_premium, loan_installment, remaining_salary;
    //Monthly salary
    printf("Enter your monthly salary: ");
    scanf("%f", &monthly_salary);
    //Insurance premium based on monthly salary.
    insurance_premium = 0.1 * monthly_salary;
    //remainig salary after deducting insurance premium
    remaining_salary = monthly_salary - insurance_premium;
    //Loan installments
    loan_installment = 0.1 * remaining_salary;
    //remainig salary after deducting Loan installments
    remaining_salary -= loan_installment;
    printf("Your remaining salary is: %.2f\n", remaining_salary);
}
