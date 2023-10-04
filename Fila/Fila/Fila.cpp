#include <iostream>
using namespace std;

// definicao de tipo
struct NO {
	int valor;
	NO* prox;
};

NO* inicio = NULL;
NO* fim = NULL;

// headers
void menu();
void inicializar();
void insere(std::queue<int>& fila, int elemento) {
    fila.push(elemento);
}

// Função para exibir e remover o primeiro elemento da fila
void remove(std::queue<int>& fila) {
    if (!fila.empty()) {
        int primeiro_elemento = fila.front();
        std::cout << "Elemento removido: " << primeiro_elemento << std::endl;
        fila.pop();
    } else {
        std::cout << "Fila Vazia" << std::endl;
    }
}
//--------------------------


int main()
{
	menu();
}

void menu()
{
	int op = 0;
	while (op != 4) {
		system("cls"); // somente no windows
		cout << "Menu Fila";
		cout << endl << endl;
		cout << "1 - Inicializar Fila \n";
		cout << "2 - Inserir elemento \n";
		cout << "3 - Remover elemento  \n";
		cout << "4 - Sair \n";

		cout << "Opcao: ";
		cin >> op;

		switch (op)
		{
		case 1: inicializar();
			break;
		case 2:insere();
			break;
		case 3: remove();
			break;
		case 4:
			return;
		default:
			break;
		}

		system("pause"); // somente no windows
	}
}

void inicializar()
{

	// se a lista já possuir elementos
	// libera a memoria ocupada
	NO* aux = inicio;
	while (aux != NULL) {
		NO* paraExcluir = aux;
		aux = aux->prox;
		free(paraExcluir);
	}

	inicio = NULL;
	fim = NULL;
	cout << "Fila inicializada \n";

}


void insere()
{
	// aloca memoria dinamicamente para o novo elemento
	NO* novo = (NO*)malloc(sizeof(NO));
	if (novo == NULL)
	{
		return;
	
    fila.push(elemento);
}

	cout << "Digite o elemento: ";
	cin >> novo->valor;
	novo->prox = NULL;


}

void remove()
{
	 if (!fila.empty()) {
        int primeiro_elemento = fila.front();
        std::cout << "Elemento removido: " << primeiro_elemento << std::endl;
        fila.pop();
    } else {
        std::cout << "Fila Vazia" << std::endl;
    }
}

 if (fila.empty()) {
        std::cout << "Fila Vazia" << std::endl;
    } else {
        std::cout << "Elementos da fila: ";
        std::queue<int> fila_temp = fila;
        while (!fila_temp.empty()) {
            std::cout << fila_temp.front() << " ";
            fila_temp.pop();
        }
        std::cout << std::endl;
    }
}


}

