#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct
{
	char name[64];
	int population;
	int area;
	char primeMinisterName[64];
} Province;
Province setData(int a);
void printProvince(Province c[11]);

int main()
{
	int a;
	Province CanadianProvince[11];
	for(a = 0; a<4; a++){
		CanadianProvince[a] = setData(a);
	}
	printProvince(CanadianProvince);
	
}

Province setData(int a){
	Province c;
	char name[64];
	int population, area;
	char pmName[64];
	printf("\n\n\nEnter Prov %d detail:",a+1);
	printf("\nName:");
	scanf("%s",&name);
	strcpy(c.name,name);
	printf("\nArea:");
	scanf("%d",&area);
	c.area = area;
	printf("\nPopulation:");
	scanf("%d",&population);
	c.population = population;
	printf("\nPrime Minister's Name:");
	scanf("%s",&pmName);
	strcpy(c.primeMinisterName,pmName);
	return c;
}

void printProvince(Province c[]){
	printf("\n\n\nAll the Province Details:\nName\t\tPopulation\t\tArea\t\tPrime\n\n");
	int a=0;
	for(a = 0; a<4; a++){
		printf("%s\t\t%d\t\t\t%d\t\t%s\n",&c[a].name,c[a].population,c[a].area,&c[a].primeMinisterName);
	}
	char name[64];
	printf("\n\n\n\n\nEnter a privince name: ");
	scanf("%s",&name);
	int i=0;
	for(i = 0; i<4; i++){
		if(strcmp(c[i].name,name) == 0){
			printf("\n\n\n%s Province Details:\nName\t\tPopulation\t\tArea\t\tPrime\n\n",name);
			printf("%s\t\t%d\t\t\t%d\t\t%s\n",&c[i].name,c[i].population,c[i].area,&c[i].primeMinisterName);
			break;
		}
	}
	
}

