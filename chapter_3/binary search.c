

							/*	binary search */


#include<stdio.h>

int binsearch(int x,int v[],int n)
{
	int high = n-1;
	int low =0;
	int mid;
		mid=(high+low)/2;
		while((low < high)&& ( x != v[mid])){
			if(x < v[mid]){
				high = mid-1;
				mid = (low+high)/2;
			}
			else{
				low = mid+1;
				mid= ( high + low )/2;
			}
		}

		if (x== v[mid]){

			return mid;
		}
		else 
			return -1;

}


main()
{
	int s[11]={10,11,12,14,18,20,21,25,28,29,99};
	int d[11]={1,2,3,4,5,6,7,8,9,10,11};
	printf("%d\n",binsearch(12,s,10));
//	 return 0;

}

