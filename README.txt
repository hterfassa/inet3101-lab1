Lab 1
Author: Haroms Terfassa

What This Program Does
This is a simple C program that acts like a basic database. It lets users add, delete, and print records using a menu. The database name is passed as a command-line argument when running the program.

Menu Options
The program shows this menu:

markdown
Copy
Edit
1. Print all records  
2. Add a record  
3. Delete the last record  
4. Print the number of records  
5. Print database size  
6. Print number of changes  
7. Exit  
Users pick an option, and the program does whatever that option says.

Functions (What Each Option Does)
1. printRecords()
Does: Prints a message saying this function was called.
Input: Nothing.
Output: "You have entered the Print all records function"
2. addRecord()
Does: Asks for part details (number, name, size, etc.), then prints them.
Input: User enters data.
Output: Displays the entered info.
3. deleteRecord()
Does: Prints a message saying the function was called.
Input: None.
Output: "You have entered the delete last record function"
4. printNumRecords()
Does: Prints the number of records stored.
Input: None.
Output: "You have entered the Print number of records function"
5. printDatabaseSize()
Does: Prints a message saying this function was called.
Input: None.
Output: "You have entered the Print database size function"
6. printNumChanges(bool print)
Does: Keeps track of how many times the database has been modified.
Input: print is either true (prints the count) or false (increments the count).
Output:
If print is true → "Database modified X times"
If print is false → Updates the count.
Files in This Project
lab1.c → The actual C program.
README.txt → This document, but in plain text.