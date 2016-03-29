#include <stdio.h>
#include <stdlib.h>

bool esprimo(int a)

{

	int i, b=0;
    if (a==2)

		return true;

	for (i=1; i <= a; i++)
	{

		if (a%i == 0)

			b+=1;
	}

	if (b > 2)

		return false;

	else

		return true;
}

int main()
{
    //ejercicio 1:
    printf("ingrese su nombre \n");

    scanf("%s", &a);

    for(i=1; i<=10; i++)

        printf("%s\n",a);
    //ejercicio 2:
    int ce=0,ct=0,csl=0;

    printf("presione los botones \n");

    while((b=getchar())!= EOF)

    {

        if (b==' ')

            ce+=1;

        else if ( b == '\t')

            ct+=1;

        else if ( b == '\n')

            csl+=1;
    }

    printf ("la cantidad de espacios en blanco es: %d\n", ce);

    printf ("la cantidad de tabuladores  es: %d\n", ct);

    printf ("la cantidad de saltos de linea es %d\n", csl);
    //ejercicio 3

    int numero;

    printf("ingrese un numero que termine en cero no nulo: ")

    scanf("%d",&numero);

    if (numero>0 && numero%10==0)

        printf(numero*numero)
    //ejercicio 4
    int c=0;

    printf("ingresa un numero \n");

    scanf("%d", &n);

    for(j=1; j<=n ; j++)

        c+=i;

    printf("la suma los n primero numeros es %d ",c);

    //ejercicio 5
    int s=0
    printf("ingresa un numero \n");
    scanf("%d", &n1);

    if (esprimo(h)== true)
       for(h=1; h<=n1 ; h++)
            s+=h;

    printf("la suma los n primeros numeros primos es %d ",s);

    //ejercicio 6

    int o,x,z=1;

    printf("ingrea la potencia \n");

    scanf("%d", &o);

    printf("ingrea la base \n");

    scanf("%d", &x);

    for (l=1; l<=o ; l++)

        z *= x;
    printf("el resultado es %d a es %d\n", z);

    //ejercicio 7
    int e,i,f=1;

    printf("ingrese el numero factorial \n");

    scanf("%d", &e);

    for (i=1; i<=r ; i++)

        f*=i;

	printf("el resultado es %d ",f);

    return 0;
    // ejercicio 8
    printf("ingrese los numeros ",f);
    int n1,n2,n3,mayor,medio,menor;
    scanf("%d", &n1);
    scanf("%d", &n2);
    scanf("%d", &n3);
    if (n1 > n2)
    {
        if (n1<n3)
        {

            mayor=n3;
            medio=n1;
            menor=n2;
        }
        else if (n3<n2)
        {

            mayor=n1;
            medio=n2;
            menor=n3;
        }
        else
        {

            mayor=n1;
            medio=n3;
            menor=n2;
        }
    }


    else if (n2<n3)
    {
        menor=n1;
        medio=n2;
        mayor=n3;
    }
    else
    {
        mayor=n2;
        if (n1>n3)
            medio=n1;
            menor=n3;
        else
            medio=n3;
            menor=n1;
    }

    printf(menor,medio,mayor) ;
    // ejercicio 9
    int p,q,t,u,md=1,cociente;
    printf("ingrese los numeros \n");
    scanf("%d", &p);
    scanf("%d", &q);
    scanf("%d", &t);
    scanf("%d", &u);
    while (cociente!=1)
    {
        for (r=2,r<=(p+q+t+u),r++){
        if(esprimo(r)){

        if((p+q+t+u)%r==0)
     {

            md=md*r;
            p=p/r;
            q=q/r:
            t=t/r;
            u=u/r;
            if(p%r==0 && q%r==0 && t%r==0 && u%r==0)
                cociente=1;
    }
    }}
    printf("el mcd es ",md);
    scanf("%d", &k);
    //ejercicio 10
    printf("escriba un numero: ");
    int k;
    float hk;
    for(lm=0,lm<k,lm++)
        hk=hk+(1/lm)

}









