#include <stdio.h>

int compare(char a[],char b[])  
{  
    int flag=0,i=0;   
    while(a[i]!='\0' &&b[i]!='\0')
    {  
       if(a[i]!=b[i])  
       {  
           flag=1;  
           break;  
       }  
       i++;  
    }  
    if(flag==0)  
    return 0;  
    else  
    return 1;  
}  

int main(void) 
{
	char str[10];
	int roll,val,k;
	char class_room;
	char food[2];
	scanf("%s %d",str,&val);
	int maxPeople = val/4;
	int arr[5][maxPeople];
	int j0=0,j1=0,j2=0,j3=0,j4=0;
	while(1)
	{
		scanf("%s",str);
		if(compare(str,"fin")==0)
		break;
		scanf("%d %c %s",&roll,&class_room,food);
		
		if(class_room=='A')
		{
			if(compare(food,"V")==0)
			{
				if(j0==maxPeople)
				{
					arr[4][j4]=roll;
					j4++;
				}
				else
				{
					arr[0][j0]=roll;
					j0++;
				}
			}
			else if(compare(food,"NV")==0)
			{
				if(j1==maxPeople)
				{
					arr[4][j4]=roll;
					j4++;
				}
				else
				{
					arr[1][j1]=roll;
					j1++;
				}
			}
		}
		else if(class_room=='B')
		{
			if(compare(food,"V")==0)
			{
				if(j2==maxPeople)
				{
					arr[4][j4]=roll;
					j4++;
				}
				else
				{
					arr[2][j2]=roll;
					j2++;
				}
			}
			else if(compare(food,"NV")==0)
			{
				if(j3==maxPeople)
				{
					arr[4][j4]=roll;
					j4++;
				}
				else
				{
					arr[3][j3]=roll;
					j3++;
				}
			}
		}
		
	}
	for(int i=0;i<5;i++)
	{
		switch(i)
		{
			case 0: printf("AV : [");
					for(k=0;k<j0-1;k++)
					printf("%d,",arr[i][k]);
					if(j0>0)
					printf("%d",arr[i][k]);
					printf("]\n");
					break;
			case 1: printf("ANV : [");
					for(k=0;k<j1-1;k++)
					printf("%d,",arr[i][k]);
					if(j1>0)
					printf("%d",arr[i][k]);
					printf("]\n");
					break;
			case 2: printf("BV : [");
					for(k=0;k<j2-1;k++)
					printf("%d,",arr[i][k]);
					if(j2>0)
					printf("%d",arr[i][k]);
					printf("]\n");
					break;
			case 3: printf("BNV : [");
					for(k=0;k<j3-1;k++)
					printf("%d,",arr[i][k]);
					if(j3>0)
					printf("%d",arr[i][k]);
					printf("]\n");
					break;
			case 4: printf("NA : [");
					for(k=0;k<j4-1;k++)
					printf("%d,",arr[i][k]);
					if(j4>0)
					printf("%d",arr[i][k]);
					printf("]\n");
					
		}
	}
}