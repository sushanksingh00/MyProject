#include <stdio.h>

//swaping using pointers 

void swap(int *a, int *b);
int main(void){

	int x=1;//let the address of x is 0x123
	int y=2;//let the address of y is 0x456

	printf("x is %i and y is %i\n",x, y);

	swap(&x, &y);//passing the address of the value instead of the actual value.

	printf("x is %i and y is %i", x, y);

}

void swap(int *a, int *b){
	int temp = *a; //copying the address of a to temp i.e. 0x123 which has 1 as value
	*a= *b; //copying the address of b to a which was 0x456 which has value 2
	*b = temp; // we copied the the value of a in temp before via adress, now using it 

}
//this way we dont have to return any value we just use POINTERS to move stuff.
//remembering points- 1. passing address - &x 2. using address *x