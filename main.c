#include "simple_calc.h"
#include<stdio.h>

int main(){
    int a, b, choice;

    printf("Enter two int nums: ");
    if (scanf("%d%d", &a, &b) != 2){
        perror("Invalid input. Exiting.\n");
        return 1;
    }

    do {
        printf("\nMenu:\n");
        printf("1) Find sum +\n");
        printf("2) Find sub -\n");
        printf("3) Find mul *\n");
        printf("4) Find div /\n");
        printf("5) Rewrite nums\n");
        printf("6) Exit\n");

        printf("Enter your choice: ");
        if (scanf("%d", &choice) != 1) {
            printf("Invalid input. Exiting.\n");
            break;
        }

        switch (choice) {
            case SUM:
                printf("Res = %d\n", sum(a, b));
                break;
            case SUB:
                printf("Res = %d\n", sub(a, b));
                break;
            case MUL:
                printf("Res = %d\n", mul(a, b));
                break;
            case DIV:
                printf("Res = %d\n", div(a, b));
                break;
            case REWRITE_NUMS:
                printf("Enter two int nums: ");
                if (scanf("%d%d", &a, &b) != 2){
                    perror("Invalid input. Exiting.\n");
                    return 1;
                }
                printf("Rewritten succesfually.\n");
                break;
            case EXIT:
                printf("Exiting program.\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != EXIT);

    return 0;
}
