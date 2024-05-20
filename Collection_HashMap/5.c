/*Write a program to get a shallow copy of a HashMap instance.*/

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

// Create a shallow copy of the hash map
struct HashMap shallowCopyHashMap(struct HashMap* original) {
    struct HashMap copy;
    copy.data = original->data; // Shallow copy: only copy the reference
    copy.capacity = original->capacity;
    copy.size = original->size;
    return copy;
}

// Print all mappings in the hash map
void printHashMap(struct HashMap* map) {
    printf("Values in the map: ");
    for (int i = 0; i < map->size; i++) {
        printf("%d:%s ", map->data[i].key, map->data[i].value);
    }
    printf("\n");
}

int main() {
    // Create a hash map
    struct HashMap hash_map;
    initializeHashMap(&hash_map, 5);

    // Add key-value pairs
    put(&hash_map, 1, "Red");
    put(&hash_map, 2, "Green");
    put(&hash_map, 3, "Black");
    put(&hash_map, 4, "White");
    put(&hash_map, 5, "Blue");

    // Print the original map
    printf("The Original map: ");
    printHashMap(&hash_map);

    // Create a shallow copy of the hash map
    struct HashMap new_hash_map = shallowCopyHashMap(&hash_map);
    printf("Cloned map: ");
    printHashMap(&new_hash_map);

    // No need to free the new_hash_map.data since it's a shallow copy
    // Free the original hash map
    free(hash_map.data);

    return 0;
}
