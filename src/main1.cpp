#include <stdio.h>
#include "task1.h"

int main()
{
	char gender = 0;
	float height;
	float weight;

	printf("Enter your gender (m or w): ");
	scanf("%c", &gender);
	printf("Enter your height in cm: ");
	scanf("%f", &height);
	printf("Enter your weight in kg: ");
	scanf("%f", &weight);

	int result = getRecommendation(gender, height, weight);
	if (result == 1)
		printf("You need to lose weight!\n");
	else if (result == 0)
		printf("You have an ideal weight!\n");
	else if (result == -1)
		printf("You need to eat more!\n");
	return 0;
}