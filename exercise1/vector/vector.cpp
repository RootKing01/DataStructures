#include "/home/rootking/Scrivania/exercise1/vector/vector.hpp"
namespace lasd {

/* ************************************************************************** */
template <typename Data>
Vector<Data>::Vector()
{
    vectorDimension = getDimension();
    buildedVector = new Data[vectorDimension];
};

template <typename Data>
Vector<Data>::Vector(int dimension)
{
    vectorDimension = dimension;
    buildedVector = new Data[dimension];

};

template <typename Data>
int Vector<Data>::getDimension()
{
    int dimension;

    std::cout << "Put here array dimension:\n";
    std::cin >> dimension;
    return dimension;
};



/* ************************************************************************** */

}
