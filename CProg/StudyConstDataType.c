#include <stdio.h>

typedef struct   // constructing data type for more simplicity, more like dict in python.
{
	
	char *name;//star for the pointer 
	char *class;// meaning to use the address not the actuall data
	int marks;
	

}
student; //name, we can call the new data type by this name.


int main(void)

{
	student number[1];// this bracket for the number for data you hold
	number[0].name = "sushank";
	number[0].class = "12";
	number[0].marks = 454;

	number[1].name = "suryansh";
	number[1].class = "5";
	number[1].marks = 500;

	for (int i=0; i<2; i++){
		if ((number[i].marks/500)*100 == 100){
			printf("founddd! %s has 100 percent marks.\n", number[i].name);
			return 0; //return 0 is for successfull run

		} 
	}
	return 1;// return 1 is for error/failed


}