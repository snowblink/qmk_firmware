#include "ergodox_ez.h"
#include "debug.h"
#include "action_layer.h"
#include "version.h"

#define _______ KC_TRNS

enum custom_keycodes {
  PLACEHOLDER = SAFE_RANGE, // can always be here
  EPRM,
  VRSN,
  RGB_SLD,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  // base Layer
  [0] = KEYMAP(
    // left hand
    KC_GRAVE,KC_1,KC_2,KC_3,KC_4,KC_5,TT(1), // top row
    KC_TAB,KC_Q,KC_W,KC_E,KC_R,KC_T, // 2nd row
    LGUI(KC_C), // top big vertical
    CTL_T(KC_ESCAPE),KC_A,KC_S,KC_D,KC_F,KC_G, // 3rd row
    KC_LSFT,KC_Z,KC_X,KC_C,KC_V,KC_B, // 4th row
    LGUI(KC_V), // bottom big vertical
    TT(4), _______, KC_LCTL, KC_LALT, KC_LGUI, // bottom row
    KC_MINUS,KC_EQUAL, // thumb top row
    _______, // top thumblet
    KC_LGUI,KC_ENTER, // big thumb buttons
    _______, // bottom thumblet

    // right hand
    TT(2),KC_6,KC_7,KC_8,KC_9,KC_0,KC_BSLASH, // top row
    LGUI(KC_KP_PLUS), // top big vertical
    KC_Y,KC_U,KC_I,KC_O,KC_P,KC_MINUS, // 2nd row
    KC_H,KC_J,KC_K,KC_L,KC_SCOLON,KC_QUOTE, // 3rd row
    LGUI(KC_KP_MINUS), // bottom big vertical
    KC_N,KC_M,KC_COMMA,KC_DOT,KC_SLASH,KC_RSFT, // 4th row
    KC_LGUI,KC_LALT,KC_LCTL, _______, TT(3), // bottom row
    KC_LBRACKET,KC_RBRACKET, // thumb top row
    M(2), M(1), // two thumblets
    KC_BSPACE,KC_SPACE // big thumb buttons
  ),

  // layer 1
  [1] = KEYMAP(
    // left hand
    M(0),KC_F1,KC_F2,KC_F3,KC_F4,KC_F5,KC_TRANSPARENT, // top row
    KC_TRANSPARENT,KC_EXLM,KC_AT,KC_LCBR,KC_RCBR,KC_PIPE, // 2nd row
    KC_TRANSPARENT, // top big vertical
    KC_TRANSPARENT,KC_HASH,KC_DLR,KC_LPRN,KC_RPRN,KC_GRAVE, // 3rd row
    KC_TRANSPARENT, // bottom big vertical
    KC_PERC,KC_CIRC,KC_LBRACKET,KC_RBRACKET,KC_TILD,KC_TRANSPARENT, // 4th row
    KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT, // bottom row
    RGB_MOD,KC_TRANSPARENT, // thumb row top
    KC_TRANSPARENT, // top thumblet
    RGB_VAD,RGB_VAI, // big thumb buttons
    KC_TRANSPARENT, // bottom thumblet

    // right hand
    KC_TRANSPARENT,KC_F6,KC_F7,KC_F8,KC_F9,KC_F10,KC_F11, // top row
    KC_TRANSPARENT, // top big vertical
    _______, _______,_______,_______,_______,_______, // 3rd row
    _______, _______,_______,_______,_______,_______, // 2nd row
    _______, // bottom big vertical
    KC_AMPR, _______,_______,_______,_______,_______, // 4th row
    _______, _______, _______, _______, _______, // bottom row
    RGB_TOG,RGB_SLD, // thumb top row
    KC_TRANSPARENT,KC_TRANSPARENT, // two thumblets
    RGB_HUD,RGB_HUI // big thumb buttons
  ),

  // layer 2
  [2] = KEYMAP(
    // left hand
    KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT, // top row
    KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_MS_UP,KC_TRANSPARENT,KC_TRANSPARENT, // 2nd row
    KC_TRANSPARENT, // top big vertical
    KC_TRANSPARENT, KC_TRANSPARENT,KC_MS_LEFT,KC_MS_DOWN,KC_MS_RIGHT,KC_TRANSPARENT, // 3rd row
    KC_TRANSPARENT,KC_TRANSPARENT, KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT, // 4th row
    KC_TRANSPARENT, // bottom big vertical
    KC_TRANSPARENT,KC_TRANSPARENT, KC_TRANSPARENT, KC_MS_BTN1,KC_MS_BTN2, // bottom row
    KC_TRANSPARENT,KC_TRANSPARENT, // thumb top row
    KC_TRANSPARENT, // top thumblet
    KC_MS_BTN1, KC_TRANSPARENT, // big thumb buttons
    KC_TRANSPARENT, // bottom thumblet

    // right hand
    KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT, // top row
    KC_TRANSPARENT, // top big vertical
    KC_TRANSPARENT,KC_TRANSPARENT,KC_UP,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT, // 2nd row
    KC_TRANSPARENT,KC_LEFT,KC_DOWN,KC_RIGHT,KC_TRANSPARENT,KC_MEDIA_PLAY_PAUSE, // 3rd row
    KC_TRANSPARENT, // bottom big vertical
    KC_TRANSPARENT,KC_TRANSPARENT,KC_MEDIA_PREV_TRACK,KC_MEDIA_NEXT_TRACK,KC_TRANSPARENT,KC_TRANSPARENT, // 4th row
    KC_AUDIO_VOL_DOWN,KC_AUDIO_VOL_UP,KC_AUDIO_MUTE,KC_TRANSPARENT,KC_TRANSPARENT, // bottom row
    KC_TRANSPARENT,KC_TRANSPARENT, // top thumb row
    KC_TRANSPARENT,KC_TRANSPARENT, // two thumblets
    KC_TRANSPARENT,KC_MS_BTN2 // big thumb buttons
  ),

