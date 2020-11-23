#include <iostream>
#include "GeneralList.hpp"

template <class T>
class Stack {
	private:
		List<T> _data;
		size_t _size;
		
	public:
		//Default constructor
		Stack(){
			_size = 0;
		}

		//Default copy constructor
		Stack(const Stack &stack){
			_data = stack._data;
			_size = stack._size;
		}

		//Getters
		T top() const{
			return _data.front();

			
		}

		size_t size() const{
			return _size;
		}

		//Adding data to the data structure
		void push(T value){
			_data.add_front(value);
		}

		//Removing data from the data structure
		void pop(){
			_data.rm_front();
		}

		bool search(T value) {
			return _data.search(value);
		}


		bool empty() const{
			return _data.empty();
		}

		void print(){
			_data.print();
		}

		//This overloaded operator is empty, please implement
		Stack<T> operator=(const Stack<T> &stack) {
			stack._data = _data;
			stack._size() = _size;
			return *this;
		}
        template <class S>
        friend std::ostream &operator<<(std::ostream &out, const Stack<S> &stack);
    

};

template <class S> std::ostream &operator <<(std::ostream &out, const Stack<S> &stack){
    out << stack._data;
// out << stack._size;
return out;
}

