#include <stdio.h>
#include <string.h>//strlen


int main(void){
	
	typedef char *str; //to make string/str/whatever alive, instead of char*
	str c ="sushnak"; //example of doing it
	char *s="hi!"; //alternative

	for (int i=0;i<strlen(s);i++){
		printf("%c ", s[i]);//%c is must, %s doesnt work!!
		//char *c= &s[i];
		//printf("%s\n", &s[i]);//warning- wrong one 

	}
	printf("%s", c);


}
