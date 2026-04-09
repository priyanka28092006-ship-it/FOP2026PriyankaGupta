#include <stdio.h>

int main(){
 //asking for total number of integers
    printf("Enter number of integers");
    int n;
    scanf("%d",&n);
    
//creating array for n integers
    int arr[n];
    int even_count[n];
    int odd_count[n];

    int evencount=0,oddcount=0;
//accepting value for integers

    for(int i =0;i<n;i++){
        scanf("%d",arr[i]);
        printf("Value for %d element =%d \n",i,arr[i]);
    }

    //sorting them in even odd array
    for(int i=0;i<n;i++){

        if (arr[i]%2==0){
            even_count[evencount]=arr[i];
            evencount++;
        }
        else{
            odd_count[oddcount]=arr[i];
            oddcount++;

        }
    }

    //printing values
    for(int i =0;i<evencount;i++){

        printf("even numbers are \n");
        printf("%d ",even_count[i]);
    }
      for(int i =0;i<oddcount;i++){

        printf("odd numbers are \n");
        printf("%d ",odd_count[i]);
    }
}
