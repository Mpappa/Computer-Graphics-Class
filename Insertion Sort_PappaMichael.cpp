#include<stdio.h>
#include<string>
int main()
{
    int a[50],n,i,j,temp;                       
    printf("Enter the size of array: ");
    scanf("%d",&n);
    printf("Enter the array elements: ");
    
	for(i=0;i<n;++i)
		scanf("%d",&a[i]);
		
	for(i=1;i<n;++i)
	{
		temp = a[i];                            //https://www.programiz.com/dsa/insertion-sort    Temp in regard to Insertion 
		j=i-1;
		while(temp>a[j] && j>=0)
		{
			a[j+1] = a[j];
			--j;
		}
		a[j+1]=temp;
			}
	printf("In descending order: ");
	for(i=0; i<n; ++i)
	printf("%d\t",a[i]);
    system("pause"); 
}
