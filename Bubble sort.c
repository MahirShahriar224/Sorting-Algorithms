#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<conio.h>

void Bubblesort(int a[],int n)
{
    int i,j,temp,p;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
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
    clock_t start,stop;
    double elapsed;

    start=clock();
    printf("declare the size of the array : ");
    scanf("%d",&n);
    srand(time(NULL));
    for(i=0;i<n;i++)
    {
        a[i]=rand()%1000+1;
    }

    FILE *array1;
    array1=fopen("Input.txt","w");
    fprintf(array1,"The size of array is %d\n\nAnd the elements are : \n",n);
    printf("\n\n------Before sorting The elements of the array------\n");
    for(i=0;i<n;i++)
    {
        fprintf(array1,"%5d",a[i]);
        printf("%5d",a[i]);
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
    Bubblesort(a,n);

    stop=clock();

    elapsed = ((double) (stop - start)) / CLK_TCK;

    printf("\n\nTotal time is %d",elapsed);



    getch();
    return 0;
}


