/*
 * Copyright (c) 2005-2010 by KoanLogic s.r.l. - All rights reserved.
 */

#ifndef _U_RB_H_
#define _U_RB_H_

#include <u/libu_conf.h>

#ifdef __cplusplus
extern "C" {
#endif  /* __cplusplus */

/* forward decl */
struct u_rb_s;

/**
 *  \addtogroup rb
 *  \{
 */ 

/** \brief  The ring buffer type. */
typedef struct u_rb_s u_rb_t;

int u_rb_create (size_t hint_sz, u_rb_t **prb);
int u_rb_clear (u_rb_t *rb);
void u_rb_free (u_rb_t *rb);
size_t u_rb_size (u_rb_t *rb);

ssize_t u_rb_read (u_rb_t *rb, void *b, size_t b_sz);
ssize_t u_rb_write (u_rb_t *rb, const void *b, size_t b_sz);
size_t u_rb_ready (u_rb_t *rb);
size_t u_rb_avail (u_rb_t *rb);

/**
 *  \}
 */ 

#ifdef __cplusplus
}
#endif  /* __cplusplus */

#endif  /* !_U_RB_H_ */
