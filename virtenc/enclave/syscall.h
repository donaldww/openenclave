// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef _VE_SYSCALL_H
#define _VE_SYSCALL_H

#include <openenclave/bits/defs.h>
#include <openenclave/bits/types.h>
#include <openenclave/internal/syscall/sys/syscall.h>

long ve_syscall(long number, ...);

#endif /* _VE_SYSCALL_H */