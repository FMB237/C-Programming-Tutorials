//In this version of the program i will add way to quit the program and an operation handling
//Let start

#include<stdio.h>

//Let declare our functions

float addition(float a,float b){
    return a+b;
}
float substraction(float a,float b){
    return a-b;
}
float mutilplication(float a,float b){
    return a*b;
}
float divsion(float a,float b){
    if(b!=0){
        return a/b;
    }else{
 printf("ERROR Division by zero!");
 return  1;
    }
}
   
//Let begin the program
    int main(void){
       float x,y;
       char operation;
    
        printf("===Calculator Version2===\n");

        while(1){
            printf("Enter a value for x :");
            scanf("%f",&x);
            printf("Select an Operation (+,-,*,/) :");
            scanf(" %c",&operation);

            if (operation== 'q' || operation == 'Q')
            {
                printf("Existing Good bye \n");
                break; //Going out of the loop
            }

            if(operation!='+' && operation !='-' && operation!='*' && operation !='/'){
                printf("Invalid Operation");
                continue; //So continue the program
            }
             printf("Enter a value for y:");
             scanf("%f",&y);
          
            switch (operation)
            {
            case '+':
              printf("Sum = %.2f\n",addition(x,y));
                break;

            case '-':
            printf("Differcent = %.2f\n",substraction(x,y));    
            break;

            case '*':
            printf("Product = %.2f\n",mutilplication(x,y));    
            break;

            case '/':
            printf("Quotient = %.2f\n",divsion(x,y));    
            break;

            default:
            printf("Invalid Operation\n");
                break;
            }
        }
        


    }
    
