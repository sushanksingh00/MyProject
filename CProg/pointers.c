#include <stdio.h>

//pointers main funtion is to avoid making copies of the data to change anything rather to just do changes in the 
//original one, avoiding the excess memory usage.

void pointer_pass(int *pk);
int normal_pass(int i);

int main(void)
{
    // using pointer
    int k = 4;  //box containing 4 marked as k
    int *pk = &k; // pk is a pointer which is poiting to the ADDRESS of k (&k)
    pointer_pass( pk );

    printf("pointer type - %i", k); //it should return 35 not 4 cuz we changed the original value

    //using normal
    int i = 0;
    i = normal_pass(i); // see it creates another variable, which leads to more memory usage.
    printf("noraml type - %i", i );
    return 0;

}

void pointer_pass(int *pk)
{
    *pk = 35; // *pk is called defrencing, which says go to the adress. So we go to the sddress and change whatever it has to 35.
    return;

}

int normal_pass(int i)
{
    i = 35;
    return i;
}
