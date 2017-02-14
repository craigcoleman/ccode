#include <stdio.h>
#include <stdlib.h>
int binarysearch( int a[], int key);
int main()
{
   int i, n, index, search;
   time_t t;
   int arr[30] = {2,5,7,11,13,17};
	
   n = 50;
   
   /* Intializes random number generator */
   srand((unsigned) time(&t));

   /* Print 5 random numbers from 0 to 49 */
   for( i = 0 ; i < n ; i++ ) 
   {
	 search = rand() % 50;
	 index =  binarysearch(arr,   search);
	 printf("%d\n", index);
   }
   
   return(0);
}

int binarysearch( int a[], int key){
				int start = 0;
				int end = sizeof(a);
				int mid;
				while (start <= end) {
					 mid = (start + end) / 2;
					if (key == a[mid]) {
						return mid;
					}
					if (key < a[mid]) {
						end = mid - 1;
					} else {
						start = mid + 1;
					}
				}
				return -1;
			}
