/*
 * Utility routines' prototypes etc.
 *
 * Copyright 1998 Bertho A. Stultiens (BS)
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301, USA
 */

#ifndef __WIDL_UTILS_H
#define __WIDL_UTILS_H

#include "widltypes.h"

#include <stddef.h>	/* size_t */

void *xmalloc(size_t);
void *xrealloc(void *, size_t);
char *xstrdup(const char *str);

#ifndef __GNUC__
#define __attribute__(X)
#endif

int parser_error(const char *s, ...) __attribute__((format (printf, 1, 2)));
int parser_warning(const char *s, ...) __attribute__((format (printf, 1, 2)));
void internal_error(const char *file, int line, const char *s, ...) __attribute__((format (printf, 3, 4)));
void error(const char *s, ...) __attribute__((format (printf, 1, 2)));
void warning(const char *s, ...) __attribute__((format (printf, 1, 2)));
void chat(const char *s, ...) __attribute__((format (printf, 1, 2)));

char *dup_basename(const char *name, const char *ext);
size_t widl_getline(char **linep, size_t *lenp, FILE *fp);

UUID *parse_uuid(const char *u);
int is_valid_uuid(const char *s);

#endif
