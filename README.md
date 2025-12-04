# File-Handling

*COMPANY: CODETECH IT SOLUTIONS

*NAME: DIVYANSH

*INTERN ID: CT04DR1854

*DOMAIN: C PROGRAMMING

*DURATION: 4 WEEKS

*MENTOR: NEELA SANTOSH

*ABOUT TASK 1:

File handling in C is a way to store data permanently on a computer. Normally, when we run a program, the data is stored in memory (RAM). When the program ends, all the data is lost. Files allow us to save data on the hard drive so that it can be used later. This makes programs more useful for real-world applications.

There are two main types of files: text files and binary files. Text files store information as readable characters. Example: .txt files. Binary files store data in a non-readable format. Example: .dat files. Text files are easy to read and write manually, while binary files are faster for storing large data.

File handling is important because it helps programs store, retrieve, and manage data. Without files, programs can only use temporary memory. Files are used in student records, banking systems, inventory management, and games.

In C, we use the stdio.h library to handle files. The main operations are opening, writing, reading, appending, and closing files. To open a file, we use fopen() function. It requires a file name and a mode. Common modes are "r" for reading, "w" for writing, "a" for appending, and combinations like "r+" for reading and writing.

After opening a file, we should always check if it opened successfully. If not, the program should show an error message. Writing to a file can be done using fprintf() or fputs(). These functions add data to the file. Reading from a file can be done using fscanf() for formatted input or fgets() to read a line.

Appending is a useful operation when we want to add data without deleting existing content. Using "a" mode, new information is added at the end of the file. Closing a file using fclose() is very important. It ensures that all data is saved and memory is released properly.

A simple example is creating a file called intern.txt. First, the program writes "Hello! This is initial content." to the file. Then it appends "This is appended content.". Finally, it reads the file and prints the contents on the screen. This shows all basic operations in one program.

File handling is very useful in practical applications. It allows programs to manage large amounts of data permanently. It is widely used in schools, banks, shops, games, and software development. Beginners should practice writing, reading, and appending files to understand these concepts well.

Overall, file handling makes C programs more powerful and useful. It is an essential skill for any programmer who wants to create real-world applications. Learning file handling also prepares students for larger projects where data storage and retrieval are needed.

#OUTPUT IMAGES:- 

