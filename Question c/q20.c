#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file_pointer;
    char data[100]; // Assuming a maximum of 100 characters for data

    // Creating a file
    file_pointer = fopen("example.txt", "w+");
    if (file_pointer == NULL) {
        printf("Error: Unable to create the file.\n");
        return 1;
    }

    // Writing initial data to the file
    printf("Enter data to write into the file: ");
    fgets(data, sizeof(data), stdin);
    fprintf(file_pointer, "%s", data);

    // Resetting file pointer to beginning of the file
    rewind(file_pointer);

    // Reading data from the file
    printf("\nReading from the file:\n");
    fgets(data, sizeof(data), file_pointer);
    printf("%s", data);

    // Closing the file
    fclose(file_pointer);

    return 0;
}
