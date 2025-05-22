#include <stdio.h>

struct book{
        char title[20];  
          char author[20];  
            int price;
        };

int main (){
    struct book liv;
        FILE *fp;
printf("enter the book title: ");
    fgets(liv.title,20,stdin);
    
printf("enter the book author: ");
    fgets(liv.author,20,stdin);
    
printf("enter the book price: shs ");
    scanf("%d",&liv.price);

printf("\n  Books details\n");
printf("book Title : %s", liv.title);
printf("The Author : %s", liv.author);
printf("Book Price : shs %d", liv.price);

fp = fopen("book.txt", "w");
    if(fp == NULL) {
        printf("INVALID FILE");
        return 1;
    }
    fprintf(fp,"%s %s %d",liv.title, liv.author, liv.price);
    fclose(fp);

   struct book mine;
fp = fopen("book.txt", "r");
    if(fp == NULL) {
        printf("invalid file");
        return 1;
    }
    fgets(mine.title,20,fp);
    fgets(mine.author,20,fp);
    fscanf(fp,"%d", &mine.price);
    fclose(fp); 

printf("\n\n saved books details");
printf("Book Title : %s", mine.title);
printf("The Author : %s", mine.author);
printf("Book Price : shs%d", mine.price);

    return 0;
}

#include <stdio.h>

struct book{
        char title[20];  
          char author[20];  
            int price;
        };

int main (){
    struct book liv;
        FILE *fp;
printf("enter the book title: ");
    fgets(liv.title,20,stdin);
    
printf("enter the book author: ");
    fgets(liv.author,20,stdin);
    
printf("enter the book price: shs ");
    scanf("%d",&liv.price);

printf("\n  Books details\n");
printf("book Title : %s", liv.title);
printf("The Author : %s", liv.author);
printf("Book Price : shs %d", liv.price);

fp = fopen("book.txt", "w");
    if(fp == NULL) {
        printf("INVALID FILE");
        return 1;
    }
    fprintf(fp,"%s %s %d",liv.title, liv.author, liv.price);
    fclose(fp);

   struct book mine;
fp = fopen("book.txt", "r");
    if(fp == NULL) {
        printf("invalid file");
        return 1;
    }
    fgets(mine.title,20,fp);
    fgets(mine.author,20,fp);
    fscanf(fp,"%d", &mine.price);
    fclose(fp); 

printf("\n\n saved books details");
printf("Book Title : %s", mine.title);
printf("The Author : %s", mine.author);
printf("Book Price : shs%d", mine.price);

    return 0;
}