
#ifndef MAPPABLE_HPP
#define MAPPABLE_HPP

/* ************************************************************************** */

#include <functional>

/* ************************************************************************** */

#include "traversable.hpp"

/* ************************************************************************** */

namespace lasd {

/* ************************************************************************** */

template <typename Data>
class MappableContainer: public TraversableContainer<Data> {
  // Must extend TraversableContainer<Data>

private:

  // ...

protected:

  // ...
  MapFun = std::function<void(Data &)>;

public:

  // Destructor
  // ~MappableContainer() specifiers
  ~MappableContainer() = default;
  /* ************************************************************************ */

  // Copy assignment
  // type operator=(argument); // Copy assignment of abstract types is not possible.
  MappableContainer& operator=(MappableContainer& copyElement) & = delete;
  // Move assignment
  // type operator=(argument); // Move assignment of abstract types is not possible.
  MappableContainer& operator=(MappableContainer&& copyElement) & = delete;
  /* ************************************************************************ */

  // Comparison operators
  // type operator==(argument) specifiers; // Comparison of abstract types is not possible.
  bool operator==(MappableContainer& other) const = delete;
  // type operator!=(argument) specifiers; // Comparison of abstract types is not possible.
  bool operator!=(MappableContainer& other) const = delete;
  /* ************************************************************************ */

  // Specific member function

  // using MapFun = std::function<void(Data &)>;

  // type Map(argument) specifiers;
  virtual inline void Map(MapFun)
  {

  }

};

/* ************************************************************************** */

template <typename Data>
class PreOrderMappableContainer: public MappableContainer<Data>, 
                                        PreOrderTraversableContainer<Data>{
  // Must extend MappableContainer<Data>,
  //             PreOrderTraversableContainer<Data>

private:

  // ...

protected:

  // ...

public:

  // Destructor
  // ~PreOrderMappableContainer() specifiers
  ~PreOrderMappableContainer() = default;

  /* ************************************************************************ */

  // Copy assignment
  // type operator=(argument); // Copy assignment of abstract types is not possible.
  PreOrderMappableContainer& operator=(PreOrderMappableContainer&) & = delete;
  // Move assignment
  // type operator=(argument); // Move assignment of abstract types is not possible.
  PreOrderMappableContainer& operator=(PreOrderMappableContainer&&) & = delete;
  /* ************************************************************************ */

  // Comparison operators
  // type operator==(argument) specifiers; // Comparison of abstract types is not possible.
  bool operator==(PreOrderMappableContainer& other) const = delete;
  // type operator!=(argument) specifiers; // Comparison of abstract types is not possible.
  bool operator!=(PreOrderMappableContainer& other) const = delete;
  /* ************************************************************************ */

  // Specific member function

  // using typename MappableContainer<Data>::MapFun;

  // type PreOrderMap(argument) specifiers;

  inline void PreOrderMap(MappableContainer<Data>::MapFun)
  {

  }

  /* ************************************************************************ */

  // Specific member function (inherited from MappableContainer)

  // type Map(argument) specifiers; // Override MappableContainer member

  override Map()
  {

  }

};

/* ************************************************************************** */

template <typename Data>
class PostOrderMappableContainer {
  // Must extend MappableContainer<Data>,
  //             PostOrderTraversableContainer<Data>

private:

  // ...

protected:

  // ...

public:

  // Destructor
  // ~PostOrderMappableContainer() specifiers
  ~PostOrderMappableContainer() = default;
  /* ************************************************************************ */

  // Copy assignment
  // type operator=(argument); // Copy assignment of abstract types is not possible.
  PostOrderMappableContainer& operator=(PostOrderMappableContainer& ) & = delete;
  // Move assignment
  // type operator=(argument); // Move assignment of abstract types is not possible.
  PostOrderMappableContainer& operator=(PostOrderMappableContainer&& ) & = delete;
  
  /* ************************************************************************ */

