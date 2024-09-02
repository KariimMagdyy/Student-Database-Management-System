#include<stdio.h>
#include"SDB.h"

int top = -1 ;
int count = 0 ;

Bool SDB_IsFull()       // check if the database is full or not
{
  if (count == 10)
  {
    return True;
  }
  else
  {
    return False;
  }
}

uint8 SDB_GetUsedSize()      //  return the number of students included in the database
{
  return count;
}

Bool SDB_AddEntry()      // Add the data of new student and check if the process is done 
{
  if(SDB_IsFull())
  {
    return False;
  }
  else
  {
    top ++ ;
    count ++ ;
    printf("Enter Required Student Data :\n\n");
    printf("ID : ");
    scanf("%d",&data_base[top].Student_ID);
    printf("Student Year : ");
    scanf("%d",&data_base[top].Student_Year);
    printf("Course 1 ID : ");
    scanf("%d",&data_base[top].Course1_ID);
    printf("Course 1 Grade : ");
    scanf("%d",&data_base[top].Course1_grade);
    printf("Course 2 ID : ");
    scanf("%d",&data_base[top].Course2_ID);
    printf("Course 2 Grade : ");
    scanf("%d",&data_base[top].Course2_grade);
    printf("Course 3 ID : ");
    scanf("%d",&data_base[top].Course3_ID);
    printf("Course 3 Grade : ");
    scanf("%d",&data_base[top].Course3_grade);

    return True;
    
  }
}

void SDB_DeletEntry(uint32 id)             // delete the student data from the database based on the ID
{
  for(int i=top ; i>=0 ; i--)
  {
    if( data_base[i].Student_ID == id )
    {
        top -- ;
        count -- ;
        for(int j = i ; j <= count ; j++)
        {
            data_base[j] = data_base[j+1];
        }
        break;
    }
  }
}

Bool SDB_ReadEntry(uint32 id)        // Display the student data based on the ID
{
  int found = 0;
  for(int i=top ; i>=0 ; i--)
  {
    if( data_base[i].Student_ID == id )
    {
        found = 1;
        printf("ID : %d\nStudent Year : %d\nCourse 1 ID : %d  Course 1 Grade : %d\nCourse 2 ID : %d  Course 2 Grade : %d\nCourse 3 ID : %d  Course 3 Grade : %d\n\n",data_base[i].Student_ID,data_base[i].Student_Year,data_base[i].Course1_ID,data_base[i].Course1_grade,data_base[i].Course2_ID,data_base[i].Course2_grade,data_base[i].Course3_ID,data_base[i].Course3_grade);
        break;
    }
  }
  if ( found == 0 )
  {
    return False;
  }
  else
  {
    return True;
  }

}

void SDB_GetList()           // Check the number of included IDs and list all the included IDs in the database
{
  printf("Number of IDs in the Database : %d\n",count);
  printf("List of All IDs :\n");
  for(int i=top ; i>=0 ; i--)
  {
    printf("%d",data_base[i].Student_ID);
    printf("\n");
  }

}

Bool SDB_IsIdExist(uint32 id)   //   Check if a certain student ID exists or not
{
  int found = 0;
  for(int i=top ; i>=0 ; i--)
  {
    if( data_base[i].Student_ID == id )
    {
        found = 1;
        break;
    }
  }
  if(found == 0)
  {
    return False;
  }
  else
  {
    return True;
  }
}