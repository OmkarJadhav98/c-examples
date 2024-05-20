/*Write a program to copy all mappings from the specified map to another map.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define a structure to represent key-value pairs
struct KeyValuePair {
    int key;
    char* value;
};

// Define a structure to represent the hash map
struct HashMap {
    struct KeyValuePair* data;
    int capacity;
    int size;
};

// Initialize the hash map with a specified capacity
void initializeHashMap(struct HashMap* map, int capacity) {
    map->data = (struct KeyValuePair*)malloc(capacity * sizeof(struct KeyValuePair));
    map->capacity = capacity;
    map->size = 0;
}

// Add a key-value pair to the hash map
void put(struct HashMap* map, int key, char* value) {
    if (map->size < map->capacity) {
        map->data[map->size].key = key;
        map->data[map->size].value = strdup(value); // Duplicate the string for storage
        map->size++;
    }
}

// Copy all mappings from the specified source map to the destination map
void putAll(struct HashMap* dest, struct HashMap* src) {
    for (int i = 0; i < src->size; i++) {
        put(dest, src->data[i].key, src->data[i].value);
    }
}

// Print all mappings in the hash map
void printHashMap(struct HashMap* map) {
    printf("\nValues in the map: ");
    for (int i = 0; i < map->size; i++) {
        printf("%d:%s ", map->data[i].key, map->data[i].value);
    }
    printf("\n");
}

// Free the allocated memory for the hash map
void freeHashMap(struct HashMap* map) {
    for (int i = 0; i < map->size; i++) {
        free(map->data[i].value); // Free the duplicated strings
    }
    free(map->data);
}

int main() {
    // Create two hash maps
    struct HashMap hash_map1, hash_map2;
    initializeHashMap(&hash_map1, 3);
    initializeHashMap(&hash_map2, 6);

    // Populate hash maps
    put(&hash_map1, 1, "Red");
    put(&hash_map1, 2, "Green");
    put(&hash_map1, 3, "Black");
    printHashMap(&hash_map1);

    put(&hash_map2, 4, "White");
    put(&hash_map2, 5, "Blue");
    put(&hash_map2, 6, "Orange");
    printHashMap(&hash_map2);

    // Copy all mappings from hash_map1 to hash_map2
    putAll(&hash_map2, &hash_map1);
    printHashMap(&hash_map2);

    // Free allocated memory
    freeHashMap(&hash_map1);
    freeHashMap(&hash_map2);

    return 0;
}
