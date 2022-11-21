#include <stdio.h>
#include <string.h>

typedef struct id{
	char *name;
	int id;
	char *department;
}worker;

int main()
{
	int i;
	char name[20];

	worker mike, *ptr;

	ptr = &mike;

	ptr -> name = "Mike";
	ptr -> id = 34312;
	ptr -> department = "Laboratory Tests II";

	for (i = 2; 0 <= i; i--)
	{
		printf("Enter your name: ");
		scanf("%s", name);
		
		if (name == NULL)
		{
			printf("Empty input\n");
			printf("%d more tries\n", i);

			if (i == 0)
			{
				printf("Expired\n");
				break;
			}
		}
		else if (strcmp(name, ptr -> name))
		{
			printf("Worker not recognized\n");
			printf("%d more tries\n", i);

			if (i == 0)
			{
				printf("Expired\n");
				break;
			}
		}
		else
		{
			printf("Welcome %s\n", ptr -> name);
			printf("\nName: %s\tID: %d\t\tDepartment: %s\n", ptr -> name, ptr -> id, ptr -> department);
			break;
		}
	}
	return 0;
}
