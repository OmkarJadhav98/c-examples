/*Write a program to test if a map contains a mapping for the specified key.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define a structure to represent key-value pairs
struct KeyValuePair {
    char* key;
    int value;
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
void put(struct HashMap* map, char* key, int value) {
    if (map->size < map->capacity) {
        map->data[map->size].key = strdup(key); // Duplicate the string for storage
        map->data[map->size].value = value;
        map->size++;
    }
}

// Test if the hash map contains a mapping for the specified key
int containsKey(struct HashMap* map, char* key) {
    for (int i = 0; i < map->size; i++) {
        if (strcmp(map->data[i].key, key) == 0) {
            return 1; // Key exists
        }
    }
    return 0; // Key does not exist
}

// Free the allocated memory for the hash map
void freeHashMap(struct HashMap* map) {
    for (int i = 0; i < map->size; i++) {
        free(map->data[i].key); // Free the duplicated strings
    }
    free(map->data);
}

int main() {
    // Create a hash map with a capacity of 5
    struct HashMap hash_map;
    initializeHashMap(&hash_map, 5);

    // Add key-value pairs
    put(&hash_map, "Red", 1);
    put(&hash_map, "Green", 2);
    put(&hash_map, "Black", 3);
    put(&hash_map, "White", 4);
    put(&hash_map, "Blue", 5);

    // Test if the hash map contains a mapping for the specified keys
    printf("1. Is key 'Green' exists?\n");
    if (containsKey(&hash_map, "Green")) {
        printf("yes! - %d\n", hash_map.data[1].value); // Assuming 'Green' is at index 1
    } else {
        printf("no!\n");
    }

    printf("\n2. Is key 'orange' exists?\n");
    if (containsKey(&hash_map, "orange")) {
        // Assuming 'orange' is not in the map, so no value is printed
        printf("yes!\n");
    } else {
        printf("no!\n");
    }

    // Free allocated memory
    freeHashMap(&hash_map);

    return 0;
}
