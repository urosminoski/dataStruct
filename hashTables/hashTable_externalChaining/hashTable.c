
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
        else
        {
            printf("\t%u\t", i);
            person_t *tmp_header = hashTable[i];
            while(tmp_header != NULL)
            {
                printf("%s - ", tmp_header->name);
                tmp_header = tmp_header->next;
            }
            printf("\r\n");
        }
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
    /* Return false if pPerson is NULL */
    if(pPerson == NULL) return false;
    /* Return false if person is already in table */
    if(hashTable_lookup(hashTable, pPerson->name) != NULL) return false;

    uint32_t index = hash(pPerson->name);
    if(hashTable[index] != NULL)
    {
        pPerson->next = hashTable[index];
        hashTable[index]->prev = pPerson;
    }
    hashTable[index] = pPerson;
    return true;
    }

person_t * hashTable_lookup(person_t **hashTable, char* name)
{
    if(name == NULL) return NULL;

    uint32_t index = hash(name);
    person_t *tmpHead = hashTable[index];
    
    while(tmpHead != NULL)
    {
        if(strncmp(tmpHead->name, name, NAME_SIZE) == 0)
        {
            return tmpHead;
        }
        tmpHead = tmpHead->next;
    }
    return NULL;
}

bool hashTable_remove(person_t **hashTable, char *name)
{
    if(name == NULL) return false;

    uint32_t index = hash(name);
    person_t *tmpHead = hashTable[index];
    while(tmpHead != NULL && strncmp(tmpHead->name, name, NAME_SIZE) != 0)
    {
        tmpHead = tmpHead->next;
    }

    if(tmpHead == NULL)
    {
        return false;
    }
    else if(tmpHead == hashTable[index])
    {
        hashTable[index] = tmpHead->next;
        if(hashTable[index] != NULL) hashTable[index]->prev = NULL;
        tmpHead = NULL;
    }
    else
    {
        tmpHead->prev->next = tmpHead->next;
        if(tmpHead->next != NULL) tmpHead->next->prev = tmpHead->prev;
        tmpHead = NULL;
    }
    return true;
}