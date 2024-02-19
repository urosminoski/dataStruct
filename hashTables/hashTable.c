
#include "hashTable.h"

uint32_t hash(char *name)
{
    uint8_t length = strnlen(name, NAME_SIZE);
    uint32_t hashValue = 0;
    for(uint8_t i = 0; i < length; i++)
    {
        hashValue += name[i];
        hashValue *= name[i];
        hashValue %= TABLE_SIZE;
    }
    return hashValue;
}

void hashTable_print(person_t **hashTable)
{
    printf("Start\r\n");
    for(uint32_t i = 0; i < TABLE_SIZE; i++)
    {
        if(hashTable[i] == NULL) printf("\t%u\t---\r\n", i);
        else if(hashTable[i] == HASH_TABLE_DELETED) printf("\t%u\t---<del>\r\n", i);
        else printf("\t%u\t\"%s\", %hu\r\n", i, hashTable[i]->name, hashTable[i]->age);

    }
    printf("End\r\n");
}

void hashTable_init(person_t **hashTable)
{
    for(uint32_t i = 0; i < TABLE_SIZE; i++)
    {
        hashTable[i] = NULL;
    }
}

bool hashTable_insert(person_t **hashTable, person_t *pPerson)
{
    if(pPerson == NULL) return false;

    uint32_t index = hash(pPerson->name);
    for(uint32_t i = 0; i < TABLE_SIZE; i++)
    {
        uint32_t newIndex = (index + i) % TABLE_SIZE;
        if(hashTable[newIndex] == NULL ||
            hashTable[newIndex] == HASH_TABLE_DELETED)
            {
                hashTable[newIndex] = pPerson;
                return true;
            }
    }
    return false;
}

person_t * hashTable_lookup(person_t **hashTable, char* name)
{
    if(name == NULL) return NULL;

    uint32_t index = hash(name);
    for(uint32_t i = 0; i < TABLE_SIZE; i++)
    {
        uint32_t newIndex = (index + i) % TABLE_SIZE;
        if(hashTable[newIndex] == NULL) return NULL;
        if(hashTable[newIndex] == HASH_TABLE_DELETED) continue;
        if(hashTable[newIndex] != NULL && strncmp(hashTable[newIndex]->name, name, NAME_SIZE) == 0) return hashTable[newIndex];
    }
    return NULL;
}

bool hashTable_remove(person_t **hashTable, char *name)
{
    if(name == NULL) return false;

    person_t *found_person = hashTable_lookup(hashTable, name);
    if(found_person != NULL)
    {
        found_person = HASH_TABLE_DELETED;
        return true;
    }
    return false;
}