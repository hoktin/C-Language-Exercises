/*
calculate roots of a quadratic equation.
We have a, b and c of quadratic equation that
1) a = 2; b = 4; c = 1
2) a = 1; b = 2; c = 3
3) a = 1; b = 2; c = 1
-----------Expected Output-----------
Roots are real numbers.
Roots of quadratic equation are: -0.293, -1.707
-------------------------------------
*/

#include<stdio.h>
#include<math.h>
 
int main(){
  float a,b,c;
  float delta,root1,root2;
  
  a = 1;
  b = 2;
  c = 1;
   
  delta = b * b - 4 * a * c;
  
  if(delta < 0){
    printf("Roots are complex number.\n");
 
    printf("Roots of quadratic equation are: ");
    printf("%.3f%+.3fi",-b/(2*a),sqrt(- delta)/(2*a));
    printf(", %.3f%+.3fi",-b/(2*a),-sqrt(- delta)/(2*a));
  
    return 0;
  }
  else if(delta==0){
   printf("Both roots are equal.\n");
 
   root1 = -b /(2* a);
   printf("Root of quadratic equation is: %.3f ",root1);
 
   return 0;
  }
  else {
   printf("Roots are real numbers.\n");
  
   root1 = ( -b + sqrt(delta)) / (2* a);
   root2 = ( -b - sqrt(delta)) / (2* a);
   printf("Roots of quadratic equation are: %.3f , %.3f\n",root1,root2);
  }
 
  return 0;
}
