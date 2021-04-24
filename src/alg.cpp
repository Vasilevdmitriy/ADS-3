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
TStack<char> inf1;
int i = 0;
int i1 = 0;
std::string inf2;
std::string inf3;
char temp = 0;
char temp2 = 0;
char temp3 = 0;

while(i < inf.size()-1){      
if(PrOp(inf[i]) == -1){
inf1.push(inf[i]);
i++;
} else if((PrOp(inf[i]) == 3)||(PrOp(inf[i]) == 2)){
if(PrOp(inf[i+1]) != 0){
temp = inf[i];
i++;
} else {
if((PrOp(inf[i-3]) == 1)&&(PrOp(inf[i-2]) == 3)){
temp3 = inf[i];
i++;
} else {
temp2 = inf[i];
i++;
}
}
} else if(PrOp(inf[i]) == 0){
i++;
while(PrOp(inf[i]) != 1){
if(PrOp(inf[i]) == -1){
inf1.push(inf[i]);
i++;
} else if((PrOp(inf[i]) == 3)||(PrOp(inf[i]) == 2)){
temp = inf[i];
i++;
}
}
if(PrOp(inf[i]) == 1){
inf1.push(temp);
temp = 0;
i++;
}
if(temp2 != 0){
inf1.push(temp2);
temp2 =0;
}
}
if((temp!= 0)&&(PrOp(inf[i]) == -1)){
inf1.push(inf[i]);
inf1.push(temp);
temp = 0;
i++;
}
}
if(temp3 != 0){
inf1.push(temp3);
}
while(inf1.isEmpty() == false){
inf2 += inf1.get();
inf1.pop();
} 
i1 = inf2.size()-1;
while(i1 > -1){
inf3 += inf2[i1];
if(i1 > 0){
inf3 += ' ';
}
i1--;
} 
return inf3;
}


int eval(std::string pst) {
  // добавьте сюда нужный код
  return 0;
}
