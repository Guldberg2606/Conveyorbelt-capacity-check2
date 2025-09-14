#include <stdio.h>

int main() {
  int numMotors;
  double totalWeight;

  printf("Antal motorer: ");
  scanf("%d", &numMotors);

  printf("Samlet vægt af pakker (kg): ");
  scanf("%lf", &totalWeight);

  double totalCapacity = numMotors * 5.6;

  if (totalWeight <= totalCapacity) {
    printf("Safe to run.\n");
  } else {
    printf("Not safe to run.\n");
  }

  return 0;
}