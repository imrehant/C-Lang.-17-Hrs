#include <stdio.h>
#include <stdlib.h>

// Function to display the to-do list
void displayToDoList(FILE *file) {
    char task[100];
    rewind(file);  // Move the file pointer to the beginning

    printf("\n----- To-Do List -----\n");

    // Read tasks from the file and display them
    while (fgets(task, sizeof(task), file) != NULL) {
        printf("%s", task);
    }

    printf("----------------------\n\n");
}

// Function to add a task to the to-do list
void addTask(FILE *file) {
    char task[100];
    printf("Enter the task: ");
    fflush(stdin);
    fgets(task, sizeof(task), stdin);

    // Write the task to the file
    fputs(task, file);

    printf("Task added successfully!\n");
}

// Function to mark a task as complete
void markComplete(FILE *file) {
    char task[100];
    char completeTask[100];
    int taskFound = 0;

    printf("Enter the task to mark as complete: ");
    fflush(stdin);
    fgets(completeTask, sizeof(completeTask), stdin);

    // Create a temporary file to store updated tasks
    FILE *tempFile = fopen("temp.txt", "w");

    // Read tasks from the original file, mark the specified task as complete, and write to the temporary file
    while (fgets(task, sizeof(task), file) != NULL) {
        if (strcmp(task, completeTask) == 0) {
            printf("Task marked as complete: %s", task);
            taskFound = 1;
        } else {
            fputs(task, tempFile);
        }
    }

    if (!taskFound) {
        printf("Task not found in the to-do list.\n");
    }

    // Close both files
    fclose(file);
    fclose(tempFile);

    // Remove the original file
    remove("todo.txt");

    // Rename the temporary file to the original file
    rename("temp.txt", "todo.txt");
}

int main() {
    FILE *file = fopen("todo.txt", "a+");  // Open the file in append and read mode

    if (file == NULL) {
        perror("Error opening file");
        return 1;
    }

    int choice;

    do {
        printf("1. Display To-Do List\n");
        printf("2. Add Task\n");
        printf("3. Mark Task as Complete\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                displayToDoList(file);
                break;
            case 2:
                addTask(file);
                break;
            case 3:
                markComplete(file);
                break;
            case 4:
                printf("Exiting the program.\n");
                break;
            default:
                printf("Invalid choice. Please enter a valid option.\n");
        }

    } while (choice != 4);

    fclose(file);

    return 0;
}
