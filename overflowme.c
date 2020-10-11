#include <stdio.h>
#include <string.h>

int main() {
    struct {
	char input[32];
	char password[32];
    }locals;
    strncpy(locals.input, "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", 32);
    strncpy(locals.password, "thisisasecurepassword!25g@#!", 32);
    
    while(1) {
	printf("Enter the password: ");
	gets(locals.input);

	if(strncmp(locals.input, locals.password, 32)) {
	    printf("Invalid password\n");
	} else {
	    printf("Correct password\n");
	    printf("Input: %s\n", locals.input);
	    printf("Password: %s\n", locals.password);
	    break;
	}
    }
	return 0;
}
