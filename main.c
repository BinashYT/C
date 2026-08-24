#include <stdio.h>

int main()
{
    printf("Enter your age: ");
    int age;
    scanf("%d", &age);
    if (age >= 0)
    {
        if (age > 0 && age < 16)
        {
            printf("You're a child");
        }
        else if (age >= 16 && age < 30)
        {
            printf("You're young");
        }
        else
        {
            printf("You're old");
        }
    }
    else{
        printf("Age cannot be negative. Please enter a valid age.");
    }
return 0;
}