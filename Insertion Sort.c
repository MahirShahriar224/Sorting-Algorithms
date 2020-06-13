#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<conio.h>

void Insertionsort(int a[],int n)
{
    int i,j,temp,p;
    for(j=1;j<n;j++)
    {
        temp=a[j];
        i=j-1;
        while(i>=0 && a[i]>temp)
        {
            a[i+1]=a[i];
            i--;
        }
        a[i+1]=temp;
    }
    FILE *array;
    array=fopen("Ascending.txt","w");
    fprintf(array,"The size of array is %d\n\nAnd the Ascending elements are : \n",n);

    for(i=0;i<n;i++)
    {
        fprintf(array,"%4d",a[i]);
        p=1;
    }
    fclose(array);

    printf("\n\n------After sorting The elements of the array------\n");
    for(i=0;i<n;i++)
    {
        printf("%4d",a[i]);
    }

    if(p==1)
    {
        printf("\n\nThe sorted data written to file successfully\n\n");
    }
    else
    {
        printf("Data is not transfered to file");
    }

}



int main()
{
    int i,j,p,a[100000],n;

    printf("declare the size of the array : ");
    scanf("%d",&n);
    srand(time(NULL));
    for(i=0;i<n;i++)
    {
        a[i]=rand()%100-50;
    }

    FILE *array1;
    array1=fopen("Input.txt","w");
    fprintf(array1,"The size of array is %d\n\nAnd the elements are : \n",n);
    printf("\n\n------Before sorting The elements of the array------\n");
    for(i=0;i<n;i++)
    {
        fprintf(array1,"%4d",a[i]);
        printf("%4d",a[i]);
        p=1;
    }
    fclose(array1);
    if(p==1)
    {
        printf("\n\nThe data written to file successfully\n\n");
    }
    else
    {
        printf("Data is not transfered to file");
    }

    //after sorting
    Insertionsort(a,n);







    getch();
    return 0;
}

