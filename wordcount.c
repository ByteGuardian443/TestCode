#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
 
#define BUFSIZE 256
    
// This program prints the size of a specified file in bytes
int main(int argc, char** argv) {
    // Ensure that the user supplied exactly one command line argument
    if (argc != 2) { 
        fprintf(stderr, "Error: Please provide the address of a file and provide exactly one argument as an input.\n");
        return -1;
    }

    // Use stat function to get the size of the file
    struct stat fileStat;
    if (stat(argv[1], &fileStat) != 0) {
        fprintf(stderr, "Error: File does not exist.\n");
        return -1;
    }

    // Print the output in size of the file in bytes
    printf("File Size: %lld bytes\n", fileStat.st_size);

    return 0;
}
