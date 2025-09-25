# Lab Tasks 1-10

## Task 1: Expression Evaluation Step by Step

```c
#include <stdio.h>

int main(){
    int a, b;
    float result;
    printf("enter a: \n");
    scanf("%d", &a);
    printf("enter b: \n");
    scanf("%d", &b);
    printf("expression is a+b*(a-b)/2\n");
    result = (float)(a-b);
    printf("first step is brackets containing the expression a-b. the answer is %.2f \n", result);
    printf("second step is dividing the previous answer by 2. (a-b)/2 and the answer is %.2f \n", (result/2));
    printf("third step is multiplying the previous answer by b. b*(a-b)/2 and the answer is %.2f \n", (b*(result/2)));
    printf("last step is adding a to it. a+b*(a-b)/2. and the answer is %.2f \n", (a+b*(result/2)));
    return 0;
}
```

## Task 2: Logical Operators

```c
#include <stdio.h>
#include <stdbool.h>

int main(){
    int x, y;
    printf("enter x: \n");
    scanf("%d", &x);
    printf("enter y: \n");
    scanf("%d", &y);
    printf("(x>5) && (y<10). it is %s\n", ((x>5) && (y<10))?("true"):("false"));
    printf("(x==10) || (y==5). it is %s\n", ((x==10) || (y==5))?("true"):("false"));
    printf("!(x == y). it is %s\n", (!(x == y))?("true"):("false"));
    return 0;
}
```

## Task 3: Square Root using Math Library

```c
#include <stdio.h>
#include <math.h>

int main(){
    int num;
    printf("enter num to take square root of \n");
    scanf("%d", &num);
    printf("\nsqrt is %.2f\n", sqrt(num));
    return 0;
}
```

## Task 4: Ternary Operator for Comparison

```c
#include <stdio.h>

int main(){
    int m, n;
    printf("enter first num \n");
    scanf("%d", &m);
    printf("enter second num \n");
    scanf("%d", &n);
    (m>n)?printf("%d is greater than %d\n", m,n):printf("%d is greater than %d\n", n,m);
    return 0;
}
```

## Task 5: Nested Switch-Case for School Grading System

```c
#include <stdio.h>

int main() {
    int course;
    char grade;
    
    printf("Enter course number (1, 2, or 3): ");
    scanf("%d", &course);
    
    switch(course) {
        case 1:
            printf("Enter letter grade (A, B, C, D, or F): ");
            scanf(" %c", &grade);
            
            switch(grade) {
                case 'A':
                    printf("Excellent performance in Course 1!\n");
                    break;
                case 'B':
                    printf("Good performance in Course 1!\n");
                    break;
                case 'C':
                    printf("Average performance in Course 1!\n");
                    break;
                case 'D':
                    printf("Below average performance in Course 1!\n");
                    break;
                case 'F':
                    printf("Failed in Course 1!\n");
                    break;
                default:
                    printf("Invalid grade entered!\n");
            }
            break;
            
        case 2:
            printf("Enter letter grade (A, B, C, D, or F): ");
            scanf(" %c", &grade);
            
            switch(grade) {
                case 'A':
                    printf("Excellent performance in Course 2!\n");
                    break;
                case 'B':
                    printf("Good performance in Course 2!\n");
                    break;
                case 'C':
                    printf("Average performance in Course 2!\n");
                    break;
                case 'D':
                    printf("Below average performance in Course 2!\n");
                    break;
                case 'F':
                    printf("Failed in Course 2!\n");
                    break;
                default:
                    printf("Invalid grade entered!\n");
            }
            break;
            
        case 3:
            printf("Enter letter grade (A, B, C, D, or F): ");
            scanf(" %c", &grade);
            
            switch(grade) {
                case 'A':
                    printf("Excellent performance in Course 3!\n");
                    break;
                case 'B':
                    printf("Good performance in Course 3!\n");
                    break;
                case 'C':
                    printf("Average performance in Course 3!\n");
                    break;
                case 'D':
                    printf("Below average performance in Course 3!\n");
                    break;
                case 'F':
                    printf("Failed in Course 3!\n");
                    break;
                default:
                    printf("Invalid grade entered!\n");
            }
            break;
            
        default:
            printf("Invalid course number entered!\n");
    }
    
    return 0;
}
```

## Task 6: Nested Ternary Operator for Maximum Value

```c
#include <stdio.h>

int main() {
    int x, y, z, max;
    
    printf("Enter three integers (x, y, z): ");
    scanf("%d %d %d", &x, &y, &z);
    
    max = (x > y) ? ((x > z) ? x : z) : ((y > z) ? y : z);
    
    printf("The maximum of %d, %d, and %d is: %d\n", x, y, z, max);
    
    return 0;
}
```

## Task 7: Arithmetic Operators

```c
#include <stdio.h>

int main() {
    int a, b;
    
    printf("Enter two integers (a, b): ");
    scanf("%d %d", &a, &b);
    
    printf("Sum of %d and %d: %d\n", a, b, a + b);
    printf("Difference between %d and %d: %d\n", a, b, a - b);
    printf("Product of %d and %d: %d\n", a, b, a * b);
    printf("Quotient of %d and %d: %d\n", a, b, a / b);
    printf("Remainder when %d is divided by %d: %d\n", a, b, a % b);
    
    return 0;
}
```

## Task 8: Relational Operators

```c
#include <stdio.h>

int main() {
    int a, b;
    
    printf("Enter two integers (a, b): ");
    scanf("%d %d", &a, &b);
    
    printf("a == b: %d\n", a == b);
    printf("a > b: %d\n", a > b);
    printf("a < b: %d\n", a < b);
    printf("a != b: %d\n", a != b);
    printf("a >= b: %d\n", a >= b);
    printf("a <= b: %d\n", a <= b);
    
    return 0;
}
```

## Task 9: Use Bitwise Operators

```c
#include <stdio.h>

int main() {
    int a, b;
    
    printf("Enter two integers (a, b): ");
    scanf("%d %d", &a, &b);
    
    printf("a & b (Bitwise AND): %d\n", a & b);
    printf("a | b (Bitwise OR): %d\n", a | b);
    printf("a ^ b (Bitwise XOR): %d\n", a ^ b);
    printf("~a (Bitwise NOT): %d\n", ~a);
    printf("a << 1 (Shift left): %d\n", a << 1);
    printf("a >> 1 (Shift right): %d\n", a >> 1);
    
    return 0;
}
```

## Task 10: Nested If-Else for Largest of Three Numbers

```c
#include <stdio.h>

int main() {
    int x, y, z, largest;
    
    printf("Enter three integers (x, y, z): ");
    scanf("%d %d %d", &x, &y, &z);
    
    if (x >= y) {
        if (x >= z) {
            largest = x;
        } else {
            largest = z;
        }
    } else {
        if (y >= z) {
            largest = y;
        } else {
            largest = z;
        }
    }
    
    printf("The largest number is: %d\n", largest);
    
    return 0;
}
```
