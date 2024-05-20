/*Write a program to remove all mappings from a map.*/

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

// Remove all mappings from the hash map
void clearHashMap(struct HashMap* map) {
    for (int i = 0; i < map->size; i++) {
        free(map->data[i].value); // Free the duplicated strings
    }
    map->size = 0; // Reset the size to 0
}

// Print all mappings in the hash map
void printHashMap(struct HashMap* map) {
    printf("Values in the map: ");
    for (int i = 0; i < map->size; i++) {
        printf("%d:%s ", map->data[i].key, map->data[i].value);
    }
    printf("\n");
}

// Free the allocated memory for the hash map
void freeHashMap(struct HashMap* map) {
    clearHashMap(map); // Clear all mappings before freeing the data array
    free(map->data);
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

    // Remove all mappings from the map
    clearHashMap(&hash_map);
    printf("The New map: ");
    printHashMap(&hash_map);

    // Free allocated memory
    freeHashMap(&hash_map);

    return 0;
}
