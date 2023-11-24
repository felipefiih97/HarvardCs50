
#include <stdio.h>

int get_size(void);
void print_grid(int size);

int main(void) {

  int n = get_size(); 

  print_grid(n);


}

int get_size(void){ 
    int n ;
  do{
    printf("Digite um valor:\n");
    scanf("%d",&n);
  }while( n < 1);

  return n;
}

void print_grid(int size){

      for(int i = 0; i < size; i++){
          printf("\n");
        for(int j = 0; j < size; j++){
          printf("#"); 
        }
      } 
}