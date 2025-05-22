#include <stdio.h>

struct Book {
    char title[50];
    char author[50];
    float price;
};

int main() {
    struct Book book;
    FILE *file;

    // Input
    printf("Enter title: ");
    scanf("%s", book.title);
    
    printf("Enter author: ");
    scanf("%s", book.author);
    
    printf("Enter price: ");
    scanf("%f", &book.price);

    // Write to file
    file = fopen("book.txt", "w");
    fprintf(file, "%s %s %.2f", book.title, book.author, book.price);
    fclose(file);

    // Read from file
    file = fopen("book.txt", "r");
    fscanf(file, "%s %s %f", book.title, book.author, &book.price);
    fclose(file);

    // Display
    printf("\nSaved Book Details:\n");
    printf("Title : %s\n", book.title);
    printf("Author: %s\n", book.author);
    printf("Price : %.2f\n", book.price);

    return 0;
}

