// Write a C program to demonstrate relational, logical, bitwise, assignment, and increment/decrement operators using nested switch.

#include <stdio.h>

int main() 
{
    int a, b, choice, subChoice, shift;
    printf("Enter two integers (a b): ");
    scanf("%d %d", &a, &b);

    printf("\nChoose an operator category:\n");
    printf("1. Relational\n2. Logical\n3. Bitwise\n4. Assignment\n5. Increment/Decrement\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) 
    {
        case 1: 
            printf("\nRelational Operators:\n");
            printf("1. a > b\n2. a < b\n3. a >= b\n4. a <= b\n5. a == b\n6. a != b\n");
            printf("Choose: ");
            scanf("%d", &subChoice);
            switch(subChoice) 
            {
                case 1: 
                    printf("%d > %d = %d\n", a, b, a > b); 
                    break;
                case 2: 
                    printf("%d < %d = %d\n", a, b, a < b); 
                    break;
                case 3: 
                    printf("%d >= %d = %d\n", a, b, a >= b); 
                    break;
                case 4: 
                    printf("%d <= %d = %d\n", a, b, a <= b); 
                    break;
                case 5: 
                    printf("%d == %d = %d\n", a, b, a == b); 
                    break;
                case 6: 
                    printf("%d != %d = %d\n", a, b, a != b); 
                    break;
                default: 
                    printf("Invalid choice!\n");
            }
            break;

        case 2: 
            printf("\nLogical Operators:\n");
            printf("1. (a>0) && (b>0)\n2. (a>0) || (b>0)\n3. !(a>0)\n4. !(b>0)\n");
            printf("Choose: ");
            scanf("%d", &subChoice);
            switch(subChoice) 
            {
                case 1: 
                    printf("(%d>0) && (%d>0) = %d\n", a, b, (a>0)&&(b>0)); 
                    break;
                case 2: 
                    printf("(%d>0) || (%d>0) = %d\n", a, b, (a>0)||(b>0)); 
                    break;
                case 3: 
                    printf("!(%d>0) = %d\n", a, !(a>0)); 
                    break;
                case 4: 
                    printf("!(%d>0) = %d\n", b, !(b>0)); 
                    break;
                default: 
                    printf("Invalid choice!\n");
            }
            break;

        case 3: 
            printf("\nBitwise Operators:\n");
            printf("1. a & b\n2. a | b\n3. a ^ b\n4. ~a\n5. ~b\n6. a << shift\n7. a >> shift\n");
            printf("Choose: ");
            scanf("%d", &subChoice);
            switch(subChoice) 
            {
                case 1: 
                    printf("%d & %d = %d\n", a, b, a & b); 
                    break;
                case 2: 
                    printf("%d | %d = %d\n", a, b, a | b); 
                    break;
                case 3: 
                    printf("%d ^ %d = %d\n", a, b, a ^ b); 
                    break;
                case 4: 
                    printf("~%d = %d\n", a, ~a); 
                    break;
                case 5: 
                    printf("~%d = %d\n", b, ~b); 
                    break;
                case 6: 
                    printf("Enter shift count: "); 
                    scanf("%d", &shift);
                    printf("%d << %d = %d\n", a, shift, a << shift); 
                    break;
                case 7: 
                    printf("Enter shift count: "); 
                    scanf("%d", &shift);
                    printf("%d >> %d = %d\n", a, shift, a >> shift); 
                    break;
                default: 
                    printf("Invalid choice!\n");
            }
            break;

        case 4:
        {
            int c = a;
            printf("\nAssignment Operators on a copy c of a:\n");
            printf("1. c = b\n2. c += b\n3. c -= b\n4. c *= b\n5. c /= b\n6. c %%= b\n");
            printf("Choose: ");
            scanf("%d", &subChoice);
            switch(subChoice) 
            {
                case 1: 
                    c = b; 
                    printf("c = %d\n", c); 
                    break;
                case 2: 
                    c += b; 
                    printf("c += b => %d\n", c); 
                    break;
                case 3: 
                    c -= b; 
                    printf("c -= b => %d\n", c); 
                    break;
                case 4: 
                    c *= b; 
                    printf("c *= b => %d\n", c); 
                    break;
                case 5: 
                    if(b!=0) 
                    {
                        c/=b; 
                        printf("c /= b => %d\n", c);
                    } 
                    else 
                        printf("Cannot divide by 0\n"); 
                    break;
                case 6: 
                    if(b!=0) 
                    {
                        c%=b; 
                        printf("c %%= b => %d\n", c);
                    } 
                    else 
                        printf("Cannot modulo by 0\n"); 
                    break;
                default: 
                    printf("Invalid choice!\n");
            }
        }
        break;

        case 5: 
            printf("\nIncrement/Decrement Operators:\n");
            printf("1. ++a\n2. a++\n3. --b\n4. b--\nChoose: ");
            scanf("%d", &subChoice);
            switch(subChoice) 
            {
                case 1: 
                    printf("++a = %d\n", ++a); 
                    break;
                case 2: 
                    printf("a++ = %d (after a = %d)\n", a++, a); 
                    break;
                case 3: 
                    printf("--b = %d\n", --b); 
                    break;
                case 4: 
                    printf("b-- = %d (after b = %d)\n", b--, b); 
                    break;
                default: 
                    printf("Invalid choice!\n");
            }
            break;

        default: 
            printf("Invalid main choice!\n");
    }

    return 0;
}
