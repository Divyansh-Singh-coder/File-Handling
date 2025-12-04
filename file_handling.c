#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp;
    char data[100];

    /* Open (or create) file for writing.
       Mode "w" creates file if not exists and truncates if exists. */
    fp = fopen("intern.txt", "w");
    if (fp == NULL) {
        printf("Error creating file!\n");
        return 1;
    }

    /* Write initial content to file */
    fprintf(fp, "Hello! This is initial content.\n");
    fclose(fp);
    printf("File created and data written successfully.\n");

    /* Open file for appending. Mode "a" writes at the end. */
    fp = fopen("intern.txt", "a");
    if (fp == NULL) {
        printf("Error opening file for appending!\n");
        return 1;
    }

    /* Append more content */
    fprintf(fp, "This is appended content.\n");
    fclose(fp);
    printf("Data appended successfully.\n");

    /* Open file for reading */
    fp = fopen("intern.txt", "r");
    if (fp == NULL) {
        printf("Error opening file for reading!\n");
        return 1;
    }

    printf("\n--- FILE CONTENT ---\n");

    /* Read line by line and print */
    while (fgets(data, sizeof(data), fp) != NULL) {
        printf("%s", data);
    }

    fclose(fp);
    return 0;
}
