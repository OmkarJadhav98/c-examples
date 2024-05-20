/*Write a program to count the number of key-value (size) mappings in a map.*/

#include <stdio.h>
#include <stdlib.h>

// Define a structure to represent key-value pairs
struct KeyValuePair {
    int key;
    char* value;
};

// Define a structure to represent the hash map
struct HashMap {
    struct KeyValuePair* data;
    int size;
};

// Initialize the hash map
void initializeHashMap(struct HashMap* map, int capacity) {
    map->data = (struct KeyValuePair*)malloc(capacity * sizeof(struct KeyValuePair));
    map->size = 0;
}

// Add a key-value pair to the hash map
void put(struct HashMap* map, int key, char* value) {
    map->data[map->size].key = key;
    map->data[map->size].value = value;
    map->size++;
}

// Get the size of the hash map
int getSize(struct HashMap* map) {
    return map->size;
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

    // Print the size of the hash map
    printf("Size of the hash map: %d\n", getSize(&hash_map));

    // Free allocated memory
    free(hash_map.data);

    return 0;
}
