#include<stdio.h>
int main(){
    int age, candidateAge;
    char eyesightTest, drivingTest, writtenTest, medicalTest;
    printf("Enter your age:");
    scanf("%d", &age);
    candidateAge = age; // Assign age to candidateAge for later use

    if (age < 18) {
        printf("You are not eligible for a driving license.\n");
        return 0;
    }
        printf("Have you passed your eyesight test? (P for Pass, F for Fail):\n");
        scanf(" %c", &eyesightTest);
          if (eyesightTest != 'P') {
           printf("You are not eligible to apply for a driving license.\n");
           printf("You might need a prescription for glasses.\n");
           return 0;
           }
             printf("Have you passed the written Test? (Y for Yes, N for No):\n");
             scanf(" %c", &writtenTest);
             if (writtenTest != 'Y') {
                printf("You need to pass the written test to apply for a driving license.\n");
                return 0;
                }
         printf("Have you passed the driving test? (Y for Yes, N for No):\n");
         scanf(" %c", &drivingTest);
            if (drivingTest != 'Y') {
              printf("You need to pass the driving test first.\n");
              return 0;
             }
        if (candidateAge > 60) {
        printf("Have you passed the medical test? (Y for Yes, N for No):\n");
        scanf(" %c", &medicalTest);
          if (medicalTest != 'Y') {
            printf("You need to pass the medical test to apply for a driving license.\n");
            return 0;
        }
    }
    printf("You are eligible for a driving license.\n");
    return 0;
}