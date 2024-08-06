
#pragma once

#include <stdint.h>
#include "matrix.h"
#include "apidef.h"

typedef struct {
    void (*init)(void); // Initialize matrix
    uint32_t (*get_device_row)(void); // return matrix row count scanned in scan()
    uint32_t (*get_device_col)(void); // return matrix col count scanned in scan()
    uint32_t (*scan)(matrix_row_t *matrix_raw); // scan matrix and store to matrix_raw[]
} bmp_matrix_func_t;

static const bmp_api_gpio_mode_t bmp_gpio_out_od = {
    .dir = BMP_MODE_OUTPUT,
    .pull = BMP_PULL_NONE,
    .drive = BMP_PIN_S0D1
};

typedef uint32_t matrix_col_t;

#define setPinOd(pin) BMPAPI->gpio.set_mode(pin, &bmp_gpio_out_od)

uint32_t bmp_matrix_get_device_row(void);