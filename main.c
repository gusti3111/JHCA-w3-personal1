#include <stdio.h>

int main() {
  int x;
  scanf("%d",&x);

  int convMeter = x*1000; 
  int convCentiMeter = x * 100000;
  if(convMeter){
    getchar();
    printf("conversion km to m:");
     getchar();
  
    printf("%d meter\n",convMeter);
    
  }
  if(convCentiMeter){
    printf("conversion km to cm:");
    getchar();
    printf("%d centimeter\n",convCentiMeter);
    
  }
 
 


  
  

    return 0;
}

