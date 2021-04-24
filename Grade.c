#include <stdio.h>
int main()
{
    int grade; 
    printf("Enter grade: ");
    scanf("%d", &grade);
    if(grade >=85)
    {
        printf("Grade A");
    }
    else if(grade >= 70)
    {
        printf("Grade B");
    }
    else if(grade >= 55)
    {
        printf("Grade C");
    }
    else if(grade >= 40)
    {
        printf("Grade D");
    }
    else
    {
        printf("Grade F");
    }

    return 0;
}
