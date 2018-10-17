#include <stdio.h>
int main(){
    int n,i,count=0,count1,count2,x,s;
    scanf("%d", &n);  
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        }
        for(int i=0;i<n;i++){
            
            for(int j=i;j<n;j++){
                count1=0;
                count2=0;
                s=(j-i)%2;
                if(s){
                for (int k=i; k<=j; k++){
                     x = a[k]%2;
                     if(x){
                    count1++;
                     }
                    else {
                     count2++;
                       }
                  }
                  
                 if(count1==count2){
                count++;
                
                    }
                }
                    
            }
            
        }
            printf("%d",count);
           
         return 0;
    }
        
   
    
  


