#include <iostream>
using namespace std;
int numRobo = 0; //Contador de Robos
int numExp = 0; //Contador dos Experimentos

class Lista{
	public:
		int task;
		Lista *prox;

	void addTask(Lista* anterior, int newTask){
    		Lista* nLista = new Lista();
    		nLista->task = newTask;
    		nLista->prox = anterior->prox;
		anterior->prox = nLista;
	}
};

class Robos{
	public:
		int id;
		bool isWorking;
		Robo *next;
	Robos{
		this.id = numRobo++;
	}
	
	void escolheRobo(int task){
		if(this.isWorking)
			this.next->escolheRobo(task);
		else
			this.doTask(task);
	}
	
	void doTask(int task){ //faz a task correspondente ao numero
		switch(task){
			case 0:
				//Aumenta temp
				break;
			case 1:
				//Aumenta press
				break;
			case 2:
				//Add quim1
				break;
			case 3:
				//Add quim2
				break;
			case 4:
				//Add agua
				break;
		}
	}
};

class Experimento{
	public:
		int id;
		Lista* actions;

	Experimento{
		this.id = numExp++;
		this.actions = new Lista();
	}

	void execute(){
		cout << "Iniciando experimentos!";
		int i = 0;
		while(this.Lista->next != NULL){
			doTask(this.action[i]);
			i++;
		}
		doTask(this.action[i]);
		cout << "Finalizando experimentos!";
	}

	void doTask(int taskId){
	    switch(taskId){
		case 0:
			escolheRobo(0);
			break;
		case 1:
			escolheRobo(1);
			break;
		case 2:
			escolheRobo(2);
			break;
		case 3:
			escolheRobo(3);
			break;
		case 4:
			escolheRobo(4);
			break;
		case 100:
			bool flag = false;
			int task = 0;
			while(!flag){ //flag = condicao de parada
				cin << task;
				if(task == 99){
					flag = true;
				}else{
					this.Lista->addTask(task);
				}
			}
			break;
		default:
			cout << "Task não Cadastrada, encerrando experimento!";
	}

}
	
};



Experimento clone(Experimento *e0){
	Experimento newExp;
	newExp = e0;
	return newExp;
}	

int main (void){
	bool flag = false;
	int task = 0;
	Experimento e1;
	while(!flag){ //flag = condicao de parada
		cin << task;
		if(task == 99){
			flag = true;
		}else{
			e1->Lista->addTask(task);
		}
	}

	e1->execute();

	Experimento e2 = clone(e1);
}
