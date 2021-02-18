/*
 * Copyright (c) 2017 Intel Corporation
 *
 * SPDX-License-Identifier: Apache-2.0
 */

/* hello world example: calling functions from a static library */


#include <zephyr.h>
#include <stdio.h>
#include "zenoh-pico.h"

#include "zenoh-pico/net.h"

void main(void)
{
	printf("Hello World!\n");
	zn_properties_t *config = zn_config_default();
}
