#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Global variables
char databaseName[100];
int recordCount = 0;  
int changeCount = 0;  

void printMenu();
void printRecords();
void addRecord();
void deleteRecord();
void printNumRecords();
void printDatabaseSize();
void printNumChanges(int print);

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Error: Need a database name\n");
        return 1;
    }

    strcpy(databaseName, argv[1]);

    int choice;
    
    while (1) {
        printMenu();
        printf("> ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: printRecords(); 
            break;
            case 2: addRecord(); 
            break;
            case 3: deleteRecord(); 
            break;
            case 4: printNumRecords(); 
            break;
            case 5: printDatabaseSize(); 
            break;
            case 6: printNumChanges(1); 
            break;
            case 7: 
                printf("bye.\n");
                return 0;
            default: 
                printf("??? invalid choice ???\n");
        }
    }

    return 0;
}

void printMenu() {
    printf("\n=== %s Menu ===\n", databaseName);
    printf("1. Print records\n");
    printf("2. Add record\n");
    printf("3. Delete last record\n");
    printf("4. Number of records\n");
    printf("5. Database size\n");
    printf("6. Changes count\n");
    printf("7. Exit\n");
}

void printRecords() {
    printf("\n(placeholder)\n");
}

void addRecord() {
    int partNumber;
    char partName[50];
    float partSize;
    char partMetric[10];
    float partCost;

    printf("\nPart Number: ");
    scanf("%d", &partNumber);
    printf("Part Name: ");
    scanf("%s", partName);
    printf("Part Size: ");
    scanf("%f", &partSize);
    printf("Size Unit (mm, lbs, etc): ");
    scanf("%s", partMetric);
    printf("Cost: ");
    scanf("%f", &partCost);

    printf("\nAdded:\n");
    printf("  #%d %s (%.2f %s) - $%.2f\n", partNumber, partName, partSize, partMetric, partCost);

    recordCount++;
    printNumChanges(0);
}

void deleteRecord() {
    if (recordCount > 0) {
        printf("\n(record deleted)\n");
        recordCount--;
        printNumChanges(0);
    } else {
        printf("\n(nothing to delete)\n");
    }
}

void printNumRecords() {
    printf("\nTotal records: %d\n", recordCount);
}

void printDatabaseSize() {
    printf("\n(total size)\n");
}

void printNumChanges(int print) {
    if (print) {
        printf("\nDatabase changed %d times\n", changeCount);
    } else {
        changeCount++;
        printf("\n(updated changes count: %d)\n", changeCount);
    }
}
