#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int generate_random_number(int max_number) {
    return rand() % (max_number + 1);
}

char generate_operator() {
    char operators[] = {'+', '-', '*', '/'};
    int index = rand() % 4;
    return operators[index];
}

void generate_expression(int max_number, char operato, int has_decimal) {
    int num1 = generate_random_number(max_number);
    int num2 = generate_random_number(max_number);
    
    if (operato == '/' && num2 == 0) {
        num2 = 1; // avoid division by zero
    }
    
    if (has_decimal) {
        printf("%d %c %d = %.2f\n", num1, operato, num2, (float)num1 / num2);
    } else {
        printf("%d %c %d = %d\n", num1, operato, num2, num1 / num2);
    }
}

int main() {
    srand(time(NULL));
    
    int num_questions, max_number_limit, has_parentheses, has_decimal;
    char operato;
    
    printf("Enter the number of questions: ");
    scanf("%d", &num_questions);
    
    printf("Enter the maximum number limit: ");
    scanf("%d", &max_number_limit);
    
    printf("Choose an operator (+, -, *, /): ");
    getchar(); // consume newline
    scanf("%c", &operato);
    
    printf("Do you want parentheses? (1 for yes, 0 for no): ");
    scanf("%d", &has_parentheses);
    
    printf("Do you want decimal answers? (1 for yes, 0 for no): ");
    scanf("%d", &has_decimal);
    
    for (int i = 0; i < num_questions; i++) {
        if (has_parentheses) {
            printf("(");
        }
        
        generate_expression(max_number_limit, operato, has_decimal);
        
        if (has_parentheses) {
            printf(")");
        }
    }
    system("pause");
    return 0;
}
