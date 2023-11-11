#include <stdio.h>
int main(){
          int i, bil ;
          char sim;
printf("Input\n"); scanf("%d %c", &bil, &sim);
          for (i = 1; i <51; i ++){
if(i %bil == 0 ){
printf("%c ",sim);
}else{

printf("%d ", i);        
}
}
 return 0;}