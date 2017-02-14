		//compile gcc bsearch.c -o bsearch  
		// run  ./bsearch
#include <stdio.h>
int bsearch( int a[], int key);	

int main()
{
	int arr[30] = {2,5,6,11,12,13};
	int searchValue = 11;
	int index = bsearch(arr,searchValue);
	printf("Found 11 at %d \n\n", index);
	return (0);
}

		int bsearch( int a[], int key){
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


