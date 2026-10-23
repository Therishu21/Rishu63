#include <stdio.h>

struct Book
{
    char title[50];
    char author[50];
    float price;
};

int main()
{
    struct Book b[50];
    int n, i, costly = 0;
    float total = 0;

    printf("Enter number of books: ");
    scanf("%d", &n);

    if (n < 1 || n > 50)
        return 0;

    for (i = 0; i < n; i++)
    {
        printf("Enter title, author and price: ");
        scanf("%49s %49s %f",
              b[i].title, b[i].author, &b[i].price);

        total += b[i].price;

        if (i == 0 || b[i].price > b[costly].price)
            costly = i;
    }

    printf("\nCost list:\n");

    for (i = 0; i < n; i++)
        printf("%s %s %.2f\n",
               b[i].title, b[i].author, b[i].price);

    printf("Most expensive: %s (%.2f)\n",
           b[costly].title, b[costly].price);

    printf("Average = %.2f\n", total / n);

    return 0;
}
