#include<stdio.h>
#include <string>
int main()
{
    int a[50],n,i,j,temp;                       //https://www.programiz.com/dsa/bubble-sort     Array input
    printf("Enter the size of array: ");
    scanf("%d",&n);
    printf("Enter the array elements: ");
    
    for(i=0;i<n;++i)
        scanf("%d",&a[i]);
        
    for(i=1;i<n;++i)
        for(j=0;j<(n-i);++j)
            if(a[j]>a[j+1])
            {
                temp=a[j];                      //https://fahad-cprogramming.blogspot.com/2014/05/bubble-sort-in-c-code-example.html    Temp element
                a[j]=a[j+1];
                a[j+1]=temp;
            }
            
    printf("\nArray after sorting: ");          //https://www.geeksforgeeks.org/bubble-sort/     Function to print array
    for(i=0;i<n;++i)
        printf("%d ",a[i]);
    system("pause");                            //https://stackoverflow.com/questions/2529617/how-to-stop-c-console-application-from-exiting-immediately    System pause
    getchar ();
}

