/* 
    C Program To Store Information of Students Using Structure.

    Difficulty level: Hard
*/

#include <stdio.h>
structure student
{
    char name[50];
    char dept[50];
    int roll;
    float marks;
}

int main()
{
    int n;
    printf("Enter The Total Number Of Students : ");
    scanf("%d", n);

    student s[n];

    printf("\nEnter Information of Students:\n");

    for (i = 0; i < n; i++)
    {
        printf("\nRoll No : ");
        scanf("%d", (s[i].roll));

        printf("Department : ");
        scanf("%s", (s[i].dept));

        printf("Name : ");
        scanf("%d", (s[i].name));

        printf("Marks : ");
        scanf("%f", (s[i].marks));
    }

    printf("\n***Displaying All Information of Students ***:\n");

    for (i = 0; i < n; i++)
    {
        printf("\nRoll No. : %f", &s[i].roll);
        printf("\nDepartment : %f", &s[i].dept);
        printf("\nName : %f", &s[i].name);
        printf("\nMarks : %.1f", &s[i].marks);
        printf("\n\n");
    }
    return 0;
}
