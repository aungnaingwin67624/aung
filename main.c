#include <stdio.h>
 #include <string.h>  
int main(int argc, char **argv)
 {     

    printf("Enter you first names: ");  
	fgets(first, 255, stdin);    
	name[strlen(name)-1] = '\0'; /* remove the newline at the end */  
    printf("Hello %s %s!\n", name);     
    printf("Hello %s %s!\n", name);
	return 0; 
} 