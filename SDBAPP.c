#include<stdio.h>
#include<stdlib.h>
#include"SDB.h"

int choice ;

void SDB_APP() // function that include superloop to view the choices for the user and operate unitll the user decide to choose exit
{
   while(1)
   {
     printf("1.Add Entry\n2.Used size in database\n3.Read Student data\n4.Get the list of all student IDs\n5.To check if ID existed\n6.To delete student data\n7.To check if database is full\n8.Exit\n\n"); 
     printf("Enter your choice : ");
     scanf("%d",&choice);
     SDB_action(choice);
   }

}

void SDB_action(uint8 choice) // implement the needed actions based on the user's choice 
{
        uint32 id;
        switch (choice)
        {
        case 1 : 

        if(SDB_AddEntry())
        {
            printf("Done\n\n");
            break;
        }
        else
        {
            printf("Database is Full\n\n");
        }
        break;

        case 2 : printf("%d\n",SDB_GetUsedSize());
        break;

        case 3 : 

        printf("Enter Student ID : ");
        scanf("%d",&id);
        if(SDB_ReadEntry(id))
        {
            printf("Done\n");
        }
        else
        {
            printf("Not Found\n");
        }
        break;

        case 4 : SDB_GetList();
        break;

        case 5 : 

        printf("Enter Student ID : ");
        scanf("%d",&id);
        if(SDB_IsIdExist(id))
        {
            printf("ID exists\n");
        }
        else
        {
            printf("Not Found\n");
        }
        break;

        case 6 : 

        printf("Enter Student ID : ");
        scanf("%d",&id);
        SDB_DeletEntry(id);
        printf("ID %d is deleted\n",id);
        break;

        case 7 : 
        SDB_IsFull();
        if(SDB_IsFull())
        {
            printf("Database is Full\n");
        }
        else
        {
            printf("Not Full\n");
        }
        break;

        case 8 : exit(1);
        break;

        default : printf("No Valid Choice") ;
        }
    
}