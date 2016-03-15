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
   {1,1,2,0,0,0,0,1} ,
   {1,0,0,3,0,0,0,1} ,
   {1,0,0,0,4,0,0,1} ,
   {1,0,0,0,0,5,0,1} ,
   {1,0,0,0,0,0,0,1} ,
   {1,1,1,1,1,1,1,1}    
};
   int r,c,n;
 
   // output array r:row c:column
   for ( r = 0; r < 8; r++ ) {
      for ( c = 0; c < 8; c++ ) {
		 //switch statement
		 n = a[r][c];
		  switch ( val ) {
          case 0:
            red = 30; green = 0; blue =0;
          break;
          case 1:
            red = 0; green = 30; blue =0;
          break;
           case 2:
          red = 0; green = 0; blue =30;
          break;
            case 3:
          red = 30; green = 30; blue =0;
          break;
            case 4:
          red = 0; green = 33; blue =30;
          break;
          default:
          red = 33; green = 0; blue =30;
          break;
		}
         printf("%d", a[r][c] );
      }
      printf("\n");
   }
   return 0;
}
