#include <stdio.h>
#include "CalcName.h"
#include <stdbool.h>
#include <float.h>

double Add(double* number1, double* number2)
{
  GetTheOperands(number1, number2);
  double result = *number1 + (*number2);
  if (result > DBL_MAX && (result > DBL_MIN)) {
    printf("Number Overflow\n");
    return -1;
  }
  else if (result < DBL_MAX && (result < DBL_MIN)) {
    printf("Number underflow\n");
    return -1;
  }
  return result;
}
double Subtract(double* number1, double* number2)
{
  GetTheOperands(number1, number2);
  double result = *number1 - (*number2);
  if (result > DBL_MAX && (result > DBL_MIN)) {
    printf("Number Overflow\n");
    return -1;
  }
  else if (result < DBL_MAX && (result < DBL_MIN)) {
    printf("Number underflow\n");
    return -1;
  }
  return result;
}
double Multiply(double* number1, double* number2)
{
  GetTheOperands(number1, number2);
  double result = *number1 * (*number2);
  if (result > DBL_MAX && (result > DBL_MIN)) {
    printf("Number Overflow\n");
    return -1;
  }
  else if (result < DBL_MAX && (result < DBL_MIN)) {
    printf("Number underflow\n");
    return -1;
  }
  return result;
}
double Divide(double* number1, double* number2)
{
  double result = *number1 / (*number2);
  GetTheOperands(number1, number2);
  if (*number2 == 0) {
    return -1;
  }
  if (result > DBL_MAX && (result > DBL_MIN)) {
    printf("Number Overflow\n");
    return 0;
  }
  else if (result < DBL_MAX && (result < DBL_MIN)) {
    printf("Number underflow\n");
    return 0;
  }
  return result;
}

void GetTheOperands(double* number1, double* number2)
{
    printf("Please enter the first operand:");
    scanf("%lf", number1);
    printf("Please enter the second operand:");
    scanf("%lf", number2);
}
void ChooseMethod()
{
  int functionNumber;
  double n1;
  double n2;
  printf("Please enter your choice:");
  scanf("%d", &functionNumber);
  switch(functionNumber){
    case 1: n1 = Add(&n1, &n2);
    if (n1 != (-1)) {
      printf("Result is: %lf\n", Add(&n1, &n2));
    }
    break;
    case 2: n1 = Subtract(&n1, &n2);
    if (n1 != (-1)) {
      printf("Result is: %lf\n", Subtract(&n1, &n2));
    }
    break;
    case 3: n1 = Multiply(&n1, &n2);
    if (n1 != (-1)) {
      printf("Result is: %lf\n", Multiply(&n1, &n2));
    }
    break;
    case 4: n1 = Divide(&n1, &n2);
    if (n1 == (-1)) {
      printf("Division by 0!\n");
    }
    else{
      if (n1 != (0)) {
        printf("Result is: %lf\n", Divide(&n1, &n2));
      }
    }
    break;
    case -1: return;
    default:
    printf("Input not allowed, please try again!\n");
    ChooseMethod();
    break;
  }
}
int main(int argc, char const *argv[])
{
  printf(" Menu\n");
  printf("=======\n");
  printf("1. Add\n2. Subtract\n3. Multiply\n4. Divide\n-1.StopTheProgram\n");
  ChooseMethod();
  return 0;
}
