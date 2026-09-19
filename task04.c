#include <stdio.h>

int main() {
    int marks;

    printf("Enter marks: ");
    scanf("%d", &marks);

    printf("%s\n", (marks >= 50) ? "Pass" : "Fail");

    return 0;
}
