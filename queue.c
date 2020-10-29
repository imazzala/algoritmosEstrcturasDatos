#include <stdio.h>
#define SIZE 5

int values[SIZE], front = -1, rear = -1;

void enQueue(int value){

	if((rear - front) == SIZE-1){ //Esta condición permite agregar y quitar elementos sin problemas del Queue
		printf("Nuestro Queue está lleno\n");
	} else{
		
		if(front == -1){
			front = 0;
		}
		
		rear++;
		values[rear] = value;
		printf("Se insertó el valor %d correctamente\n", value);
	}
}

void deQueue(){

	if(front == -1)
	{
		printf("Nuestro Queue está vacío\n");
	}
	else
	{
		printf("Se eliminó el valor %d\n", values[front]);
		front++;

		if(front > rear){
			front = rear = -1;
		}
	}
}

main(int argc, char const*argv[])
{
	enQueue(1);
	enQueue(2);
	enQueue(3);
	enQueue(4);
	enQueue(5);
	enQueue(6);
	deQueue();
	deQueue();
	deQueue();
	deQueue();
	deQueue();
	deQueue();
	enQueue(6);
	enQueue(7);
	enQueue(8);
	enQueue(9);
	enQueue(10);
	enQueue(11);


	return 0;
}