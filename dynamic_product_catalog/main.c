#include <stdio.h>
#include <stdlib.h>

struct Product
{
	char name[50];
	float price ;
	int quantity;

};

struct Catalog{
	struct Product *products;
	int num_products;
	int capacity;
};

int main(void){
 struct Catalog catalog = {NULL, 0, 2};
 catalog.products = malloc(catalog.capacity*sizeof(struct Product));
 if (catalog.products == NULL)
 {
     printf("Memory allocation failed\n");
     return 1;
 }
 // initialize input
 char input[100];
 int choice;

 do {
     printf("Product catalog menu\n");
     printf("1. Add product\n");
     printf("2. View all products\n");
     printf("3. Exit\n");
     printf("Enter your choice: ");
     fgets(input, sizeof(input), stdin);
      
     sscanf(input, "%d", &choice);
     getchar();

     // switch statement
     switch (choice) {
     case 1:
     printf("Enter the product name \n");
     fgets(catalog.products[catalog.num_products].name,sizeof(catalog.products[catalog.num_products].name),stdin);
     printf("Enter the product price \n");
     scanf("%f", &catalog.products[catalog.num_products].price);
     	getchar();
     printf("Enter the product quantity \n");
     scanf("%d", &catalog.products[catalog.num_products].quantity);
     getchar();
     catalog.num_products++;
     break;
     case 2:
     printf("Product catalog\n");
     for (int i = 0; i < catalog.num_products; i++)
     {
         printf("%s - $%.2f - %d\n", catalog.products[i].name, catalog.products[i].price, catalog.products[i].quantity);
     }
     break;
     case 3:
     printf("Exiting...\n");
     break;
     default:
     printf("Invalid choice\n");
     break;
     }

 }while (choice != 3);
	free (catalog.products);
return 0;
}
