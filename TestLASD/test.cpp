#include <iostream>
using namespace std;
#include "/home/rootking/Scrivania/test.hpp"

int getDimension()
{
      int dimension;

      std::cout << "Put here array dimension:\n";
      std::cin >> dimension;
      return dimension;
}

int main()
{
    // Vector<int>* newVector = nullptr;
    // newVector= new Vector<int>();

    Vector<int> newVector = Vector();
    int dimension = newVector.vectorDimension;

    std::cout << dimension << endl; 
}

