/*Q18: Write a program that accepts a percentage (0-100) and assigns a grade based on the following criteria: 
90-100: Grade A 
80-89: Grade B 
70-79: Grade C 
60-69: Grade D 
below 60: Grade F.*/
#include <stdio.h>

int main() {
    float percentage;

    
    printf("Enter your percentage (0-100): ");
    
    
    if (scanf("%f", &percentage) != 1) {
        printf("Invalid input! Please enter a numerical value.\n");
        return 1;
    }

    
    if (percentage < 0.0 || percentage > 100.0) {
        printf("Invalid input! Please enter a percentage between 0 and 100.\n");
    } else {
        
        if (percentage >= 90.0) {
            printf("Your Grade is: A\n");
        } else if (percentage >= 80.0) {
            printf("Your Grade is: B\n");
        } else if (percentage >= 70.0) {
            printf("Your Grade is: C\n");
        } else if (percentage >= 60.0) {
            printf("Your Grade is: D\n");
        } else {
            printf("Your Grade is: F\n");
        }
    }

    return 0;
}

