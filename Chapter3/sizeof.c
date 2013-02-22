#include<stdio.h>
struct test
{
	char m1;
	double m4;
	int m3;
};
struct test1
{
	char x1;
	short x2;
	float x3;
	char x4;
};
#pragma pack(push) 
#pragma pack(2) 
typedef struct _fruit 
{ 
	char          apple; 
    int           banana; 
    short         orange;    
    double        watermelon; 
    unsigned int  plum:5; 
    unsigned int  peach:28;  
    char*         tomato; 
    struct _fruit* next;      
}fruit; 
#pragma pack(pop)
int main(){
	printf("sizeof('long') is %i\n",sizeof (long));
	printf("sizeof('long long') is %i\n",sizeof (long long));
	printf("sizeof('a') is %i\n",sizeof 'a');
	printf("sizeof(\"a\") is %i\n",sizeof "a");
	printf("sizeof(test) is %i\n",sizeof(struct test));
	printf("sizeof(test1) is %i\n",sizeof(struct test1));
	printf("sizeof(fruit) is %i\n",sizeof(fruit));
	int a =0;
	printf("sizeof(a=3) is %i\n",sizeof(a=3));
	printf("a is %i\n",a);
	return 0;
}

