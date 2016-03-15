// Example of a 2d array of integers
// Save file as "2darray.c"
//  compile with gcc
// compile   $gcc 2darray.c - 2darray
//  run      $./2darray
#include <stdio.h>
 
int main () {
   // 8 by 8 array of integers
int a[8]= {1,1,1,1,0,0,0,1};
   int r;//r (row)
 
   // output array r:row c:column
   for ( r = 0; r < 8; r++ ) {
         printf("%d", a[r]);
      }//end for r
      printf("\n");
   return 0;
}
