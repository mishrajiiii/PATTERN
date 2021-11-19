#include <stdio.h>
int main() 
{
   int i, j;
   char input, alphabet = 'A';
   printf("Enter an uppercase character you want to print in the last row: ");// INPUT 'F' FOR 6 LINES AS ASSIGNMENT IS 6 STAIRS //
   scanf("%c", &input);
   for (i = 1; i <= (input - 'A' + 1); ++i) 
   {
      for (j = 1; j <= i; ++j) 
      {
         printf("%c ", alphabet);
      }
      ++alphabet;
      printf("\n");
   }
   return 0;
}
