#include "almacen.h"

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

bool Almace::empty(){
	return lista->empty();
}

int Almacen::size(){
	return lista->size();
}
