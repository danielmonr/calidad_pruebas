#include <vector>

class Almacen{
	public:
		Almacen();
		Almacen(int);
		void add(int);
		void delet(int);
		bool empty();
		int size();

		std::vector<int> *lista;
};
