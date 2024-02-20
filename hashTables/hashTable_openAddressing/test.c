
#include <stdio.h>
#include "hashTable.h"

int main(void)
{
    printf("\r\n");

    person_t *hashTable[TABLE_SIZE];
    hashTable_init(hashTable);
    hashTable_print(hashTable);

    person_t uros = {.name = "Uros", .age = 23};
    person_t nikola = {.name = "Nikola", .age = 19};
    person_t anastasija = {.name = "Anastasija", .age = 23};
    person_t sasa = {.name = "Sasa", .age = 29};
    person_t dunja = {.name = "Dunja", .age = 25};

    if(hashTable_insert(hashTable, &uros) == false) printf("Overlapping for %s\r\n", uros.name);
    if(hashTable_insert(hashTable, &nikola) == false) printf("Overlapping for %s\r\n", nikola.name);
    if(hashTable_insert(hashTable, &anastasija) == false) printf("Overlapping for %s\r\n", anastasija.name);
    if(hashTable_insert(hashTable, &sasa) == false) printf("Overlapping for %s\r\n", sasa.name);
    if(hashTable_insert(hashTable, &dunja) == false) printf("Overlapping for %s\r\n", dunja.name);

    hashTable_print(hashTable);

    printf("\r\n");
    if(hashTable_lookup(hashTable, "Uros") != NULL) printf("Found \"Uros\" in hash table!\r\n");
    else printf("Did not find \"Uros\" in hash table!\r\n");
    if(hashTable_lookup(hashTable, "Sasa") != NULL) printf("Found \"Sasa\" in hash table!\r\n");
    else printf("Did not find \"Sasa\" in hash table!\r\n");
    if(hashTable_lookup(hashTable, "Nikolina") != NULL) printf("Found \"Nikolina\" in hash table!\r\n");
    else printf("Did not find \"Nikolina\" in hash table!\r\n");

    if(hashTable_remove(hashTable, "Uros") == true) printf("\"Uros\" is deleted from hash table!\r\n");
    else printf("\"Uros\" isn't deleted from hash table!\r\n");
    if(hashTable_remove(hashTable, "Aleksandar") == true) printf("\"Aleksandar\" is deleted from hash table!\r\n");
    else printf("\"Aleksandar\" isn't deleted from hash table!\r\n");
    if(hashTable_remove(hashTable, "Nikola") == true) printf("\"Nikola\" is deleted from hash table!\r\n");
    else printf("\"Nikola\" isn't deleted from hash table!\r\n");
    printf("\r\n");

    hashTable_print(hashTable);

    person_t anamarija = {.name = "Anamarija", .age = 26};
    person_t persida = {.name = "Persida", .age = 66};
    
    if(hashTable_insert(hashTable, &anamarija) == false) printf("Overlapping for %s\r\n", anamarija.name);
    if(hashTable_insert(hashTable, &persida) == false) printf("Overlapping for %s\r\n", persida.name);

    hashTable_print(hashTable);

    printf("\r\n");
    return 0;
}