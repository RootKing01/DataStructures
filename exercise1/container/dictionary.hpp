
#ifndef DICTIONARY_HPP
#define DICTIONARY_HPP

/* ************************************************************************** */

#include "mappable.hpp"

/* ************************************************************************** */

namespace lasd {

/* ************************************************************************** */

template <typename Data>
class DictionaryContainer: public TestableContainer<Data> {
  // Must extend TestableContainer<Data>

private:

  // ...

protected:

  // ...

public:

  // Destructor
  // ~DictionaryContainer() specifiers
  ~DictionaryContainer() = default;
  /* ************************************************************************ */

  // Copy assignment
  // type operator=(argument); // Copy assignment of abstract types is not possible.
  DictionaryContainer& operator=(DictionaryContainer& copyElement) & = delete;
  // Move assignment
  // type operator=(argument); // Move assignment of abstract types is not possible.
  DictionaryContainer& operator=(DictionaryContainer&& moveElement) & = delete;
  /* ************************************************************************ */

  // Comparison operators
  // type operator==(argument) specifiers; // Comparison of abstract types is not possible.
  bool operator==(DictionaryContainer& comparisonElement) const = delete;
  // type operator!=(argument) specifiers; // Comparison of abstract types is not possible.
  bool operator!=(DictionaryContainer& comparisonElement)const = delete;
  /* ************************************************************************ */

  // Specific member functions

  // type Insert(argument) specifiers; // Copy of the value
  inline bool Insert(Data& argument)
  {
    if(element)
    {
      std::cout << "Argument received: " << element << std::endl;
      return true;
    }
    else
    {
      return false;
    }
  }
  //In this code, the Insert function takes a Data argument by value, 
  //meaning it makes a copy of the value passed to it.
  
  // type Insert(argument) specifiers; // Move of the value
  inline bool Insert(Data&& argument) 
  {
    std::cout << "Argument received by move: " << argument << std::endl;
  }
  // Call the function with the value
  //Insert(std::move(value)); // Using std::move to cast lvalue to rvalue
  
  // type Remove(argument) specifiers;

  // type InsertAll(argument) specifiers; // Copy of the value; From TraversableContainer; True if all are inserted
  // type InsertAll(argument) specifiers; // Move of the value; From MappableContainer; True if all are inserted
  // type RemoveAll(argument) specifiers; // From TraversableContainer; True if all are removed

  // type InsertSome(argument) specifiers; // Copy of the value; From TraversableContainer; True if some is inserted
  // type InsertSome(argument) specifiers; // Move of the value; From MappableContainer; True if some is inserted
  // type RemoveSome(argument) specifiers; // From TraversableContainer; True if some is removed

};

/* ************************************************************************** */

}

#include "dictionary.cpp"

#endif
