#include <vector>

class Almacen{
	public:
		Almacen(int);
		void add(int);
		void delet(int)
		bool empty();
		int size();

	private:
		std::vector<int> *lista;
}
