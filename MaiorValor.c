#include <stdio.h>
#include <stdlib.h>

// 12.345 % 10 = 5 <--
// 12.345 / 10 = 1.234
// 1.234 & 10 = 4 <-- ***
// 1.234 / 10 = 123
// 123 % 10 = 3 <-- ***
// 123 / 10 = 12
// 12 % 10 = 2 <-- ***
// 12 / 10 = 1 <--

int getnum(int j){
	int m,c,d,u;

	if (j <= 9999 && j >= 1000){
		u = j % 10;
		j = j / 10;
		d = j % 10;
		j = j / 10;
		c = j % 10;
		m = j / 10;
		return m + c + d + u;
	}	
	else if (j < 1000 && j > 99){
		u = j % 10;
		j = j / 10;
		d = j % 10;
		c = j / 10;
		return c + d + u;
	}
	else if (j <= 99 && j > 9){
		u = j % 10;
		d = j / 10;
		return d + u;
	}
	else if(j <= 9){
		u = j;
		return u;
	}
	return 0;
}

int main(){
    int n,m,s,aux = 0;

    printf("\n Insira o primeiro numero : ");
    scanf("%d",&n);
    printf("\n Insira o segundo o numero : ");
    scanf("%d",&m);
    printf("\n Insira o terceiro numero : ");
    scanf("%d",&s);

    for (int i = n; i <= m; i++){ 
		if (getnum(i) == s && i > aux) aux = i;

    }
	printf("%d",aux);
}
