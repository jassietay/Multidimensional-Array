#include<stdio.h>
#include<stdlib.h>
int main (){
    int myGrades[] = {88,89,80};  //RECAP: single dimensional Array is like this line of code

    int const columns = 3;
    int Grades[][columns] = {
        {88, 89, 90},
        {64, 78, 89}
    };                              //Multi-dimensional array 'Grades[R][C]' where R=Rows & C=Columns

    printf("%d ", Grades[1][2]);
    Grades[1][2] = 30;
    printf("%d ",Grades[1][2]);

    return 0;
}
