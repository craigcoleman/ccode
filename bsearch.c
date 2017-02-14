		//compile gcc bsearch.c -o bsearch  
		// run  ./bsearch
		#include <stdio.h>
		#include <stdlib.h>
		
	
		
		int main()
		{

		int array[256] = {2,5,6,11,12,13};
		int searchValue = 11;
		int index = bsearch(array,searchValue);
		 printf("Found 11 at %d \n\n", index);
		 return 0;
		}

		int bsearch( int array[], int key){
				int start = 0;
				int end = sizeof(array);
				int mid;
				while (start <= end) {
					 mid = (start + end) / 2;
					if (key == array[mid]) {
						return mid;
					}
					if (key < array[mid]) {
						end = mid - 1;
					} else {
						start = mid + 1;
					}
				}
				return -1;
			}


