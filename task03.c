#include <stdio.h>

int main() {
    int department, section;

    printf("Select your department:\n");
    printf("1. Computer Science\n");
    printf("2. Information Technology\n");
    printf("3. Artificial Intelligence\n");
    printf("Enter your choice: ");
    scanf("%d", &department);

    switch (department) {
        case 1:
            printf("\nSelected Department: Computer Science\n");
            printf("\nSelect your section:\n");
            printf("1. Section A\n");
            printf("2. Section B\n");
            printf("Enter your choice: ");
            scanf("%d", &section);

            switch (section) {
                case 1:
                    printf("Selected Section: Section A\n");
                    break;

                case 2:
                    printf("Selected Section: Section B\n");
                    break;

                default:
                    printf("Invalid section choice!\n");
                    return 0;
            }
                    break;

        case 2:
            printf("\nSelected Department: Information Technology\n");
            printf("\nSelect your section:\n");
            printf("1. Section A\n");
            printf("2. Section B\n");
            printf("Enter your choice: ");
            scanf("%d", &section);

            switch (section) {
                case 1:
                    printf("Selected Section: Section A\n");
                    break;

                case 2:
                    printf("Selected Section: Section B\n");
                    break;

                default:
                    printf("Invalid section choice!\n");
                    return 0;
    }
            break;

        case 3:
            printf("\nSelected Department: Artificial Intelligence\n");
            printf("\nSelect your section:\n");
            printf("1. Section A\n");
            printf("2. Section B\n");
            printf("Enter your choice: ");
            scanf("%d", &section);

            switch (section) {
                case 1:
                    printf("Selected Section: Section A\n");
                    break;

                case 2:
                    printf("Selected Section: Section B\n");
                    break;

                default:
                    printf("Invalid section choice!\n");
                    return 0;
            }
                    break;

                default:
                    printf("\nInvalid department choice!\n");
                    return 0;
    }


    return 0;
}
