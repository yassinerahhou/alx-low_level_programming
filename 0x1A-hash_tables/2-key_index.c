#include "hash_tables.h"

/**
 * key_index - function jhgikhkd dkhkhkd
 * @key: The key kkprprprp oior  jjoor
 * @size: The siede jfhf hfhfjh fhfhf
 * Return: Thioyi uigyuiyui guytur
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
