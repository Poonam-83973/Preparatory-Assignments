/*
	QQ11. Create a structure called Employee that includes three fields - a first
	name (type String), a last name (type String) and a monthly salary (double).
	Write functions to initialize the fields, print them and modify the values in
	the given object. Example methods:
	void emp_init(struct emp* e);
	void set_salary(struct emp *e, double sal);
	void emp_display(struct emp *e);
*/


#include<stdio.h>

typedef struct employee {
    char firstName[16];
    char lastName[16];
    double  salary;
} emp;

void init_employee(emp *e);
void employee_display(emp e);
void set_Salary(emp *e);
void init_employee(emp *e) {
    printf("\nEnter your first Name\n");
    scanf("%s", e->firstName);
    printf("Enter your last Name\n");
    scanf("%s", e->lastName);
    printf("Enter the salary\n");
    scanf("%lf", &e->salary);
}

void employee_display(emp e) {
    printf("\nYour first Name is: %s\n", e.firstName);
    printf("Your last Name is: %s\n", e.lastName);
    printf("Your salary is: %lf\n", e.salary);
}

void set_Salary(emp *e)
{ 
   printf("If you wish to change the salary details please enter the the new salary amount\n");
   scanf("%lf",&e->salary);
   printf("Your salary is updated\n");
}
int main() {
    emp e1,e2;
    init_employee(&e1);
    employee_display(e1);
    set_Salary(&e1);
    employee_display(e1);
    init_employee(&e2);
    employee_display(e2);
    set_Salary(&e2);
    employee_display(e2);
    return 0;
}

