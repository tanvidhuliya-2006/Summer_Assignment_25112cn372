#include<stdio.h>
#include<string.h>
int main()
{
    int bookid[100];
    char booktitle[100][50];
    char bookauthor[100][50];
    int c=0;
    int choice=0;
    int searchid=0;
    int found=0;
    int i=0;

    while(1)
    {
        printf("\n1. Add new book");
        printf("\n2. Display all books");
        printf("\n3. Search book by id");
        printf("\n4. Exit");

        printf("Enter your choice (1-4)");
        scanf("%d ",&choice);

        if(choice==1)
        {
            if(c<100)
            {
                printf("\nEnter book id");
                scanf("%d ",&bookid[c]);
                getchar();

                printf("Enter book title");
                fgets(bookauthor[c],50,stdin);
                booktitle[c][strcspn(booktitle[c],"\n")]='\0';

                printf("Enter book author");
                fgets(bookauthor[c],50,stdin);
                bookauthor[c][strcspn(bookauthor[c],"\n")]='\0';
                
                c=c+1;
                printf("\nBook added successfully");
            }
            else
            {
                printf("\nLibrary is full");
            }
        }
        else if(choice==2)
        {
            if(c==0)
            {
                printf("\nNo books available");
            }
            else
            {
                printf("\n%d %s %s","Book id" , "Title" , "Author");
                i=0;
                while(i<c)
                {
                printf("\n%d %s %s",bookid[i],booktitle[i],bookauthor[i]);
                i=i+1;
                }
            }
        }
        else if(choice==3)
        {
            if(c==0)
            {
                printf("\nLibrary is empty");
            }
            else
            {
                printf("\nEnter book id to search");
                scanf("%d ",&searchid);
                
                found=0;
                i=0;
                while(i<c)
                {
                    if(bookid[i]==searchid)
                    {
                        printf("\nBook found");
                        printf("\nID %d",bookid[i]);
                        printf("\nTitle %s",booktitle[i]);
                        printf("\nAuthor %s",bookauthor[i]);
                        found=1;
                    }
                    i=i+1;
                }
                if(found==0)
                {
                    printf("\n Book id %d not found in the library",searchid);
                }
            }
        }
        else if(choice==4)
        {
            printf("\nExiting program");
        }
        else
        {
            printf("\nInvalid option");
        }
    }
    return 0;
}