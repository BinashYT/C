#include <stdio.h>
#include <stdlib.h>

int main() {
    int op, i;
    int n[100];
    char sign[100];
    int result;
    
    printf("\t\t\t\t Welcome to Calculator!\n");
    printf("Enter the number of operations to be performed: ");
    scanf("%d", &op);
    
    if(op <= 0) {
        printf("Please enter a valid integer value to perform operations on.\n");
        exit(2);
    }
    
    if(op >= 100) {
        printf("Maximum operations allowed is 99.\n");
        exit(2);
    }
    
    // Input first number
    printf("Enter number 1: ");
    scanf("%d", &n[0]);
    
    // Input operations and subsequent numbers
    for(i = 1; i <= op; i++) {
        printf("Enter operation %d (+,-,*,/): ", i);
        scanf(" %c", &sign[i]);  // Space before %c is important!
        
        printf("Enter number %d: ", i + 1);
        scanf("%d", &n[i]);
    }
    
    // Display the expression
    printf("\n========================================\n");
    printf("Expression: ");
    printf("%d", n[0]);
    for(i = 1; i <= op; i++) {
        printf(" %c %d", sign[i], n[i]);
    }
    printf("\n========================================\n");
    
    // Calculate result
    result = n[0];
    printf("\nStep-by-step calculation:\n");
    for(i = 1; i <= op; i++) {
        int prev_result = result;
        
        switch(sign[i]) {
            case '+':
                result += n[i];
                printf("%d + %d = %d\n", prev_result, n[i], result);
                break;
            case '-':
                result -= n[i];
                printf("%d - %d = %d\n", prev_result, n[i], result);
                break;
            case '*':
                result *= n[i];
                printf("%d * %d = %d\n", prev_result, n[i], result);
                break;
            case '/':
                if(n[i] != 0) {
                    result /= n[i];
                    printf("%d / %d = %d\n", prev_result, n[i], result);
                } else {
                    printf("Error: Division by zero at step %d!\n", i);
                    exit(2);
                }
                break;
            default:
                printf("Error: Invalid operation '%c' at step %d!\n", sign[i], i);
                exit(2);
        }
    }
    
    printf("\n========================================\n");
    printf("Final result: %d\n", result);
    printf("========================================\n");
    
    return 0;
}