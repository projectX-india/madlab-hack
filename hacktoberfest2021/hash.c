#include "hash.h"
HashTable *create_table(int size){
    //Creating a new hashtable
    HashTable *table = malloc(sizeof(HashTable));
    table->size = size;
    table->table = malloc((sizeof(int)*size));
    int i = 0;
    for(i = 0 ; i<size; i++){
        table->table[i] = -1;
    }
    return table;
}

void insert(HashTable *htable, int element){
    //inserting a  new element into the hash table 
    int tempIndex = element%(htable->size);
    if(htable->table[tempIndex] == -1){
        htable->table[tempIndex] = element;
        return;
    }
    else{
        while(htable->table[tempIndex] != -1 && tempIndex<htable->size){
            tempIndex += 1;
        }
        if(htable->table[tempIndex] == -1){
            htable->table[tempIndex] = element;
            return;
        }
        else{
            int i;
            int flag = 0;
            for(i=0;i<htable->size;i++){
                if(htable->table[i] == -1){
                    flag = 1;
                    break;
                }
            }
            if(flag == 1){
                htable->table[i] = element;
            }
            else{
                printf("TABLE IS FULL\n");
            }
        }
    }
}

int search(HashTable *htable, int element)
{
    int tempIndex = element%(htable->size);
    if(htable->table[tempIndex] == element){
        return 1;
    }
    else{
        int i = tempIndex;
        int flag = 0;
        for(i = tempIndex; i<htable->size ; i++){
            	if(htable->table[i] == element){
                flag = 1;
                break;
            }
        }
        if(flag == 1){
            return 1;
        }
        else{
            int i = 0;
            int flag = 0;
            for(i = 0; i<htable->size ; i++){
                if(htable->table[i] == element){
                    flag = 1;
                    break;
                }
            }
            if(flag == 1){
                return 1;
            }
            else{
                return 0;
            }
        }
    }

}

void delete (HashTable *htable, int element)
{
    int tempIndex = element % htable->size;
    if(htable->table[tempIndex] == element){
        htable->table[tempIndex] = -1;
        return;
    }
    else{
        int i = tempIndex;
        int flag = 0;
        for(i = tempIndex; i<htable->size ; i++){
            if(htable->table[i] == element)
            {
                flag = 1;
                break;
            }
        }
        if(flag == 1){
            htable->table[i] = -1;
        }
        else{
            int i = 0;
            int flag = 0;
            for(i = 0; i<htable->size ; i++){
                if(htable->table[i] == element){
                    flag = 1;
                    break;
                }
            }
            if(flag == 1){
                htable->table[i] = -1;
            }
            else{
                printf("-1\n");
            }
        }
    }
}


void destroy_table(HashTable *htable)
{
    free(htable->table);
}
