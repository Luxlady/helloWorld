
// Says Hello to Name entered in prompt
// Susan Marek, edx cs50 2018
// Problem set 1


#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>




int main (void)

{

int len=0;
string f;

    // Prompt user for a nam
   do
   { f = get_string("fname: ");

    // Calc length of name entered
        len = strlen(f);

        if (len == 0)
        {
        printf("No name provided, try again\n");
        }

         else (len > 20)
        {
            printf("Please use less than 20 characters,%s", f);
            printf("Your length of name was = %i\n", len);
        }

   }
   while (len == 0 || len >20);

            printf("Hello, %s", f);
            printf("\n");
            printf("Thank you\n");


return 0;
}
