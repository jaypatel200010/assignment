//25.Accept 5 expense from user and find average of expense
#include<stdio.h>
int main() 
{
    int expense1,expense2,expense3,expense4,expense5,totalexpense,average;
    //Accepting 5 expenses from user
    printf("Enter expense 1: ");
    scanf("%d", &expense1); 
    printf("Enter expense 2: ");
    scanf("%d", &expense2);
    printf("Enter expense 3: ");
    scanf("%d", &expense3);
    printf("Enter expense 4: ");
    scanf("%d", &expense4); 
    printf("Enter expense 5: ");
    scanf("%d", &expense5);
//    Calculating total expense
    totalexpense = expense1 + expense2 + expense3 + expense4 + expense5;
//    Calculating Average expense
    average = totalexpense / 5;
    printf("\nTotal Expense: %d\n", totalexpense);
    printf("Average Expense: %d\n", average);
}
