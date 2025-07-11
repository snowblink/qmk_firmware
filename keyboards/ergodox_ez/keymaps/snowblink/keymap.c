#include QMK_KEYBOARD_H
#include "version.h"

enum custom_keycodes {
    PLACEHOLDER = SAFE_RANGE,  // can always be here
    EPRM,
    VRSN,
    RGB_SLD,
    HASHROCKET
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    // base Layer
    [0] = LAYOUT_ergodox(
        // left hand
        KC_GRAVE, KC_1, KC_2, KC_3, KC_4, KC_5, TT(1),   // top row
        KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T,            // 2nd row
        LGUI(KC_C),                                      // top big vertical
        CTL_T(KC_ESCAPE), KC_A, KC_S, KC_D, KC_F, KC_G,  // 3rd row
        KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B,           // 4th row
        LGUI(KC_V),                                      // bottom big vertical
        TT(4), CW_TOGG, KC_LCTL, KC_LALT, KC_LGUI,       // bottom row
        KC_MINUS, KC_EQUAL,                              // thumb top row
        _______,                                         // top thumblet
        KC_LGUI, KC_ENTER,                               // big thumb buttons
        _______,                                         // bottom thumblet

        // right hand
        TT(2), KC_6, KC_7, KC_8, KC_9, KC_0, KC_BSLS,   // top row
        LGUI(KC_KP_PLUS),                                 // top big vertical
        KC_Y, KC_U, KC_I, KC_O, KC_P, KC_MINUS,           // 2nd row
        KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOTE,      // 3rd row
        LGUI(KC_KP_MINUS),                                // bottom big vertical
        KC_N, KC_M, KC_COMMA, KC_DOT, KC_SLASH, KC_RSFT,  // 4th row
        KC_LGUI, KC_LALT, KC_LCTL, _______, TT(3),        // bottom row
        KC_LBRC, KC_RBRC,                         // thumb top row
        KC_DEL, HASHROCKET,                              // two thumblets
        KC_BSPC, KC_SPACE                               // big thumb buttons
        ),

    // layer 1
    [1] = LAYOUT_ergodox(
        // left hand
        VRSN, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, _______,              // top row
        _______, KC_EXLM, KC_AT, KC_LCBR, KC_RCBR, KC_PIPE,            // 2nd row
        _______,                                                       // top big vertical
        _______, KC_HASH, KC_DLR, KC_LPRN, KC_RPRN, KC_GRAVE,          // 3rd row
        _______,                                                       // bottom big vertical
        KC_PERC, KC_CIRC, KC_LBRC, KC_RBRC, KC_TILD, _______,  // 4th row
        _______, _______, _______, _______, _______,                   // bottom row
        RGB_MOD, RGB_RMOD, // cycle through RGB Modes                  // thumb row top
        _______,                                                       // top thumblet
        RGB_VAD, RGB_VAI,  // decrease brightness, increase brightness // big thumb buttons
        _______,                                                       // bottom thumblet

        // right hand
        _______, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11,   // top row
        _______,                                               // top big vertical
        _______, _______, _______, _______, _______, _______,  // 3rd row
        _______, _______, _______, _______, _______, _______,  // 2nd row
        _______,                                               // bottom big vertical
        KC_AMPR, _______, _______, _______, _______, _______,  // 4th row
        _______, _______, _______, _______, _______,           // bottom row
        RGB_TOG, RGB_SLD, // RGB on/off, reset mode to solid   // thumb top row
        _______, _______,                                      // two thumblets
        RGB_HUD, RGB_HUI  // change hue                        // big thumb buttons
        ),

    // layer 2
    [2] = LAYOUT_ergodox(
        // left hand
        _______, _______, _______, _______, _______, _______, _______,   // top row
        _______, _______, _______, KC_MS_UP, _______, _______,           // 2nd row
        _______,                                                         // top big vertical
        _______, _______, KC_MS_LEFT, KC_MS_DOWN, KC_MS_RIGHT, _______,  // 3rd row
        _______, _______, _______, _______, _______, _______,            // 4th row
        _______,                                                         // bottom big vertical
        _______, _______, _______, KC_MS_BTN1, KC_MS_BTN2,               // bottom row
        _______, _______,                                                // thumb top row
        _______,                                                         // top thumblet
        KC_MS_BTN1, KC_MS_BTN2,                                             // big thumb buttons
        _______,                                                         // bottom thumblet

        // right hand
        _______, KC_SYSTEM_SLEEP, _______, _______, _______, _______, _______,         // top row
        _______,                                                                       // top big vertical
        _______, _______, KC_UP, _______, _______, _______,                            // 2nd row
        _______, KC_LEFT, KC_DOWN, KC_RIGHT, _______, KC_MEDIA_PLAY_PAUSE,             // 3rd row
        _______,                                                                       // bottom big vertical
        _______, _______, KC_MEDIA_PREV_TRACK, KC_MEDIA_NEXT_TRACK, _______, _______,  // 4th row
        KC_AUDIO_VOL_DOWN, KC_AUDIO_VOL_UP, KC_AUDIO_MUTE, _______, _______,           // bottom row
        _______, _______,                                                              // top thumb row
        _______, _______,                                                              // two thumblets
        _______, KC_MS_BTN2                                                            // big thumb buttons
        ),

