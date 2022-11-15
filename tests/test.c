#include <stdio.h>
#include <stdlib.h>

typedef struct{
	char name[20];
	int age;
	char department[25];
}info;

int main(int argc, char *argv[]){
	int i;
	info user;
	user = (info){.name = "Bolaji Baasit", .age = 20, .department = "Engineering"};

	for (i = 0; i < atoi(argv[1]); i++){
		user.age++;
	}
	printf("%s is %d years old after %d years\n",user.name, user.age, i);

	return 0;
}
