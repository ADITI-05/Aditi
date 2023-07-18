/* Write a program of structure employee that provides the following information 
  -print and display empno, empname, address and age.
*/

#include <stdio.h>
struct Employee {
    int empno;
    char empname[50];
    char address[100];
    int age;
};

int main() {
    struct Employee em;

    // Taking input for employee information
    printf("Enter employee number: ");
    scanf("%d", &em.empno);

    printf("Enter employee name: ");
    scanf(" %[^\n]", em.empname);

    printf("Enter employee address: ");
    scanf(" %[^\n]", em.address);

    printf("Enter employee age: ");
    scanf("%d", &em.age);

    // Displaying the employee information
    printf("\n ======Employee information======\n");
    printf("\nEmployee number : %d\n", em.empno);
    printf("\nEmployee name : %s\n", em.empname);
    printf("\nEmployee address : %s\n", em.address);
    printf("\nEmployee age : %d\n", em.age);

 return 0;   
}
