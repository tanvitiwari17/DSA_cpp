/*
STL : Standard Template Library (powerful set of cpp template classes)
At the core of the cpp STL are following three well-structured components:
-Containers
-Algorithms
-Iterators

Containers:
    ~ used to manage collections of abjects of a certain kind.
    ~ provides containers that are used to create data structures like arrays,linked list,trees,etc.
    ~ these containers are generic, can hold elements of any data types

eg:-Vectors: used for creating dynamic arrays of char,int, float and other types

Algorithms:
    ~ act on containers.
    ~ provide means by which we perform initialization, sorting,searching, and transforming of contents of containers.
    ~ contains built in functions that perform complex algorithms on data structures.
    ~ provides abstraction

eg:- reverse(),sort(),binary_search()

Iterators:
    ~ used to step through the elements of collections of object.These collections may be
      containers or subsets of containers.
    ~ used to point to the containers.
    ~ acts as a bridge between containers and algorithms.

eg: sort() algorithm have two parameters, starting iterator and ending iterator.
*/

/*

Containers:
-collection of classes
-are implemented as generic class templates.
- help us to implement and replicate simple and complex data structures very easily like arrays,linked list,associative arrays ,etc.
- used to hold different types of objects
- common containers:
        vector : replicates arrays
        queue  : replicates queues
        stack  : replicates stack
        priority_queue : replicates heaps
        list : replicate linked list
        set  : replicate trees
        map  : associative arrays
Classification of Containers:
    Sequence Containers
        -like array,linked lost,etc
    Associative Containers
        -Sorted data structure like map,set,etc
    Unordered Associative containers
        -Unsorted Data structures
    Containers Adapters:
        -Interfaces to sequence containers

*/
