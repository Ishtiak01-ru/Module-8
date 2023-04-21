#include<stdio.h>
int main(){
    int n,i;
    scanf("%d",&n);

    int v;
    int sum=0;
    int y = 0;
    for(i=1; i<=n;i++){
        scanf("%d",&v);
        //printf("%d ",v);
        if(v%2==0){
            
            sum = sum + v;
            
        }
        else if(v%2==1){
            y = y +v;
         
        }    
    } 
    printf("%d %d",sum,y);
    return 0;
}