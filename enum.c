// enum desingElements {
//     ITALICS = 1;
//     BOLD = 2;
//     STRIKE = 3;
// }

#include <stdio.h>

enum weekDays{Sunday, Monday, Tuesday, Wenesday, Thursday, Friday, Saturday};

int main()
{
    enum weekDays today;
    today = Wenesday;
    printf("Day %d", today+1);
    return 0;

}
