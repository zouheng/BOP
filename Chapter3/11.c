//Code for 3.11
#include <string.h>
#include <stdio.h>
int bisearch(char **arr,int low,int high,char * v)
{
	printf("........bisearch......\n");
	int middle;
	while(low<high-1){
		middle=low+(high-low)/2;
		//return max equal index 
		/*if(strcmp(arr[middle],v)<=0){
			low=middle;
		}else{
			high=middle;
		}*/
		//return min equal index
		/*if(strcmp(arr[middle],v)>=0){
			high=middle;
		}
		else
		{
			low=middle;
		}*/
		//return max less
		if(strcmp(arr[middle],v)<0){
			low=middle;
		}
		else
		{
			high=middle;
		}
	}
	printf("arr[high]-->arr[%i]=%s\n",high,arr[high]);
	printf("arr[low]-->arr[%i]=%s\n",low,arr[low]);
	/*return max equal index
	if(strcmp(arr[high],v)==0){
		return  high;
	}
	else if(strcmp(arr[low],v)==0){
		return low;
	}
	else{
		return -1;
	}*/
	/*return min equal index
	if(strcmp(arr[low],v)==0){
		return  low;
	}
	else if(strcmp(arr[high],v)==0){
		return high;
	}
	else{
		return -1;
	}*/
	//return max less index
	if(strcmp(arr[high],v)<0){
		return  high;
	}
	else if(strcmp(arr[low],v)<0){
		return low;
	}
	else{
		return -1;
	}
}
int main()
{
	char *arr[]={"ailing","ailing","ailing","bouheng","ceitao","dhenmin","dhenmin","dhenmin"};
	char *v="kiling";
	int high=sizeof(arr)/sizeof(char *)-1;
	printf("input arr is :");
	int i;
	for(i=0;i<=high;i++)
		printf(" %s ",arr[i]);
	printf("\ninput v is %s \n",v);
	int index=bisearch(arr,0,high,v);
	printf("the index is%i\n",index);
}
