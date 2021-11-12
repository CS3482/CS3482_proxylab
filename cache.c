#include <stdlib.h>
#include "csapp.h"
#include "cache.h"

//cache items are kept in a doubly linked list
typedef struct cacheList cacheList;
struct cacheList
{
   cacheItem * item;  //cacheItem is defined in cache.h
   cacheList * prev;
   cacheList * next;
};

//pointer to the first node in the list
static cacheList * first;   
//pointer to the last node in the list
static cacheList * last;
//sum of the sizes of all of the items in the list
static int currSize;

//functions that are only accessible to functions
//in this file
static void evict(int size);
static void moveToFront(cacheList * ptr);

//cacheInit
//Initialize first and last to NULL and currSize
//to 0
void cacheInit()
{
   return;
}

//findCacheItem
//Search through the cacheList to try to find
//the item with the provided url.
//If found, move the node containing the cacheItem
//to the front of the list (using moveToFront)
//and return the pointer to the cacheItem.
//If not found, return NULL.
cacheItem * findCacheItem(char * url)
{
   return NULL;
}

//moveToFront
//Move the node pointed to by cacheList to the
//front of the cacheList. This is used to
//implement the LRU policy.  The most recently
//used cache item is in the front of the list.
//The least recently used is at the end.
void moveToFront(cacheList * ptr)
{
   return;
}

//addCacheItem
//This function takes a new item to add to the cache.
//You will need to dynamically allocate a cacheItem object 
//and a cacheList object and initialize the fields of
//those objects. first will need to be modified to point
//to the new cacheList object.  last will need to be modified
//if it is currently NULL.
//If the adding the item to the cache would cause the
//size of the cache to exceed MAX_CACHE_SIZE, evict is
//called to evict one or more items from the cache to make
//room. 
void addCacheItem(char * url, char * content, int size)
{
   return;
}

//evict
//This function is called in order to evict
//items from the cache to make room for an item
//with the provided size.
//In order to the implement the LRU policy, nodes
//are deleted from the end of the list until
//the item with the provided size can be added
//so that the currSize is <= MAX_CACHE_SIZE
void evict(int size)
{
   return;
}

//useful for debugging
//Print the list (url and size) in forward and backward direction
//to make sure the prev and next pointers are both correct.
void printCacheList()
{
   return;
}   
