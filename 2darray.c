// Example of a 2d array of integers
// Save file as "2darray.c"
//  compile with gcc
// compile   $gcc 2darray.c - 2darray
//  run      $./2darray
#include <stdio.h>
 
int main () {
   // 8 by 8 array of integers
int a[8][8] = {  
   {1,1,1,1,1,1,1,1} ,
   {1,1,1,0,0,0,0,1} ,
   {1,1,1,0,0,0,0,1} ,
   {1,0,0,0,0,0,0,1} ,
   {1,0,0,0,0,0,0,1} ,
   {1,0,0,0,0,0,0,1} ,
   {1,0,0,0,0,0,0,1} ,
   {1,1,1,1,1,1,1,1}    
};
   int r,  c;
 
   // output array r:row c:column
   for ( r = 0; r < 8; r++ ) {
      for ( c = 0; c < 8; c++ ) {
         printf("%d", a[r][c] );
      }
      printf("\n");
   }
   return 0;
}