  // Comparison operators
  // type operator==(argument) specifiers; // Comparison of abstract types is not possible.
  bool operator==(PostOrderMappableContainer& other) const = delete;
  // type operator!=(argument) specifiers; // Comparison of abstract types is not possible.
  bool operator!=(PostOrderMappableContainer& other) const = delete;
  /* ************************************************************************ */

  // Specific member function

  // using typename MappableContainer<Data>::MapFun;

  // type PostOrderMap(argument) specifiers;
  inline void PostOrderMap(MappableContainer<Data>::MapFun)
  {

  }

  /* ************************************************************************ */

  // Specific member function (inherited from MappableContainer)

  // type Map(argument) specifiers; // Override MappableContainer member

  override Map()
  {

  }

};

/* ************************************************************************** */

template <typename Data>
class InOrderMappableContainer {
  // Must extend MappableContainer<Data>,
  //             InOrderTraversableContainer<Data>

private:

  // ...

protected:

  // ...

public:

  // Destructor
  // ~InOrderMappableContainer() specifiers
  ~InOrderMappableContainer() = default;
  /* ************************************************************************ */

  // Copy assignment
  // type operator=(argument); // Copy assignment of abstract types is not possible.
  InOrderMappableContainer& operator=(InOrderMappableContainer& ) & = delete;
  // Move assignment
  // type operator=(argument); // Move assignment of abstract types is not possible.
  InOrderMappableContainer& operator=(InOrderMappableContainer&& ) & = delete;
  
  /* ************************************************************************ */

  // Comparison operators
  // type operator==(argument) specifiers; // Comparison of abstract types is not possible.
  bool operator==(InOrderMappableContainer& other ) const = delete;
  // type operator!=(argument) specifiers; // Comparison of abstract types is not possible.
  bool operator!=(InOrderMappableContainer& other ) const = delete;
  
  /* ************************************************************************ */

  // Specific member function

  // using typename MappableContainer<Data>::MapFun;

  // type InOrderMap(argument) specifiers;

  inline void InOrderMap(MappableContainer<Data>::MapFun)
  {

  }

  /* ************************************************************************ */

  // Specific member function (inherited from MappableContainer)

  // type Map(argument) specifiers; // Override MappableContainer member
  override Map()
  {

  }

};

/* ************************************************************************** */

template <typename Data>
class BreadthMappableContainer {
  // Must extend MappableContainer<Data>,
  //             BreadthTraversableContainer<Data>

private:

  // ...

protected:

  // ...

public:

  // Destructor
  // ~BreadthMappableContainer() specifiers
   ~BreadthMappableContainer() = default;
  
  /* ************************************************************************ */

  // Copy assignment
  // type operator=(argument); // Copy assignment of abstract types is not possible.
  BreadthMappableContainer& operator=(BreadthMappableContainer& ) & = delete;
  // Move assignment
  // type operator=(argument); // Move assignment of abstract types is not possible.
  BreadthMappableContainer& operator=(BreadthMappableContainer&& ) & = delete;
  
  /* ************************************************************************ */

  // Comparison operators
  // type operator==(argument) specifiers; // Comparison of abstract types is not possible.
  bool operator==(BreadthMappableContainer& other) const = delete;
  // type operator!=(argument) specifiers; // Comparison of abstract types is not possible.
  bool operator!=(BreadthMappableContainer& other) const = delete;
  /* ************************************************************************ */

  // Specific member function

  // using typename MappableContainer<Data>::MapFun;

  // type BreadthMap(argument) specifiers;
  inline void BreadthMap(MappableContainer<Data>::MapFun)
  {
    
  }

  /* ************************************************************************ */

  // Specific member function (inherited from MappableContainer)

  // type Map(argument) specifiers; // Override MappableContainer member
  override Map()
  {

  }

};

/* ************************************************************************** */

}

#include "mappable.cpp"

#endif
