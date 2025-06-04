// Include <______.h> = Headers ie. stdio.h = standerd input output headers.

#include <stdio.h>
#include <stdbool.h>
#include <time.h>
#include <stdlib.h>

// int = integer
int main () {

// Basic Printf with constant and intiger usage. added  — 2/19/25
//------------------------------------------------------------------------------------------

    // Can be changed with another num by doing example = myNum;
    int myNum;
    myNum = 18;

        // basic printf.
        // \n = newline. \n\n = newline with break in the middle ie. "yo\n\n"  
        printf("Hello World!!\n\n");
        printf("My name is Viper\n\n");                            // yo

        // %a = 15 because of , myNum specified.
        printf("%d\n\n",myNum);
        // For math + = add, - = sub, * = muilt, / = div

        //Const = constant. it is good practice to full cap const.
    const int MINUTESPERHOUR = 60;

        printf("Minutes Per Hour is %d\n\n",MINUTESPERHOUR);

        // Comparison Ops = "== = Equal To, != = Not Equal, > = Greater Than, < = Less Than, >= = Greater than or equal to, <= = Less than or equal to."
        // Logical Ops = "&& = AND, || = OR, ! = NOT."

// Basic Boolen Usage in printf and if/if else statements. added  — 2/19/25
//------------------------------------------------------------------------------------------

    //boolean only takes true or false
    bool isProgrammingFun = true; 
    bool isFishTasty = false; 

    if (isProgrammingFun == true) {

        printf("Programming is fun = True\n\n"); 
    } else if (isProgrammingFun == false) {
        printf("Programming is fun = false\n\n");
        }

    if (isFishTasty == false) {

        printf("Fish is tasty = false\n\n"); 
    } else if (isFishTasty == true) {
        printf("Fish is tasty = true\n\n");
        }

// Basic Time pulling from OS time (I think) added  — 2/19/25
//------------------------------------------------------------------------------------------

    // time_t defines. time(NULL) is time value in _Timer. ctime is _timer.
    time_t mytime;
    mytime = time(NULL);
    printf(ctime(&mytime));

// Theoreticly making my program Mem safe. (By completly disables Mem alocation) added  — 05/2/25
//------------------------------------------------------------------------------------------

#define malloc(x)   ( NULL )

//
//------------------------------------------------------------------------------------------




return 0;
}