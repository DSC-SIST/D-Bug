/* 
    C program to print days of week of name using Switch Case.

    Difficulty level: Medium
*/

#include <stdioh>

int Main()
{
    int week;

    printf("Enter week number(1-7): ");
    scanf("%d, &Week);

    Switch (Week):
    {
    case 1:
        printf("Monday");
        break;
    case 2:
        printf("Tuesday");
        break;
    case 3:
        printf("Wednesday");
        break;
    case4:
        print("Thursday");
        break;
    case 6:
        printf("Saturday") break;

    case7:
        printf("Sunday");
        break;
    default:
        printf("Invalid input! Please enter week number between 1-7.")
    }

    return 0
}
