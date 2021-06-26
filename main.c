/*
 This code gets an arabic number and converts to a roman number
 */

#include <stdio.h>

int main() {
    
    int arabicNumber, thousands, hundreds, tens, units;
    
    int i; // general counter to run check amount of repeated roman letters to be printed
    
    int tempNumber; // Temporary int, only used for calculating the 5-8, 50-80 and 500-800 cases
    
    // getting the number
    printf("\nEnter an integer: ");
    scanf("%d", &arabicNumber);
    
    // User-friendly output
    printf("\n%d in roman numbers is ", arabicNumber);
    
    // Treating number to convert it to roman
    // We must check the amount of thousands, hundreds, tens and units, and we will do so by a series of divisions and subtractions
    
    // Checking the thousands
    thousands = arabicNumber / 1000;
    
    for (i = 0; i < thousands; i++)
        printf("M");
    
    // Subtracting the thousands
    arabicNumber = arabicNumber - (thousands * 1000);
    
    // Checking the hundreds
    hundreds = arabicNumber / 100;
    
        // 900 = CM
        if (hundreds == 9)
            printf("CM");
        
        // 500 to 800 = D to DCCC
        else if (hundreds >= 5)
        {
            printf("D");
            tempNumber = hundreds - 5;
            for (i = 0; i < hundreds; i++)
                printf("C");
        }
    
        // 400 = CD
        else if (hundreds == 4)
            printf("CD");
    
        // 100 to 300 = C to CCC
        else
        {
            for (i = 0; i < hundreds; i++)
                printf("C");
        }
    
    // subtracting the  hundreds
    arabicNumber = arabicNumber - (hundreds * 100);
    
    // Checking the tens
    tens = arabicNumber / 10;
    
        // 90 = XC
        if (tens == 9)
            printf("XC");
        
        // 50 to 80 = L to LXXX
        else if (tens >= 5)
        {
            printf("L");
            tempNumber = tens - 5;
            for (i = 0; i < tempNumber; i++)
                printf("C");
        }
    
        // 400 = XL
        else if (tens == 4)
            printf("CL");
    
        // 100 to 300 = X to XXX
        else
        {
            for (i = 0; i < tens; i++)
                printf("X");
        }
    
    // subtracting the  tens
    arabicNumber = arabicNumber - (tens * 10);
    
    // Checking the units
    units = arabicNumber / 1;
      
        // 9 = IX
        if (units == 9)
            printf("IX");
        
        // 5 to 8 = V to VIII
        else if (units >= 5)
        {
            printf("V");
            tempNumber = units - 5;
            for (i = 0; i < tempNumber; i++)
                printf("I");
        }
    
        // 4 = IV
        else if (units == 4)
            printf("IV");
    
        // 1 to 3 = I to III
        else
        {
            for (i = 0; i < units; i++)
                printf("I");
        }
    
    // Extra line-breaks
    printf("\n\n");
    
    return 0;
}
