#define MAX 10  // Maximum Number of students in the data base

typedef unsigned char uint8 ;
typedef char int8 ;
typedef unsigned short uint16 ;
typedef short int16 ;
typedef unsigned int uint32 ;
typedef int int32 ;
typedef enum {False , True} Bool ;

/* 
Data needed for every student included in the database :
(ID,year,course1 ID,course1 Grade,course2 ID,course2 Grade,course3 ID,course3 Grade)
*/

typedef struct SimpleDb
{
    uint32 Student_ID;
    uint32 Student_Year;

    uint32 Course1_ID;
    uint32 Course1_grade;

    uint32 Course2_ID;
    uint32 Course2_grade;

    uint32 Course3_ID;
    uint32 Course3_grade;

} student;

Bool SDB_IsFull();
uint8 SDB_GetUsedSize();
Bool SDB_AddEntry();
void SDB_DeletEntry(uint32 id);
Bool SDB_ReadEntry(uint32 id);
void SDB_GetList();
Bool SDB_IsIdExist(uint32 id);
void SDB_APP();
void SDB_action(uint8 choice);

student data_base[MAX] ;
extern int top  ;   // indicating the available position for including data
extern int count  ; // counting the current number of students included in the database
extern int choice ; // the user's choice for implementing certain task
