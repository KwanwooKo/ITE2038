#ifndef __LOCK_TABLE_H__
#define __LOCK_TABLE_H__

#include <stdint.h>
#include <pthread.h>
#include <iostream>
#include <cstdlib>
#include <unordered_map>

typedef struct lock_t lock_t;
typedef struct hash_table_entry hash_table_entry;

/* APIs for lock table */
int init_lock_table();
lock_t *lock_acquire(int64_t table_id, int64_t key);
int lock_release(lock_t* lock_obj);

#endif /* __LOCK_TABLE_H__ */
