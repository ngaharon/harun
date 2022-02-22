/*County Library Management System
By Haron
MIT License
C89 compiler
*/


#include <stdio.h>
#include <stdlib.h>
int menu()

{
    int action;
    printf("select an action below\n");
    printf("1. Add new patron\n");
    printf("2. View all patrons\n");
    printf("3. View all book\n");
    printf("4. Add new book\n");
    printf("Your action\n");
    return action;



}
int main()
{
   printf("COUNTY LIBRARY SYSTEM\n");
   printf("WELCOME MR HARON\n");
   printf("You selected action%d",menu());
   return 0;

}
