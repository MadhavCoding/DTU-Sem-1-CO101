// Lab Program 24: Program to generate the employee details using structure.
#include <stdio.h>
#include <string.h>
struct employee
{
    int id;
    char name[20];
    int salary;
};


int main(int argc, char const *argv[])
{
    int n;
    printf("Enter no. of Employees: ");
    scanf("%d", &n);
    struct employee Emp[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter ID: ");
        scanf("%d", &(Emp[i].id));
        char n[20];
        printf("Enter Name: ");
        scanf("%s", n);
        strcpy(Emp[i].name, n);
        printf("Enter Salary: ");
        scanf("%d", &(Emp[i].salary));
    }
    
    for (int i = 0; i < n; i++)
    {
        printf("\n");
        printf("ID: %d\n", Emp[i].id);
        printf("Name: %s\n", Emp[i].name);
        printf("Salary: %d\n", Emp[i].salary);
        printf("\n");
    }
    
    return 0;
}