/*
17. An Electricity board charges the following rates for the use of electricity:
   - for the first 200 units 80 paise per unit.
   - for the next 100 units 90 paise per unit.
   - beyond 300 units Rs. 1 per unit.
   - All users are charged a minimum of Rs. 100 as meter charge.
   - If the total amount is more than Rs. 400, then an additional surcharge of 15% of total amount is charged.
   Write a program to read the name of the user, number of units consumed and print out the charges.
*/

#include <stdio.h>

int main()
{
    int units;
    float charge = 0, total, surcharge = 0;
    char name[50];

    printf("Enter customer name: ");
    fgets(name, 50, stdin);
    printf("Enter units consumed: ");
    scanf("%d", &units);

    if (units <= 200)
    {
        charge = units * 0.80;
    }
    else if (units <= 300)
    {
        charge = 200 * 0.80 + (units - 200) * 0.90;
    }
    else
    {
        charge = 200 * 0.80 + 100 * 0.90 + (units - 300) * 1.00;
    }

    total = charge + 100;

    if (total > 400)
    {
        surcharge = total * 0.15;
        total += surcharge;
    }

    printf("\nElectricity Bill\n----------------\n");
    printf("Customer: %s", name);
    printf("Units: %d\n", units);
    printf("Usage Charge: Rs. %.2f\n", charge);
    printf("Meter Charge: Rs. 100.00\n");
    printf("Surcharge: Rs. %.2f\n", surcharge);
    printf("Total: Rs. %.2f\n", total);

    return 0;
}