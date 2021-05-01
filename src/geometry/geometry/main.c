#include <ctype.h>
	#include <math.h>
	#include <string.h>
	#include <stdlib.h>
	#include <stdio.h>
	
	struct circle_elements
	{
		double x;
		double y;
		double r;	
	} circle;
	
	char* Calculations (double x,double y,double r,double perimeter,double area)
	{
	    area = 3,14*pow(r,2);
		perimeter = 2 * 3,14 * r;
	}
	
	char* proverka_symv(char* point, char symbol)
	{
		while (*point != '\n'){
			if (*point == symbol){
				point++;
				return point;
			}
			if (*point == ' '){
				point++;
			}
			else {
				printf("Excepted '%c'\n",symbol);
				return 0;
			}
		}
	}
	
	char* proverka_znach(char* point, double* number)
	{
		char* end;
		while (isdigit(*point) == 0){
			if (*point == ' '){
				point++;
				
			}
			else{
				(printf ("Excpected one or more elements of circle\n"));
				return 0;
			} 
			
		}	
		
		if (isdigit(*point) != 0){
			*number = strtod(point, &end);
			point = end;
			return point;
		}
		if (isdigit(*point) > 10.0){
				(printf ("Too much value"));
				return 0;
		}
		if (isdigit(*point) < 0){
				(printf ("Use positive values"));
				return 0;
		}
		return point;
			
	}
	
	char* proverka_kruga(char* point){
		if ((point = proverka_symv(point, '(')) == 0 ) {
			return 0;
		}
		
	    if ((point = proverka_znach(point, &circle.x)) == 0) {
	        return 0;
		}
		if ((point = proverka_znach(point, &circle.y)) == 0) {
	        return 0;
		}
	    if ((point = proverka_symv(point, ',')) == 0) {
	    	return 0;
		}
		if ((point = proverka_znach(point, &circle.r)) == 0) {
	        return 0;
		}
		if ((point = proverka_symv(point, ')')) == 0) {
	        return 0;
		}   
	}
	
	int main()
	{
		double x;
		double y;
		double r;
		double perimeter;
		double area;
		char figure[100];
		char* test_point = figure;
		char* point = figure;
		
		printf ("Vvedite dannye kruga po formatu:");
		printf ("'circle' '(' Point ',' Number ')'\n");
		
		fgets(figure, sizeof(figure), stdin);
	
		while (isalpha(*point) != 0)
			point++;
			
		if (strncasecmp(test_point, "circle", 6) == 0)
		{
			proverka_kruga(point);
		}
		else {
			printf ("Excepted 'circle'\n");
		}
	    printf("Perimeter,%f\n",perimeter);
		printf("Area,%f\n",area);
	}
