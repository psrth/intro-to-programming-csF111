# Control Flow in C
Blocks used for decision-making in C.

1. if-else statements
2. Ternary Operator
3. Switch-case Statements

## If-Else
```
if (condition 1){
    execute statement 1
}
else if (condition 2) {
    execute statement 2
}
else {
    execute default statment
}
```

## Ternary Operator
Works as an if-else statement.
```
(game_active) ? (player_alive) : (player_dead);
```

## Looping
A set of code that executes again and again based on a pre-defined condition. Helps programmer carry out repetitive tasks with ease.  
  
` as long as (a condition is true) execute (a set of commands) and update (the condition)`  

>> practice loop-pattern programs 

### Entry and Exit Controlled Loops
**Entry Controlled Loops** have the condition at the beginning of the loop. the `for-loop` and `while-loop` are entry controlled and will only run once the condition is valid atleast once.  

**Exit Controlled Loops** like the `do-while` loop have the condition at the end of the executable block, which means that the block will be executed *atleast once* before the condition is verified. Especially useful, eg. for displaying game menus, etc. which need to be shown to the user atleast once before they can take an action.

### Truth Conditions
1. `while (answer == "Y")` evalutes to `true`  
2. `while (1)` evalutes to `true` (for any non-zero number)  
3. `while (0)` evalutes to `true`  
4. `while (game_active && player_lives > 0)` evalutes to truth of and statement  
5. `while (printf("Enter a value: "))` evalutes to `true`, because `printf()` returns the number of characters

### While-Loop
There are a few common types of while-loops:  

**Executes several lines of code**
```
while(game_active) {
    statement 1;
    statement 2;
    ...
    statement n;
}
```

**Executes single line of code**
```
while(game_active)
    printf("Game is active.");
```

**Executes only the condition**
```
while(game_active++);
printf("Number of games is %d.", game_active);
```


### Nested Loops
Nested Loops are used across two parameters (say, `i` and `j`). The number of times the inner code block is executed is the product of `i` and `j`. Used espescially for pattern printing.  
*(easy to visualise each parameter as row and column)*

**Say, we need to print a number triangle, like so:**
![triangle](https://github.com/psrth/intro-to-programming-csF111/blob/main/rsc/loop-triangle.png)

```c
#include<stdio.h>

int main() {
	int rows = 0;
	printf("Enter number of rows: ");
	scanf("%d", &rows);
	
	for (int i = 1; i <= rows; i++){
		int spaces_count = rows-i;
		
		while (spaces_count > 0){
			printf("  ");
			spaces_count--;
		}

		int i_d = i;
		int i_dd = i;

		while(i_d>0){
			printf("%d ", i_dd);
			i_d--;
			i_dd++;
		}

		while(i_d+1 < i){
			printf("%d ", i_dd);
			i_d++;
			i_dd--;
		}

		printf("\n");		
	}
	return 0;
}
```

### For-Loop
```
for (init; condition; modification) {
    block;
}
```   

**Different Forms**
1. **Take out initialisation**  
```
int i = 0;
for (; i < 5; i++);
```  

2. **Take out modification**  
`for (int i = 0; i < 5; ) i++;`  

3. **Empty for-loop**  
`for (; ;);` is an infinite loop.

4. **Multiple Sets of Conditions**
```
for (int chr_1 = 65, chr_2 = 97; chr_1 < 91, chr_2 < 123; chr_1++, chr_2++) {
    printf("%c = %d \n", chr_1, chr_1);
    printf("%c = %d \n", chr_2, chr_2);
}
```

### Break and Continue
**break** — immediate suspension of the current loop  
**continue** — restart a new iteration