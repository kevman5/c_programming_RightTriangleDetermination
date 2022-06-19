#include <stdio.h>

int main(void)
{
    int side1, side2, side3, total;

    printf("Enter the hypotenuse (or the longest) side: ");
    scanf("%d",&side3);

    printf("Enter side 1: \n");
    scanf ("%d",&side1);
    printf("Enter side 2: \n");
    scanf ("%d",&side2);

    total = side1 * side1 + side2 * side2;


    if (total != side3)
    {

        printf("Your Triangle is not a Right Triangle!! Your side's sum was: \n %d",total);
    }
    else

        printf("Your Triangle is a Right Triangle! \n %d is the length of your slope",total);



}