  // layer 3
  [3] = KEYMAP(
    // left hand
    KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT, // top row
    KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_UP,KC_TRANSPARENT,KC_TRANSPARENT, // 2nd row
    KC_TRANSPARENT, // top big vertical
    KC_TRANSPARENT, KC_TRANSPARENT,KC_LEFT,KC_DOWN,KC_RIGHT,KC_TRANSPARENT, // 3rd row
    KC_TRANSPARENT,KC_TRANSPARENT, KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT, // 4th row
    KC_TRANSPARENT, // bottom big vertical
    KC_TRANSPARENT,KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, // bottom row
    KC_TRANSPARENT, KC_TRANSPARENT, // thumb top row
    KC_TRANSPARENT, // top thumblet
    LALT(LCTL(KC_LGUI)),KC_TRANSPARENT, // big thumb buttons
    KC_TRANSPARENT, // bottom thumblet

    // right hand
    KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT, // top row
    KC_TRANSPARENT, // top big vertical
    KC_TRANSPARENT,KC_TRANSPARENT,KC_UP,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT, // 2nd row
    KC_TRANSPARENT, KC_LEFT,KC_DOWN,KC_RIGHT,KC_TRANSPARENT,KC_PGUP, // 3rd row
    KC_TRANSPARENT, // bottom big vertical
    KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_UP,KC_TRANSPARENT,KC_PGDOWN, // 4th row
    KC_TRANSPARENT,KC_LEFT,KC_DOWN,KC_RIGHT,KC_TRANSPARENT, // bottom row
    KC_TRANSPARENT,KC_TRANSPARENT, // thumb top row
    KC_TRANSPARENT,KC_TRANSPARENT, // two thumblets
    LALT(LSFT(KC_UP)),LALT(LSFT(KC_DOWN)) // big thumb buttons
  ),

  // layer 1
  [4] = KEYMAP(
    // left hand
    _______, _______, _______, _______, _______, _______, _______, // top row
    _______, _______, _______, _______, _______, _______, // 2nd row
    _______, // top big vertical
    _______, _______, _______, _______, _______, _______, // 3rd row
    _______, // bottom big vertical
    _______, _______, _______, _______, _______, _______, // 4th row
    _______, _______, _______, _______, _______, // bottom row
    _______, _______, // thumb row top
    _______, // top thumblet
    _______, _______, // big thumb buttons
    _______, // bottom thumblet

    // right hand
    _______, _______, _______, _______, _______, _______, _______, // top row
    _______, // top big vertical
    _______, KC_7, KC_8, KC_9, _______, _______, // 3rd row
    _______, KC_4, KC_5, KC_6, _______, _______, // 2nd row
    _______, // bottom big vertical
    _______, KC_1, KC_2, KC_3, _______,_______, // 4th row
    KC_0, KC_DOT, _______, _______, _______, // bottom row
    _______,_______, // thumb top row
    _______,_______, // two thumblets
    _______,_______ // big thumb buttons
  ),

};

const uint16_t PROGMEM fn_actions[] = {
  [1] = ACTION_LAYER_TAP_TOGGLE(1)
};

// leaving this in place for compatibilty with old keymaps cloned and re-compiled.
const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt)
{
      switch(id) {
        case 0:
        if (record->event.pressed) {
          SEND_STRING (QMK_KEYBOARD "/" QMK_KEYMAP " @ " QMK_VERSION);
        }
        break;
        case 1:
        if (record->event.pressed) {
            SEND_STRING("=>");
            return false;
        }
        break;
        case 2:
        if (record->event.pressed) {
            SEND_STRING("notonthehighstreet");
            return false;
        }
        break;
      }
    return MACRO_NONE;
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    // dynamically generate these.
    case EPRM:
      if (record->event.pressed) {
        eeconfig_init();
      }
      return false;
      break;
    case VRSN:
      if (record->event.pressed) {
        SEND_STRING (QMK_KEYBOARD "/" QMK_KEYMAP " @ " QMK_VERSION);
      }
      return false;
      break;
    case RGB_SLD:
      if (record->event.pressed) {
        rgblight_mode(1);
      }
      return false;
      break;

  }
  return true;
}

void matrix_scan_user(void) {

    uint8_t layer = biton32(layer_state);

    ergodox_board_led_off();
    ergodox_right_led_1_off();
    ergodox_right_led_2_off();
    ergodox_right_led_3_off();
    switch (layer) {
        case 1:
            ergodox_right_led_1_on();
            break;
        case 2:
            ergodox_right_led_2_on();
            break;
        case 3:
            ergodox_right_led_3_on();
            break;
        case 4:
            ergodox_right_led_1_on();
            ergodox_right_led_2_on();
            break;
        case 5:
            ergodox_right_led_1_on();
            ergodox_right_led_3_on();
            break;
        case 6:
            ergodox_right_led_2_on();
            ergodox_right_led_3_on();
            break;
        case 7:
            ergodox_right_led_1_on();
            ergodox_right_led_2_on();
            ergodox_right_led_3_on();
            break;
        default:
            break;
    }

};
