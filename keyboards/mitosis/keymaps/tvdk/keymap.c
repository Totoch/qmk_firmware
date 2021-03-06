// This is a layout for the Mitosis inspired by the default Planck layout

#include "mitosis.h"

enum mitosis_layers
{
	_STD,
	_LOWER,
	_RAISE
};


//Mousekeys
#define MOUSEKEY_DELAY 300
#define MOUSEKEY_INTERNAL 50
#define MOUSEKEY_MAX_SPEED 20
#define MOUSEKEY_TIME_TO_MAX 30
#define MOUSEKEY_WHEEL_MAX_SPEED 8
#define MOUSEKEY_WHEEL_TIME_TO_MAX 40

// Fillers to make layering more clear
#define _______ KC_TRNS
#define XXXXXXX KC_NO

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* QWERTY
 * .--------------------------------------------..--------------------------------------------.
 * | Q      | W      | E      | R      | T      || Y      | U      | I      | O      | P      |
 * |--------+--------+--------+--------+--------||--------+--------+--------+--------+--------|
 * | A      | S      | D      | F      | G      || J      | H      | K      | L      | ;      |
 * |--------+--------+--------+--------+--------||--------+--------+--------+--------+--------|
 * | Z      | X      | C      | V      | B      || N      | M      | ,      | .      | /      |
 * '--------+--------+--------+--------+--------||--------+--------+--------+--------+--------'
 *          |   "    | TAB    | LCTRL  | SPACE  || LSHIFT | ENTER  | Del    | Bksp   |
 *          |--------+--------+--------+--------||--------+--------+--------+--------|
 *          |   \    | LGUI   | LALT   | LOWER  || RAISE  | Bksp   | ESC    |  |     |
 *          '-----------------------------------''-----------------------------------'
 */

[_STD] = { /* Standard; as compatible with dvorak and qwerty as possible */
  {KC_Q   , KC_W   , KC_E   , KC_R   , KC_T      ,     KC_Y      , KC_U   , KC_I   , KC_O   , KC_P    },
  {KC_A   , KC_S   , KC_D   , KC_F   , KC_G      ,     KC_H      , KC_J   , KC_K   , KC_L   , KC_SCLN },
  {KC_Z   , KC_X   , KC_C   , KC_V   , KC_B      ,     KC_N      , KC_M   , KC_COMM, KC_DOT , KC_SLSH },
  {XXXXXXX, KC_QUOT, KC_TAB , KC_LCTL, KC_SPC    ,     KC_LSFT   , KC_ENT , KC_DEL , KC_BSPC, XXXXXXX },
  {XXXXXXX, KC_BSLS, KC_LGUI, KC_LALT, MO(_LOWER),     MO(_RAISE), KC_BSPC, KC_ESC , KC_PIPE, XXXXXXX }
},

/* Lower
 * .--------------------------------------------..--------------------------------------------.
 * |  !     |  @     |   #    |   $    |  %     ||   ^    |   &    |   *    |  (     |   )    |
 * |--------+--------+--------+--------+--------||--------+--------+--------+--------+--------|
 * | F1     | F2     | F3     | F4     | F5     || F6     |   _    |  +     |  {     |  }     |
 * |--------+--------+--------+--------+--------||--------+--------+--------+--------+--------|
 * | F7     | F8     | F9     | F10    | F11    || F12    |  Left  |  Down  |  Up    | Right  |
 * '--------+--------+--------+--------+--------||--------+--------+--------+--------+--------'
 *          |        |        |        |        ||        |        |        |        |
 *          |--------+--------+--------+--------||--------+--------+--------+--------|
 *          |        |        |        |        ||        |        |        |        |
 *          '-----------------------------------''-----------------------------------'
 */

[_LOWER] = {
  {KC_EXLM, KC_AT  , KC_HASH, KC_DLR , KC_PERC,      KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN,  KC_RPRN },
  {KC_F1  , KC_F2  , KC_F3  , KC_F4  , KC_F5  ,      KC_F6  , KC_UNDS, KC_PLUS, KC_LCBR, KC_RCBR  },
  {KC_F7  , KC_F8  , KC_F9  , KC_F10 , KC_F11 ,      KC_F12 , KC_LEFT, KC_DOWN, KC_UP  , KC_RIGHT },
  {XXXXXXX, _______, _______, _______, _______,      _______, _______, _______, _______, XXXXXXX  },
  {XXXXXXX, _______, _______, _______, _______,      _______, _______, _______, _______, XXXXXXX  }
},


/* Raise
 * .--------------------------------------------..--------------------------------------------.
 * | 1      | 2      | 3      | 4      | 5      || 6      | 7      | 8      | 9      | 0      |
 * |--------+--------+--------+--------+--------||--------+--------+--------+--------+--------|
 * | SHIFT  |        |        |        |        ||        |  -     |  =     |  [     |   ]    |
 * |--------+--------+--------+--------+--------||--------+--------+--------+--------+--------|
 * |        |        |        |        |        ||        | Home   | Pg Dn  | Pg Up  | End    |
 * '--------+--------+--------+--------+--------||--------+--------+--------+--------+--------'
 *          |        |        |        |        ||        |        |        |        |
 *          |--------+--------+--------+--------||--------+--------+--------+--------|
 *          |        |        |        |        ||        |        |        |        |
 *          '-----------------------------------''-----------------------------------'
 */

[_RAISE] = {
  {KC_1,    KC_2,    KC_3,    KC_4,    KC_5,          KC_6,    KC_7,    KC_8,    KC_9,    KC_0    },
  {KC_LSFT, _______, _______, _______, _______,       _______, KC_MINS, KC_EQL , KC_LBRC, KC_RBRC },
  {_______, _______, _______, _______, _______,       _______, KC_HOME, KC_PGDN, KC_PGUP, KC_END  },
  {XXXXXXX, _______, _______, _______, _______,       _______, _______, _______, _______, XXXXXXX },
  {XXXXXXX, _______, _______, _______, _______,       _______, _______, _______, _______, XXXXXXX }
},

/* blank key layout template
 * .--------------------------------------------..--------------------------------------------.
 * |        |        |        |        |        ||        |        |        |        |        |
 * |--------+--------+--------+--------+--------||--------+--------+--------+--------+--------|
 * |        |        |        |        |        ||        |        |        |        |        |
 * |--------+--------+--------+--------+--------||--------+--------+--------+--------+--------|
 * |        |        |        |        |        ||        |        |        |        |        |
 * '--------+--------+--------+--------+--------||--------+--------+--------+--------+--------'
 *          |        |        |        |        ||        |        |        |        |
 *          |--------+--------+--------+--------||--------+--------+--------+--------|
 *          |        |        |        |        ||        |        |        |        |
 *          '-----------------------------------''-----------------------------------'
 */

};

void matrix_scan_user(void) {
    uint8_t layer = biton32(layer_state);
    
    switch (layer) {
    	case _STD:
    		set_led_off;
    		break;
        case _LOWER:
            set_led_blue;
            break;
	case _RAISE:
            set_led_red;
            break;
        default:
            break;
    }
};

