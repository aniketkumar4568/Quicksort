#include <stdio.h>
#include <stdlib.h>

void Quicksort(int arr[23],int l,int h)
{
               int i,j,temp,pivot;
               if(l<h)
               {
                              pivot=l;
                              i=l;
                              j=h;
                              while(i<j)
                              {
                                             while(arr[i]<=arr[pivot]&&i<l)
                                                            i++;
                                             while(arr[j]>arr[pivot])
                                                            j--;
                                             if(i<j)
                                             {
                                                            temp=arr[i];
                                                            arr[i]=arr[j];
                                                            arr[j]=temp;
                                             }
                              }
                              temp=arr[pivot];
                              arr[pivot]=arr[j];
                              arr[j]=temp;
                              Quicksort(arr,l,j-1);
                              Quicksort(arr,j+1,h);
               }
}
int main()
{
               int i,n,arr[23];
               printf("enter no. of elements \n ");
               scanf("%d",&n);
               printf("enter %d elements\n",n);
               for(i=0;i<n;i++)
               {
                              scanf("%d",&arr[i]);
               }
               Quicksort(arr,0,n-1);
               printf("sorted elements are \n");
               for(i=0;i<n;i++)
               {
                              printf("%d ",arr[i]);
               }
}
