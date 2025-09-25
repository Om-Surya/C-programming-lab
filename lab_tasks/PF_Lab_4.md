# Lab 4 Tasks:

## Task 1: Check Voting Eligibility

```c
#include <stdio.h>

int main() {
    int age;
    
    printf("Enter your age: ");
    scanf("%d", &age);
    
    if (age >= 18) {
        printf("You are eligible to vote.\n");
    } else {
        printf("You are not eligible to vote.\n");
    }
    
    return 0;
}
```

## Task 2: Odd or Even Number

```c
#include <stdio.h>

int main() {
    int number;
    
    printf("Enter a number: ");
    scanf("%d", &number);
    
    if (number % 2 == 0) {
        printf("%d is an even number.\n", number);
    } else {
        printf("%d is an odd number.\n", number);
    }
    
    return 0;
}
```

## Task 3: Find Largest Among Three Numbers

```c
#include <stdio.h>

int main() {
    int num1, num2, num3, largest;
    
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    
    if (num1 >= num2) {
        if (num1 >= num3) {
            largest = num1;
        } else {
            largest = num3;
        }
    } else {
        if (num2 >= num3) {
            largest = num2;
        } else {
            largest = num3;
        }
    }
    
    printf("The largest number is: %d\n", largest);
    
    return 0;
}
```

## Task 4: Grade Calculator

```c
#include <stdio.h>

int main() {
    int score;
    
    printf("Enter student's score: ");
    scanf("%d", &score);
    
    if (score >= 90) {
        printf("Grade: A\n");
    } else if (score >= 80) {
        printf("Grade: B\n");
    } else if (score >= 70) {
        printf("Grade: C\n");
    } else if (score >= 60) {
        printf("Grade: D\n");
    } else {
        printf("Grade: F\n");
    }
    
    return 0;
}
```

## Task 5: Traffic Signal Control

```c
#include <stdio.h>

int main() {
    int color;
    
    printf("Enter traffic light color (1 for Red, 2 for Yellow, 3 for Green): ");
    scanf("%d", &color);
    
    switch (color) {
        case 1:
            printf("Stop\n");
            break;
        case 2:
            printf("Ready\n");
            break;
        case 3:
            printf("Go\n");
            break;
        default:
            printf("Invalid input\n");
    }
    
    return 0;
}
```

## Task 6: Basic Calculator

```c
#include <stdio.h>

int main() {
    int num1, num2, result;
    char operator;
    
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    
    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &operator);
    
    switch (operator) {
        case '+':
            result = num1 + num2;
            printf("Result: %d\n", result);
            break;
        case '-':
            result = num1 - num2;
            printf("Result: %d\n", result);
            break;
        case '*':
            result = num1 * num2;
            printf("Result: %d\n", result);
            break;
        case '/':
            if (num2 != 0) {
                printf("Result: %.2f\n", (float)num1 / num2);
            } else {
                printf("Error: Division by zero\n");
            }
            break;
        default:
            printf("Invalid operator\n");
    }
    
    return 0;
}
```

## Task 7: Leap Year Check

```c
#include <stdio.h>

int main() {
    int year;
    
    printf("Enter a year: ");
    scanf("%d", &year);
    
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        printf("%d is a leap year.\n", year);
    } else {
        printf("%d is not a leap year.\n", year);
    }
    
    return 0;
}
```

## Task 8: Number Sign Checker

```c
#include <stdio.h>

int main() {
    int number;
    
    printf("Enter a number: ");
    scanf("%d", &number);
    
    if (number > 0) {
        printf("The number is positive.\n");
    } else if (number < 0) {
        printf("The number is negative.\n");
    } else {
        printf("The number is zero.\n");
    }
    
    return 0;
}
```

## Task 9: Day Name from Number

```c
#include <stdio.h>

int main() {
    int day;
    
    printf("Enter a number (1-7): ");
    scanf("%d", &day);
    
    switch (day) {
        case 1:
            printf("Monday\n");
            break;
        case 2:
            printf("Tuesday\n");
            break;
        case 3:
            printf("Wednesday\n");
            break;
        case 4:
            printf("Thursday\n");
            break;
        case 5:
            printf("Friday\n");
            break;
        case 6:
            printf("Saturday\n");
            break;
        case 7:
            printf("Sunday\n");
            break;
        default:
            printf("Invalid input. Please enter a number between 1-7.\n");
    }
    
    return 0;
}
```

## Task 10: Simple Password Validator

```c
#include <stdio.h>

int main() {
    int password;
    int correct_password = 1234;  // Predefined password
    
    printf("Enter password (integer): ");
    scanf("%d", &password);
    
    if (password == correct_password) {
        printf("Access Granted\n");
    } else {
        printf("Access Denied\n");
    }
    
    return 0;
}
```
