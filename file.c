#include  <stdio.h>
int main()
{
    int i, num,max,min;
    float total = 0.0, average;
    printf ("Enter the number of subjects: \n");
    scanf("%d", &num);
    int array[num];

    printf("Enter the scores in the subjects\n");

    for (i = 0; i < num; i++)
    {
        scanf("%d", &array[i]);
    }

    printf("Marks in %d subjects\n",num);

    for (i = 0; i < num; i++)
    {
        printf("%+3d\n", array[i]);
    }

    for (i = 0; i < num; i++)
    {
        total=total+array[i];
    }

    average = total / num;

    printf("\n Sum of scores in all subjects =  %f", total);
    printf("\n Average score of student =  %f\n", average);

    min=max=array[0];
    for(i=1; i<num; i++)
    {
         if(min>array[i])
		  min=array[i];
		   if(max<array[i])
		    max=array[i];
    }
     printf("minimum score is : %d",min);
    printf("\n maximum score is : %d",max);

}
