/*
Copyright 2019 @foostan
Copyright 2020 Drashna Jaelre <@drashna>

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

#include QMK_KEYBOARD_H
//#include <stdio.h>

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  // Windows Layouts
  // Writing
  [0] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
ALT_T(KC_ESC),    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                         KC_Y,    KC_U,    KC_I,    KC_O,   KC_P,  KC_LGUI,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
       KC_TAB,    KC_A,    KC_S,    KC_D,LT(1, KC_F), KC_G,                         KC_H,    KC_J,    KC_K,    KC_L, KC_SCLN, KC_LCTL,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
       KC_BSPC,   KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                         KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH,   KC_DEL,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                    KC_LCTL, LT(2, KC_SPC),  KC_LSFT,  KC_RALT, KC_ENT, LT(3, KC_LCAP)
                                      //`--------------------------'  `--------------------------'
  ),
  // Navigation
  [1] = LAYOUT_split_3x6_3(
   //,-----------------------------------------------------.                    ,-----------------------------------------------------.
ALT_T(KC_ESC),XXXXXXX,S(KC_LALT),S(KC_LCTL),XXXXXXX,XXXXXXX,                     XXXXXXX, KC_HOME, KC_PGUP, KC_PGDN,  KC_END, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_TAB, KC_LGUI, KC_LALT, KC_LCTL,  _______, XXXXXXX,                        KC_APP, KC_LEFT,   KC_UP, KC_DOWN,KC_RIGHT,   TG(1),
  //|--------+--------+--------+--------+--------+--------|                     |--------+--------+--------+--------+--------+--------|
      KC_BSPC, XXXXXXX, C(KC_LALT), C(KC_LALT), XXXXXXX, XXXXXXX,                 KC_TAB,LCTL(KC_C),LCTL(KC_X),XXXXXXX,XXXXXXX,KC_DEL,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                        KC_LCTL, KC_SPC,KC_LSFT,    LCTL(KC_V), KC_ENT, XXXXXXX
                                      //`--------------------------'  `--------------------------'
  ),
  // Symbols
  [2] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
ALT_T(KC_ESC),    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                         KC_6,    KC_7,    KC_8,    KC_9,    KC_0, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LSFT, KC_BSLS, KC_SLSH, KC_MINS,  KC_EQL, KC_GRV,                      KC_QUOT, KC_LPRN, KC_LBRC, KC_LCBR,   KC_LT, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, KC_PIPE, KC_QUES, KC_UNDS, KC_PLUS, KC_TILD,                      KC_DQUO, KC_RPRN, KC_RBRC, KC_RCBR,   KC_GT, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          XXXXXXX, _______, XXXXXXX,    XXXXXXX, KC_LSFT, XXXXXXX
                                      //`--------------------------'  `--------------------------'
  ),
  // VSCode Shortcuts  and F keys
  [3] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      TO(4),   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                        KC_F6,   KC_F7,   KC_F8,   KC_F9,  KC_F10,  KC_F11,  
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      TO(5), XXXXXXX, XXXXXXX, KC_MPLY, TG(1),     XXXXXXX,                      XXXXXXX,S(KC_PSCR),XXXXXXX,XXXXXXX, XXXXXXX,  KC_F12,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      TO(6), KC_VOLD, KC_MUTE, KC_VOLU, XXXXXXX, XXXXXXX,                      XXXXXXX, KC_PSCR, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_LCTL,  KC_LALT, KC_LSFT,    XXXXXXX, TO(8), _______
                                      //`--------------------------'  `--------------------------'
  ),
  // RGB
  [4] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
        TG(4), XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, RGB_HUI, RGB_SAI, RGB_VAI, RGB_TOG, RGB_MOD,                      XXXXXXX, KC_MPRV, KC_MSTP, KC_MPLY, KC_MNXT, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, RGB_HUD, RGB_SAD, RGB_VAD, XXXXXXX, XXXXXXX,                      XXXXXXX, KC_VOLD, KC_MUTE, KC_VOLU, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                            XXXXXXX, XXXXXXX, XXXXXXX,    XXXXXXX, XXXXXXX, XXXXXXX
                                      //`--------------------------'  `--------------------------'
  ),
  // LoL
  [5] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
       KC_ESC,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                      LCTL(KC_1), LCTL(KC_2), LCTL(KC_3), LCTL(KC_4), LCTL(KC_6), LCTL(KC_X),
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
       KC_TAB,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_D,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, LCTL(KC_X),
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_T,LCTL(KC_6),  XXXXXXX, XXXXXXX,    KC_F,    KC_B,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, LCTL(KC_X),
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_LCTL,  KC_SPC, KC_LALT,    TG(5), TG(5), TG(5)
                                      //`--------------------------'  `--------------------------'
  ),
  // RTS 1
  [6] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
       KC_ESC,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                         KC_Y,    KC_U,    KC_I,    KC_O,   KC_P,  KC_LGUI,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
       KC_TAB,    KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                         KC_H,    KC_J,    KC_K,    KC_L, KC_SCLN, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
       KC_LALT,   KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                         KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH,  KC_DEL,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_LCTL, LT(7, KC_SPC),  KC_LSFT,      TG(6),   TG(6),    TG(6)
                                      //`--------------------------'  `--------------------------'
  ), 
  // RTS 2
  [7] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
    KC_ESC, LCTL(KC_1), LCTL(KC_2), LCTL(KC_3), LCTL(KC_4), LCTL(KC_5), LCTL(KC_6), LCTL(KC_7), LCTL(KC_8), LCTL(KC_9), LCTL(KC_0), XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                         KC_6,    KC_7,    KC_8,    KC_9,    KC_0, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          XXXXXXX, _______, XXXXXXX,    XXXXXXX, XXXXXXX, XXXXXXX
                                      //`--------------------------'  `--------------------------'
  ),

  // MacOS Layouts
  // Writing 
  [8] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
OPT_T(KC_ESC),    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                         KC_Y,    KC_U,    KC_I,    KC_O,   KC_P,LCMD(KC_SPC),
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
       KC_TAB,    KC_A,    KC_S,    KC_D,LT(9, KC_F), KC_G,                         KC_H,    KC_J,    KC_K,    KC_L, KC_SCLN, KC_LCTL,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
       KC_BSPC,   KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                         KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH,   KC_DEL,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                    KC_LCMD, LT(10, KC_SPC),  KC_LSFT,  LOPT(KC_E), KC_ENT, LT(11, KC_LCAP)
                                      //`--------------------------'  `--------------------------'
  ),
  // Navigation´
  [9] = LAYOUT_split_3x6_3(
   //,-----------------------------------------------------.                   ,-----------------------------------------------------.
OPT_T(KC_ESC),XXXXXXX,XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                        XXXXXXX, KC_HOME, KC_PGUP, KC_PGDN,  KC_END, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_TAB, KC_LCTL, KC_LOPT, KC_LOPT,  _______, XXXXXXX,                       KC_BTN2, KC_LEFT,   KC_UP, KC_DOWN,KC_RIGHT,  TG(9),
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_BSPC, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                    KC_MCTL,LCMD(KC_C),LCMD(KC_X),XXXXXXX,XXXXXXX,  KC_DEL,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                        KC_LCMD, KC_SPC,KC_LSFT,    LCMD(KC_V), KC_ENT, XXXXXXX
                                      //`--------------------------'  `--------------------------'
  ),
  // Symbols
  [10] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
OPT_T(KC_ESC),  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                       KC_6,    KC_7,    KC_8,    KC_9,    KC_0, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LSFT, KC_BSLS, KC_SLSH, KC_MINS,  KC_EQL, KC_GRV,                       KC_QUOT, KC_LPRN, KC_LBRC, KC_LCBR,   KC_LT, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, KC_PIPE, KC_QUES, KC_UNDS, KC_PLUS, KC_TILD,                      KC_DQUO, KC_RPRN, KC_RBRC, KC_RCBR,   KC_GT, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          XXXXXXX, _______, XXXXXXX,    XXXXXXX, KC_LSFT, XXXXXXX
                                      //`--------------------------'  `--------------------------'
  ),
  // VSCode Shortcuts  and Fn shortcuts
  [11] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      XXXXXXX,   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                        KC_F6,   KC_F7,   KC_F8,   KC_F9,  KC_F10,  KC_F11,  
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, TG(9), XXXXXXX,                      XXXXXXX, SCMD(KC_5), KC_BRIU, KC_BRID, XXXXXXX, KC_F12,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, KC_KB_VOLUME_DOWN, KC_KB_MUTE, KC_KB_VOLUME_UP, XXXXXXX, XXXXXXX, XXXXXXX, SCMD(KC_3), XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_LCMD,  KC_LOPT, KC_LSFT,    XXXXXXX, TG(8), _______
                                      //`--------------------------'  `--------------------------'
  )
};


// LT(layer, kc)

#ifdef OLED_ENABLE
oled_rotation_t oled_init_user(oled_rotation_t rotation) {
  if (!is_keyboard_master()) {
    return OLED_ROTATION_180;  // flips the display 180 degrees if offhand
  }
  return rotation;
}

#define L_BASE1 0
#define L_NAVI1 2
#define L_SYM1 4
#define L_CMD1 8
#define L_RGB 16
#define L_APP_1 32
#define L_APP_2 64
#define L_APP_2_MOD 128
#define L_BASE2 256
#define L_NAVI2 512
#define L_SYM2 1024
#define L_CMD2 2048 


void oled_render_layer_state(void) {
    static const char PROGMEM ms_logo[] = {
        151,152,10,
        183,184,0
    };
    static const char PROGMEM osx_logo[] = {
        149,150,10,
        181,182,0
    };

    switch (layer_state) {
        case L_BASE1:
            oled_write_ln_P(ms_logo, false);
            oled_write_ln_P(PSTR("Typing"), false);
            break;
        case L_BASE1|L_SYM1:
            oled_write_ln_P(ms_logo, false);
            oled_write_ln_P(PSTR("Symbols"), false);
            break;
        case L_BASE1|L_NAVI1:
            oled_write_ln_P(ms_logo, false);
            oled_write_ln_P(PSTR("Navy"), false);
            break;
        case L_BASE1|L_CMD1:
        //case L_SYM|L_CMD:
            oled_write_ln_P(ms_logo, false);
            oled_write_ln_P(PSTR("CMD"), false);
            break;
        case L_RGB:
        //case L_ADJUST|L_NAVI:
            oled_write_ln_P(ms_logo, false);
            oled_write_ln_P(PSTR("RGB"), false);
            break;
        case L_APP_1:
        //case L_ADJUST|L_APP_1:
            oled_write_ln_P(ms_logo, false);
            oled_write_ln_P(PSTR("LOL"), false);
            break;
        case L_APP_2:
            oled_write_ln_P(ms_logo, false);
            oled_write_ln_P(PSTR("RTS"), false);
            break;
        case L_BASE2:
            oled_write_ln_P(osx_logo, false);
            oled_write_ln_P(PSTR("Typing"), false);
            break;
        case L_BASE2|L_SYM2:
            oled_write_ln_P(osx_logo, false);
            oled_write_ln_P(PSTR("Symbols"), false);
            break;
        case L_BASE2|L_NAVI2:
            oled_write_ln_P(osx_logo, false);
            oled_write_ln_P(PSTR("Navy"), false);
            break;
        case L_BASE2|L_CMD2:
            oled_write_ln_P(osx_logo, false);
            oled_write_ln_P(PSTR("CMD"), false);
            break;
        default:
            oled_write_P(PSTR("Layer: "), false);
            oled_write_ln_P(PSTR("Unknown"), false);
            break;
    }
}


char keylog_str[24] = {};
const char code_to_name[60] = {
    ' ', ' ', ' ', ' ', 'a', 'b', 'c', 'd', 'e', 'f',
    'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p',
    'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z',
    '1', '2', '3', '4', '5', '6', '7', '8', '9', '0',
    'R', 'E', 'B', 'T', '_', '-', '=', '[', ']', '\\',
    '#', ';', '\'', '`', ',', '.', '/', ' ', ' ', ' '};

void set_keylog(uint16_t keycode, keyrecord_t *record) {
  char name = ' ';
    if ((keycode >= QK_MOD_TAP && keycode <= QK_MOD_TAP_MAX) ||
        (keycode >= QK_LAYER_TAP && keycode <= QK_LAYER_TAP_MAX)) { keycode = keycode & 0xFF; }
  if (keycode < 60) {
    name = code_to_name[keycode];
  }

  // update keylog
  snprintf(keylog_str, sizeof(keylog_str), "%dx%d, k%2d : %c",
           record->event.key.row, record->event.key.col,
           keycode, name);
}

void oled_render_keylog(void) {
    oled_write(keylog_str, false);
}

void oled_render_logo(void) {
    static const char PROGMEM crkbd_logo[] = {
        0x80, 0x81, 0x82, 0x83, 0x84, 0x85, 0x86, 0x87, 0x88, 0x89, 0x8a, 0x8b, 0x8c, 0x8d, 0x8e, 0x8f, 0x90, 0x91, 0x92, 0x93, 0x94,
        0xa0, 0xa1, 0xa2, 0xa3, 0xa4, 0xa5, 0xa6, 0xa7, 0xa8, 0xa9, 0xaa, 0xab, 0xac, 0xad, 0xae, 0xaf, 0xb0, 0xb1, 0xb2, 0xb3, 0xb4,
        0xc0, 0xc1, 0xc2, 0xc3, 0xc4, 0xc5, 0xc6, 0xc7, 0xc8, 0xc9, 0xca, 0xcb, 0xcc, 0xcd, 0xce, 0xcf, 0xd0, 0xd1, 0xd2, 0xd3, 0xd4,
        0};
    oled_write_P(crkbd_logo, false);
}

bool oled_task_user(void) {
    if (is_keyboard_master()) {
        oled_render_layer_state();
        oled_render_keylog();
    } else {
        oled_render_logo();
    }
    return false;
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  if (record->event.pressed) {
    set_keylog(keycode, record);
  }
  return true;
}
#endif // OLED_ENABLE
  