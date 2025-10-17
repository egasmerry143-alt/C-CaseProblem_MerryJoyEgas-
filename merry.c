#include <stdio.h>

int main() 
{
    
    printf("Name: Merry Joy R. Egas\n");
    printf("School ID: 2025306995\n");
    
    float grade;
    
    printf("Enter your grade: ");
    scanf("%f", &grade);
    
    if (grade >= 90 && grade <= 100) {
        printf("Your grade is Excellent!\n");
    }
    else if (grade >= 80 && grade < 90) {
        printf("Your grade is Very Good!\n");
    }
    else if (grade >= 70 && grade < 80) {
        printf("Your grade is Good!\n");
    }
    else if (grade >= 60 && grade < 70) {
        printf("Your grade is Needs Improvement.\n");
    }   
    else if (grade >= 0 && grade < 60) {
        printf("Your grade is Failed.\n");
    }    
    else {
        printf("Invalid grade! Please enter a number between 0 and 100.\n");
    }
    if (grade >= 78 && grade <= 100) {
        printf("Status: PASS \n");
    }
    else if (grade >= 0 && grade < 78) {
        printf("Status: FAIL \n");
    }
    
    return 0;
    
}
