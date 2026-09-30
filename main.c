#include <stdio.h>
#include "employees.h"
#include "budget.h"
#include "utilities.h"
#include "reports.h"

int main(void)
{
    int choice;

    printf("Municipal Financial Management System\n");

    do
    {
        printf("\n");
        printf("1. Employees\n");
        printf("2. Budget\n");
        printf("3. Reports\n");
        printf("4. Exit\n");
        printf("Enter choice: ");

        choice = readInt();

        if (choice == 1)
        {
            addEmployee();
            listEmployees();
        }
        else if (choice == 2)
        {
            addBudget();
        }
        else if (choice == 3)
        {
            employeeReport();
            budgetReport();
        }
        else if (choice == 4)
        {
            printf("Goodbye.\n");
        }
        else
        {
            printf("Invalid choice.\n");
        }

    } while (choice != 4);

    return 0;
}