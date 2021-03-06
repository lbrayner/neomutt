/**
 * @file
 * POP network mailbox
 *
 * @authors
 * Copyright (C) 2000-2003 Vsevolod Volkov <vvv@mutt.org.ua>
 *
 * @copyright
 * This program is free software: you can redistribute it and/or modify it under
 * the terms of the GNU General Public License as published by the Free Software
 * Foundation, either version 2 of the License, or (at your option) any later
 * version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
 * FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more
 * details.
 *
 * You should have received a copy of the GNU General Public License along with
 * this program.  If not, see <http://www.gnu.org/licenses/>.
 */

/**
 * @page pop POP: Network mailbox
 *
 * POP network mailbox
 *
 * | File          | Description         |
 * | :------------ | :------------------ |
 * | pop/auth.c    | @subpage pop_auth   |
 * | pop/config.c  | @subpage pop_config |
 * | pop/lib.c     | @subpage pop_lib    |
 * | pop/pop.c     | @subpage pop_pop    |
 */

#ifndef MUTT_POP_LIB_H
#define MUTT_POP_LIB_H

#include <stdbool.h>
#include "core/lib.h"
#include "mx.h"

struct ConfigSet;
struct stat;

extern struct MxOps MxPopOps;

void pop_fetch_mail(void);
enum MailboxType pop_path_probe(const char *path, const struct stat *st);

bool config_init_pop(struct ConfigSet *cs);

#endif /* MUTT_POP_LIB_H */
