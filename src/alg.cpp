// Copyright 2021 NNTU-CS
#include <string>
#include "tstack.h"

int PrOp(char z){
if((z == '/')||(z == '*')){return 3;}
else if((z == '+')||(z == '-')){return 2;}
else if(z == ')'){return 1;}
else if(z == '('){return 0;}
else return -1;
}

std::string infx2pstfx(std::string inf) {

}


int eval(std::string pst) {
  // добавьте сюда нужный код
  return 0;
}
