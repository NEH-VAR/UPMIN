#include <stdio.h>

#define res n1+n2
int n1,n2;

int main(){
    printf("Enter Number 1:");
    scanf(" %d", &n1);
    printf("Enter Number 2:");
    scanf(" %d", &n2);
    
    if(n1<0||n2<0){
        printf("The numbers are %d and %d.\n",n1,n2);
    }
    
    if( (n1%2) && (n2%2) ){
        printf("The sum of two ODD numbers %d and %d is %d, which is an EVEN number.",n1,n2,res);
        
    }else if( (!(n1%2))&&(!(n2%2)) ){
            // n1 5%2=1
        printf("The sum of two EVEN numbers %d and %d is %d, which is an EVEN number.",n1,n2,res);
        
    }else if(n1%2){
        int no,ne;
        no = n2;
        ne = n1;
        printf("");
        printf("The sum of an even number %d and an odd number %d is %d, which is an odd number.", no, ne, res);
        
    }else{
        printf("The sum of an even number %d and an odd number %d is %d, which is an odd number.", n1, n2, res);
    }
    
}
