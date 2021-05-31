
#include <stdio.h>
int main()
{
    int banco; //Acumulador 
    int monto; //Monto a ahorrar por evento
    int numdepositos; //La cantidad de veces que fui al banco
    char respuesta; //Es para saber si queremos realizar otro deposito 

    numdepositos=0;
    banco=0;
    monto=0;
    respuesta = 's';

    do
    {
        //Voy al banco
        respuesta = 's';
        printf("\n\n Monto a depositar: ");
        scanf("%d", &monto);
        banco = banco + monto; //Acumulador
        numdepositos = numdepositos + 1; //Contador

        printf("¿Quieres realizar otro deposito? (s/n)");
        scanf("%c", &respuesta);
    } while (respuesta != 'n');//Condicion-while = mientras

    printf("Dinero que tienes en el banco %d", &banco);
    printf("Numero de depositos %d ", &numdepositos);
    
    return 0;
}