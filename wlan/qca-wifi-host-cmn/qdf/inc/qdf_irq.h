/*
 * Copyright (c) 2021 The Linux Foundation. All rights reserved.
 *
 * Permission to use, copy, modify, and/or distribute this software for
 * any purpose with or without fee is hereby granted, provided that the
 * above copyright notice and this permission notice appear in all
 * copies.
 *
 * THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL
 * WARRANTIES WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE
 * AUTHOR BE LIABLE FOR ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL
 * DAMAGES OR ANY DAMAGES WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR
 * PROFITS, WHETHER IN AN ACTION OF CONTRACT, NEGLIGENCE OR OTHER
 * TORTIOUS ACTION, ARISING OUT OF OR IN CONNECTION WITH THE USE OR
 * PERFORMANCE OF THIS SOFTWARE.
 */

/**
 * DOC: qdf_irq.h
 * This file abstracts interrupt related API's.
 */

#ifndef __QDF_IRQ_H
#define __QDF_IRQ_H

#include "i_qdf_irq.h"

#define QDF_IRQ_TYPE_NONE		__QDF_IRQ_TYPE_NONE
#define QDF_IRQ_TYPE_EDGE_RISING	__QDF_IRQ_TYPE_EDGE_RISING
#define QDF_IRQ_TYPE_EDGE_FALLING	__QDF_IRQ_TYPE_EDGE_FALLING
#define QDF_IRQ_TYPE_EDGE_BOTH		__QDF_IRQ_TYPE_EDGE_BOTH
#define QDF_IRQ_TYPE_LEVEL_HIGH		__QDF_IRQ_TYPE_LEVEL_HIGH
#define QDF_IRQ_TYPE_LEVEL_LOW		__QDF_IRQ_TYPE_LEVEL_LOW
#define QDF_IRQ_TYPE_LEVEL_MASK		__QDF_IRQ_TYPE_LEVEL_MASK
#define QDF_IRQ_TYPE_SENSE_MASK		__QDF_IRQ_TYPE_SENSE_MASK
#define QDF_IRQ_TYPE_DEFAULT		__QDF_IRQ_TYPE_DEFAULT
#define QDF_IRQ_TYPE_PROBE		__QDF_IRQ_TYPE_PROBE
#define QDF_IRQ_LEVEL			__QDF_IRQ_LEVEL
#define QDF_IRQ_PER_CPU			__QDF_IRQ_PER_CPU
#define QDF_IRQ_NOPROBE			__QDF_IRQ_NOPROBE
#define QDF_IRQ_NOREQUEST		__QDF_IRQ_NOREQUEST
#define QDF_IRQ_NOAUTOEN		__QDF_IRQ_NOAUTOEN
#define QDF_IRQ_NO_BALANCING		__QDF_IRQ_NO_BALANCING
#define QDF_IRQ_MOVE_PCNTXT		__QDF_IRQ_MOVE_PCNTXT
#define QDF_IRQ_NESTED_THREAD		__QDF_IRQ_NESTED_THREAD
#define QDF_IRQ_NOTHREAD		__QDF_IRQ_NOTHREAD
#define QDF_IRQ_PER_CPU_DEVID		__QDF_IRQ_PER_CPU_DEVID
#define QDF_IRQ_IS_POLLED		__QDF_IRQ_IS_POLLED
#define QDF_IRQ_DISABLE_UNLAZY		__QDF_IRQ_DISABLE_UNLAZY

#endif /* __QDF_IRQ_H */