#include <stdio.h>
#include <string.h>

#define MAX_NAMES 20
#define MAX_NAME_LENGTH 50

void bubbleSort(char names[][MAX_NAME_LENGTH], int n, int ascending) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if ((ascending && strcmp(names[j], names[j + 1]) > 0) ||
                (!ascending && strcmp(names[j], names[j + 1]) < 0)) {
                // Swap the names
                char temp[MAX_NAME_LENGTH];
                strcpy(temp, names[j]);
                strcpy(names[j], names[j + 1]);
                strcpy(names[j + 1], temp);
            }
        }
    }
}

int main() {
    char names[MAX_NAMES][MAX_NAME_LENGTH];
    int n = 0;

    // Read the names
    printf("Enter 20 names (one per line):\n");
    for (n = 0; n < MAX_NAMES; n++) {
        if (fgets(names[n], MAX_NAME_LENGTH, stdin) == NULL) {
            break;
        }
        // Remove the newline character from the end of the name
        names[n][strcspn(names[n], "\n")] = '\0';
    }

    // Sort the names
    char order[4];
    printf("Enter 'asc' for ascending order or 'desc' for descending order: ");
    scanf("%3s", order);

    bubbleSort(names, n, strcmp(order, "asc") == 0);

    // Print the sorted names
    printf("Sorted names:\n");
    for (int i = 0; i < n; i++) {
        printf("%s\n", names[i]);
    }

    return 0;
}