    // layer 3
    [3] = LAYOUT_ergodox(
        // left hand
        _______, _______, _______, _______, _______, _______, _______,  // top row
        _______, _______, _______, KC_UP, _______, _______,             // 2nd row
        _______,                                                        // top big vertical
        _______, _______, KC_LEFT, KC_DOWN, KC_RIGHT, _______,          // 3rd row
        _______, _______, _______, _______, _______, _______,           // 4th row
        _______,                                                        // bottom big vertical
        _______, _______, _______, _______, _______,                    // bottom row
        _______, _______,                                               // thumb top row
        _______,                                                        // top thumblet
        LALT(LCTL(KC_LGUI)), _______,                                   // big thumb buttons
        _______,                                                        // bottom thumblet

        // right hand
        _______, _______, _______, _______, _______, _______, KC_HOME,  // top row
        _______,                                                        // top big vertical
        _______, _______, KC_UP, _______, _______, KC_END,             // 2nd row
        _______, KC_LEFT, KC_DOWN, KC_RIGHT, _______, KC_PGUP,          // 3rd row
        _______,                                                        // bottom big vertical
        _______, _______, _______, KC_UP, _______, KC_PGDN,           // 4th row
        _______, KC_LEFT, KC_DOWN, KC_RIGHT, _______,                   // bottom row
        _______, _______,                                               // thumb top row
        _______, _______,                                               // two thumblets
        LALT(LSFT(KC_UP)), LALT(LSFT(KC_DOWN))                          // big thumb buttons
        ),

    // layer 1
    [4] = LAYOUT_ergodox(
        // left hand
        _______, _______, _______, _______, _______, _______, _______,  // top row
        _______, _______, _______, _______, _______, _______,           // 2nd row
        _______,                                                        // top big vertical
        _______, _______, _______, _______, _______, _______,           // 3rd row
        _______,                                                        // bottom big vertical
        _______, _______, _______, _______, _______, _______,           // 4th row
        _______, _______, _______, _______, _______,                    // bottom row
        _______, _______,                                               // thumb row top
        _______,                                                        // top thumblet
        _______, _______,                                               // big thumb buttons
        _______,                                                        // bottom thumblet

        // right hand
        _______, _______, _______, _______, _______, _______, _______,  // top row
        _______,                                                        // top big vertical
        _______, KC_7, KC_8, KC_9, _______, _______,                    // 3rd row
        _______, KC_4, KC_5, KC_6, _______, _______,                    // 2nd row
        _______,                                                        // bottom big vertical
        _______, KC_1, KC_2, KC_3, _______, _______,                    // 4th row
        KC_0, KC_DOT, _______, _______, _______,                        // bottom row
        _______, _______,                                               // thumb top row
        _______, _______,                                               // two thumblets
        _______, _______                                                // big thumb buttons
        ),

};

const uint16_t PROGMEM fn_actions[] = {[1] = ACTION_LAYER_TAP_TOGGLE(1)};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if (record->event.pressed) {
        switch (keycode) {
            case VRSN:
                SEND_STRING(QMK_KEYBOARD "/" QMK_KEYMAP " @ " QMK_VERSION);
                return false;
#ifdef RGBLIGHT_ENABLE
            case RGB_SLD:
                rgblight_mode(1);
                return false;
#endif
            case HASHROCKET:
                SEND_STRING("=>");
                return false;
        }
    }
    return true;
}

// Runs just one time when the keyboard initializes.
void keyboard_post_init_user(void) {
#ifdef RGBLIGHT_COLOR_LAYER_0
    rgblight_setrgb(RGBLIGHT_COLOR_LAYER_0);
#endif
};

// Runs whenever there is a layer state change.
layer_state_t layer_state_set_user(layer_state_t state) {
    ergodox_board_led_off();
    ergodox_right_led_1_off();
    ergodox_right_led_2_off();
    ergodox_right_led_3_off();

    uint8_t layer = get_highest_layer(state);
    switch (layer) {
        case 0:
            ergodox_board_led_off();
#ifdef RGBLIGHT_COLOR_LAYER_0
            rgblight_setrgb(RGBLIGHT_COLOR_LAYER_0);
#endif
            break;
        case 1:
            ergodox_right_led_1_on();
#ifdef RGBLIGHT_COLOR_LAYER_1
            rgblight_setrgb(RGBLIGHT_COLOR_LAYER_1);
#endif
            break;
        case 2:
            ergodox_right_led_2_on();
#ifdef RGBLIGHT_COLOR_LAYER_2
            rgblight_setrgb(RGBLIGHT_COLOR_LAYER_2);
#endif
            break;
        case 3:
            ergodox_right_led_3_on();
#ifdef RGBLIGHT_COLOR_LAYER_3
            rgblight_setrgb(RGBLIGHT_COLOR_LAYER_3);
#endif
            break;
        case 4:
            ergodox_right_led_1_on();
            ergodox_right_led_2_on();
#ifdef RGBLIGHT_COLOR_LAYER_4
            rgblight_setrgb(RGBLIGHT_COLOR_LAYER_4);
#endif
            break;
        case 5:
            ergodox_right_led_1_on();
            ergodox_right_led_3_on();
#ifdef RGBLIGHT_COLOR_LAYER_5
            rgblight_setrgb(RGBLIGHT_COLOR_LAYER_5);
#endif
            break;
        case 6:
            ergodox_right_led_2_on();
            ergodox_right_led_3_on();
#ifdef RGBLIGHT_COLOR_LAYER_6
            rgblight_setrgb(RGBLIGHT_COLOR_LAYER_6);
#endif
            break;
        case 7:
            ergodox_right_led_1_on();
            ergodox_right_led_2_on();
            ergodox_right_led_3_on();
#ifdef RGBLIGHT_COLOR_LAYER_7
            rgblight_setrgb(RGBLIGHT_COLOR_LAYER_7);
#endif
            break;
        default:
            break;
    }

    return state;
};
