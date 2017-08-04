#include<iostream>

bool EsPrimo (int x){
  for(int i = 1; i <= 9; i++){
    if(x%i==0){
      return false;
    }
  }
  return true;
}

int main(void){
  
  int in_lim = 2;
  int su_lim = 10;
  
  for(int k = in_lim; k <= su_lim; k++){
    std::cout << EsPrimo(k) << std::endl;
    if(EsPrimo(k)){
      std::cout << k << std::endl;
    }
  }
  
}
