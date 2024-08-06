/*
Copyright 2020 Sekigon

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

typedef enum {
    INDICATOR_NONE,
    INDICATOR_TURN_OFF,
    INDICATOR_TURN_ON,
    INDICATOR_BATTERY,
    INDICATOR_ADVERTISING,
    INDICATOR_CONNECTED,
    INDICATOR_CONNECTING,
    INDICATOR_USER,
    INDICATOR_END,
} BMP_INDICATOR_TYPE;

// return: stack index
int bmp_indicator_set(BMP_INDICATOR_TYPE type, int32_t option);
int bmp_indicator_user_pattern(uint32_t time_ms, int32_t option);
bool bmp_indicator_task(void);
void bmp_indicator_init(uint8_t led_pin);
void bmp_indicator_led_on(void);
void bmp_indicator_led_off(void);


