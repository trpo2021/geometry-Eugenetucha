        #include "libgeometry/geometry.h"
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
