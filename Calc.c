#include <stdio.h>
double Add(double* number1, double* number2)
{
  return 0;
}
double Subtract(double* number1, double* number2)
{
  return 0;
}
double Multiply(double* number1, double* number2)
{
  return 0;
}
double Divide(double* number1, double* number2)
{
  return 0;
}

void checkMethod(){
  int functionNumber;
  double n1;
  double n2;
  printf("Enter your number:\n");
  scanf("%d\n", &functionNumber);
  switch(methodNumber){
    case 1: Add(&n1, &n2);
    break;
    case 2: Subtract(&n1, &n2);
    break;
    case 3: Multiply(&n1, &n2);
    break;
    case 4: Divide(&n1, &n2);
    break;
    case -1: return;
    default:
    printf("Invalid input, try again!\n");
    checkMethod();
    break;
  }
}
int main(int argc, char const *argv[]) {
  /* code */
  printf(" Menu\n");
  printf("=======\n");
  printf("1. Add\n2. Subtract\n3. Multiply\n4. Divide\n-1.StopTheProgram\n");
  checkMethod();
  return 0;
}
