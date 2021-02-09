#include<stdio.h>

void main() {
	float buy_price = 2414577.51;
	float bitcoins = 0.01615357;
	float sell_price = 0.0f;
	/* printf("Average buy price: "); */
	/* scanf("%f", &buy_price); */

	/* printf("Bitcoin quantity: "); */
        /* scanf("%f", &bitcoins); */

	printf("Sell price: ");
        scanf("%f", &sell_price);

	printf("========================== \n");
	float profit = bitcoins*(sell_price - buy_price);
	printf("Profit: %f\n", profit);
	printf("========================== \n");

}
