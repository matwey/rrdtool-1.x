/*
 *  mutex.h - Cross platform mutex
 */

#ifndef MUTEX_H_B13C67AB432C4C39AF823A339537CA40
#define MUTEX_H_B13C67AB432C4C39AF823A339537CA40

#include <pthread.h>

#define mutex_t            pthread_mutex_t
#define MUTEX_INITIALIZER  PTHREAD_MUTEX_INITIALIZER

#define mutex_init(mutex)    pthread_mutex_init((mutex), NULL)
#define mutex_lock(mutex)    pthread_mutex_lock((mutex))
#define mutex_unlock(mutex)  pthread_mutex_unlock((mutex))
#define mutex_cleanup(mutex) pthread_mutex_destroy((mutex))

#endif /* MUTEX__H */

/*
 * vim: set sw=2 sts=2 ts=8 et fdm=marker :
 */

