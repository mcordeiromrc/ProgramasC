// Point-of-Sale System in C
#include <stdio.h>
#include <stdlib.h>

void main(void)
{
    int code, qty;
    float price, amt, totalAmound, cash, change;
    char addAnother;

    do
    {
        system("cls");
        printf("==========================================\n");
        printf("              PIZZA BOX MENU\n");
        printf("==========================================\n");
        printf("[1] Hawaiian Overload\t\tPhp 350.00\n");
        printf("[2] Cheese Overload\t\tPhp 320.00\n");
        printf("[3] All-Veggie Overload\t\tPhp 350.00\n");
        printf("[4] All-Meat Overload\t\tPhp 370.00\n");
        printf("[5] All-in Overload\t\tPhp 400.00\n");

        printf("\nEnter Code:\t");
        scanf("%d", &code);
        printf("\nEnter Quantity:\t");
        scanf("%d", &qty);

        switch (code)
        {
        case 1:
            price = 350.00;
            break;
        case 2:
            price = 320.00;
            break;
        case 3:
            price = 350.00;
            break;
        case 4:
            price = 370.00;
            break;
        case 5:
            price = 400.00;
            break;

        default:
            break;
        }

        amt = price * qty;
        totalAmound += amt;

        printf("\n------------------------------------------");
        printf("\nAmound:\t\t\tPhp %.2f\n", amt);
        printf("Total Amound:\t\tPhp %.2f\n", totalAmound);

        do
        {
            printf("\n\nAdd another order (y/n)?: ");
            addAnother = getch();
            if (addAnother == 'y' || addAnother == 'Y' || addAnother == 'n' || addAnother == 'N')
            {
                break;
            }
            else
            {
                printf("\nDigite (y ou n)");
            }
        } while (addAnother != 'y' || addAnother != 'Y' || addAnother != 'n' || addAnother != 'N');

    } while (addAnother == 'y' || addAnother == 'Y');

    do{
        printf("\nCash Tendered: ");
        scanf("%f", &cash);
    }while(cash < totalAmound);

    change = cash-totalAmound;
    printf("\nDevolute:\t\t\t %.2f\n", change);
}