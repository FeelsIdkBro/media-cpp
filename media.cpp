# include <bits/stdc++.h>
int main()
{
    float  media = 0.0, n1, n2, n3, n4;
    printf("--Media de 4 notas!\n Escreva 4 notas. \n insira a Nota 1 \n");
    scanf("%f",&n1);
    printf("Insira a Nota 2 \n");
    scanf("%f",&n2);
    printf("Insira a Nota 3 \n");
    scanf("%f",&n3);
    printf("Insira a Nota 4 \n");
    scanf("%f",&n4);
    if(n1 <=10 && n1 >= 0 && n2 <=10 && n2 >= 0 && n3 <=10 && n3 >= 0 && n4 <=10 && n4 >= 0){
        media = (n1+n2+n3+n4)/4;
        printf("A media de suas 4 notas eh: %.2f", media);
    } 
    else{
        printf("Valores INVALIDOS! \n Tente valores que ficam entre 0 e 10");
    }
    return 0;
}