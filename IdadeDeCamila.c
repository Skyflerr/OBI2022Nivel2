#include <stdio.h>

int main(){
    int a,s,d;

    printf("\n Insira o primeiro numero : ");
    scanf("%d",&a);
    printf("\n Insira o segundo numero : ");
    scanf("%d",&s);
    printf("\n Insira o terceiro numero : ");
    scanf("%d",&d);

    if ((a<s && a>d) || (a<d && a>s)) printf("\n %d",a);
    else if ((s<a && s>d) || (s<d && s>a)) printf("\n %d",s);
    else if ((d<a && d>s) || (d<s && d>a)) printf("\n %d",d);
    return 0;
}