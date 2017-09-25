//Jake Koney
//COSC 2030
//HOMEWORK 1

#include <iostream>
#include <array>
using namespace std;


template <class T>
class Collection {

private:
	int size;
	T *Array;
	

public:

	bool isEmpty();
	void makeEmpty();
	void insert(T const& x);
	void remove(T x);
	void removeRandom();
	bool notContained(T x);
	void printArray();


	void MakeArray() {

		cout << "Please set your array size:";
		cin >> size;
		Collection<int> Array[size];
		
	

	}

	template<class T>
	bool Collection<T>::isEmpty()
	{
		if (size == 0)
		{
			return true;
		}
		
	}

	template<class T>
	void Collection<T>::makeEmpty()
	{
		if (isEmpty())
		{
			cout << "The array is already empty." << endl;
		}
		else
		{
			for (int i = 0; i < size; i++)
			{
				Array[i] = NULL;
			}
			size = 0;
		}
	}

	template<class T>
	void Collection<T>::insert(T const & x)
	{
		Array[size] = x;
		size++;
	}

	template<class T>
	void Collection<T>::remove(T x)
	{
		int i = 0;
		int count = 0;
		while (i < size)
		{
			if (Array[i] == x || &Array[i] == &x)
			{
				count++;
			}
			i++;
		}
		if (count == 0)
		{
			cout << "The object is not in the collection" << endl;
		}
		else if (count == 1)
		{
			int i = 0;
			int position = 0;
			while (i < size)
			{
				if (Array[i] == x || &Array[i] == &x)
				{
					position = i;
				}
				i++;
			}
			while (position < size)
			{
				Array[position] = Array[position + 1];
				position++;
			}
			Array[size - 1] = NULL;
			size--;
		}
		else
		{
			int i = 0;
			int y = 0;
			int position[count] = {};
			while (i < size)
			{
				if (Array[i] == x || &Array[i] == &x)
				{
					position[y] = i;
					y++;
				}
				i++;
			}
			for (int z = 0; z < count; z++)
			{
				int post = position[z];
				while (post < size)
				{
					Array[post] = Array[post + 1];
					post++;
				}
				Array[size - 1] = NULL;
				size--;
				for (int a = 0; a< count; a++)
				{
					position[a]--;
				}
			}
		}
	}

	template<class T>
	void Collection<T>::removeRandom()
	{
		if (isEmpty())
		{
			cout << "The list empty" << endl;
		}
		else
		{
			int position = rand() % size;
			cout << "Object from position " << position << " has been removed." << endl;
			while (position < size)
			{
				if (isEmpty())
	{
		cout << "The list already empty" << endl;
	}
	else
	{
		int position = rand() % size;
		cout << "Object from position " << position << " has been removed." << endl;
		while (position < size)
		{
			Array[position] = Array[position + 1];
			position++;
		}
		
		Array[size - 1] = NULL;
		size--;
	}[position] = Array[position + 1];
				position++;
			}
		
			Array[size - 1] = NULL;
			size--;
		}
	}

	template<class T>
	void Collection<T>::printArray()
	{
		cout << "[";
		for (int i = 0; i < size; i++)
		{
			cout << Array[i] << " ";
		}
		cout << "]" << endl;
	}

	template<class T>
	bool Collection<T>::notContained(T x)
	{

		bool notContained = true;
		int i = 0;
		while (i < size)
		{
			if (Array[i] == x || &Array[i] == &x)
			{
				notContained = false;
			}
			i++;
		}
		return notContained;
	}


};




int main() {
		

	Array.insert(2);
	Array.insert(3);
	Array.insert(4);

	Array.printArray();

	Array.remove(2);
	Array.printArray();
	Array.removeRandom();
	Array.printArray();
	
};


