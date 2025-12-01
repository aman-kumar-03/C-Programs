/*
Implement Relational, Logical, Bitwise, Assignment, Increment, and Decrement
operators using a nested switch-case structure.
*/

#include <stdio.h>

int main() 
{
    int choice, a, b;

    printf("1. Relational\n2. Logical\n3. Bitwise\n4. Assignment\n5. Increment/Decrement\n");
    printf("Enter operator group choice: ");
    scanf("%d", &choice);

    switch (choice) 
    {
        case 1:  
            printf("Enter two numbers: ");
            scanf("%d %d", &a, &b);
            printf("1.<  2.>  3.<=  4.>=  5.==  6.!=\n");
            scanf("%d", &choice);

            switch (choice) 
            {
                case 1: printf("%d\n", a < b); break;
                case 2: printf("%d\n", a > b); break;
                case 3: printf("%d\n", a <= b); break;
                case 4: printf("%d\n", a >= b); break;
                case 5: printf("%d\n", a == b); break;
                case 6: printf("%d\n", a != b); break;
            }
            break;

        case 2:  
            printf("Enter two numbers: ");
            scanf("%d %d", &a, &b);
            printf("1.&&  2.||  3.!\n");
            scanf("%d", &choice);

            switch (choice) 
            {
                case 1: printf("%d\n", a && b); break;
                case 2: printf("%d\n", a || b); break;
                case 3: printf("%d\n", !a); break;
            }
            break;

        case 3:  
            printf("Enter two numbers: ");
            scanf("%d %d", &a, &b);
            printf("1.&  2.|  3.^  4.<<  5.>>\n");
            scanf("%d", &choice);

            switch (choice) 
            {
                case 1: printf("%d\n", a & b); break;
                case 2: printf("%d\n", a | b); break;
                case 3: printf("%d\n", a ^ b); break;
                case 4: printf("%d\n", a << 1); break;
                case 5: printf("%d\n", a >> 1); break;
            }
            break;

        case 4: 
            printf("Enter a number: ");
            scanf("%d", &a);
            printf("1.=  2.+=  3.-=  4.*=  5./=\n");
            scanf("%d", &choice);

            switch (choice) 
            {
                case 1: b = a; printf("%d\n", b); break;
                case 2: a += 5; printf("%d\n", a); break;
                case 3: a -= 5; printf("%d\n", a); break;
                case 4: a *= 5; printf("%d\n", a); break;
                case 5: a /= 5; printf("%d\n", a); break;
            }
            break;

        case 5: 
            printf("Enter a number: ");
            scanf("%d", &a);
            printf("1.++a  2.a++  3.--a  4.a--\n");
            scanf("%d", &choice);

            switch (choice) 
            {
                case 1: printf("%d\n", ++a); break;
                case 2: printf("%d\n", a++); printf("After: %d\n", a); break;
                case 3: printf("%d\n", --a); break;
                case 4: printf("%d\n", a--); printf("After: %d\n", a); break;
            }
            break;
    }

    return 0;
}