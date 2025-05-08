/**
 * This file includes custom keycodes for the german input language setting.
 * If you only type in english, you can delete this file and it's import.
 * If you wish to replace this file with your preferred language, use
 * the qmk version as reference:
 * https://github.com/qmk/qmk_firmware/tree/master/quantum/keymap_extras
 *
 * Based on one of the files then removed the rest.
 *
 */

// Aliases
#define DE_CIRC KC_GRV    // ^ (dead)
#define DE_ACUT KC_EQL    // ´ (dead)
#define DE_UDIA KC_LBRC   // Ü
#define DE_ODIA KC_SCLN   // Ö
#define DE_ADIA KC_QUOT   // Ä
#define DE_SECT S(DE_3)   // §
#define DE_GRV S(DE_ACUT) // ` (dead)
#define DE_EURO A(DE_E)   // €
