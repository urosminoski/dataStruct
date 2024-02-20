#ifndef HASH_TABLE_H
#define HASH_TABLE_H

#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <stdbool.h>

#define NAME_SIZE   ( 255 )
#define TABLE_SIZE  ( 10 )

typedef struct person{
    char            name[NAME_SIZE];
    uint8_t         age;
    struct person   *next;
    struct person   *prev;
} person_t;

uint32_t    hash(char *name);
void        hashTable_print(person_t **hashTable);
void        hashTable_init(person_t **hashTable);
bool        hashTable_insert(person_t **hashTable, person_t *pPerson);
person_t *  hashTable_lookup(person_t **hashTable, char* name);
bool        hashTable_remove(person_t **hashTable, char *name);


#endif // HASH_TABLE_H