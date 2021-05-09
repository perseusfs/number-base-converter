#include<stdio.h>
long base2(int n){ 
	int remainder,i=1;
	long binary=0;
	while(n!=0){
		remainder=n%2;            
		n/=2;
		binary=binary+ remainder*i;
		i*=10;
	}
	return binary;
}
long base8(int n){
	int octal=0,i=1,remainder;
	while(n!=0){
		remainder=n%8;              
		n/=8;
		octal=octal+ remainder*i;
		i*=10;
	}
	return octal;
}
void base16(int num)
{    
    int remainder;
    if (num == 0)
        return;
    else
    {
        remainder = num % 16;       
        base16(num/16);     
        if(remainder >= 10)
            printf("%c", remainder+55);
        else
            printf("%d", remainder);
    }
}
int main(){
	int n;
	char x;
	printf("Enter a number then enter B or b for binary, X or x for hexadecimal, H or h for octal\n");
	while(scanf("%d %c",&n, &x) != EOF){
	if((x=='b') || (x=='B'))
		printf("%d\n",base2(n));
	else if((x=='o') || (x=='O'))
		printf("%d\n",base8(n));
	else if((x='h') || (x='H')){
		base16(n);
		printf("\n");
	}
}
return 0;
}
