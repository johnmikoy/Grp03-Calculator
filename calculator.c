#include <stdio.h>
 
int main()
{
    int num1,num2;
    float result;
    char ch;    //to store operator choice
     
    printf("Enter first number: ");
    scanf("%d",&num1);
    printf("Enter second number: ");
    scanf("%d",&num2);
     
    printf("Choose operation to perform (+,-,*,/, %): ");
    scanf(" %c",&ch);
     
    result=0;
    switch(ch)    
    {
        case '+':
		result= num1-num2;
		printf("Result: %d %c %d = %f\n",num1,ch,num2,result);
		break;
             
        case '-':
		result= num1-num2;
		printf("Result: %d %c %d = %f\n",num1,ch,num2,result);
		break;

        case '*':
		result= num1*num2;
		printf("Result: %d %c %d = %f\n",num1,ch,num2,result);
		break;

        case '/':
        
        	if (num1 >= 1 && num2 != 0)
        	{
        		result = (float)num1/(float)num2;
        		printf("Result: %d %c %d = %f\n",num1,ch,num2,result);
		}
		
		else
		{
			printf ("Cannot be divided by zero");
		}
		break;
		
		case '%':
		result = num1%num2;
		printf("Result: %d %c %d = %f\n",num1,ch,num2,result);
		break;
	

        default:
            printf("Invalid operation.\n");
    }
 
   
    return 0;
}
