#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct info{
	char name[20];
	int age;
	char department[25];
};

int main(int argc, char *argv[]){
	int i;
	struct info Amos;
	Amos = (struct info){.name = "Amos Dian", .age = 20, .department = "Engineering"};

	for (i = 0; i < atoi(argv[1]); i++){
		Amos.age++;
	}
	printf("Amos is %d years old after %d years\n", Amos.age, i);

	return 0;
}
