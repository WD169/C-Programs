
#include<stdio.h>
#include<string.h>

int main() 
{
int i, j, num_elements, arr_elements[200], leader, sum=0;

//input number of elements and elements themselves
printf("Enter number of Elements: ");
scanf("%d",&num_elements);
printf("Enter the elements: ");
for(i=0; i<num_elements; i++){

scanf("%d", arr_elements+i);}

//identify the leader
for(i=0; i<num_elements; i++)
{
for(j=i+1; j<num_elements; j++)
if(arr_elements[i] < arr_elements[j])
leader = i = j;
break;
}

//calculate sum
for(i=leader; i<num_elements; i++)
sum+=arr_elements[i];
printf("%d",arr_elements[i]);
printf("Sum of Leader and right members: %d", sum);
}
