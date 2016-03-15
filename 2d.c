#include <stdio.h>
 
int main () {

   /* an array with 5 rows and 2 columns*/
int a[8][8] = {  
   {1,1,1,1,1,1,1,1} ,
   {1, 1,1,0,0,0,0,1} ,
   {1, 1,1,0,0,0,0,1} ,
   {1, 0,0,0,0,0,0,1} ,
   {1, 0,0,0,0,0,0,1} ,
   {1, 0,0,0,0,0,0,1} ,
   {1, 0,0,0,0,0,0,1} ,
   {1, 1,1,1,1,1,1,1}    
};
   int r,  c;
 
   /* output each array element's value */
   for ( r = 0; r < 8; r++ ) {

      for ( c = 0; c < 8; c++ ) {
         printf("%d", a[r][c] );
      }
      printf("\n");
   }
   
   return 0;
}
