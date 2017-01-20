#include "almacen.h"

<<<<<<< HEAD
=======
Almacen::Almacen(){
	lista = new std::vector<int>;
}

>>>>>>> 8a6ed0673bd336adf2e7d4878fb7786f785b473d
Almacen::Almacen(int n){
	lista = new std::vector<int>;
	lista->reserve(n);
}

void Almacen::delet(int pos){
	lista->erase(lista->begin()+pos);
}

void Almacen::add(int i){
	lista->push_back(i);
}

<<<<<<< HEAD
bool Almace::empty(){
=======
bool Almacen::empty(){
>>>>>>> 8a6ed0673bd336adf2e7d4878fb7786f785b473d
	return lista->empty();
}

int Almacen::size(){
	return lista->size();
}
