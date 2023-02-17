#include "Banks/SetAutoBank.h"
#include "SpriteManager.h"
#include "ZGBMain.h"

void START() {
}

void UPDATE() {
    handleInput();
}

void DESTROY() {
}

void handleInput() {
    UBYTE key = joypad();
    UINT8 translation_x, translation_y;
    if (key & J_UP) {
        translation_y = -1;
    }
    if (key & J_DOWN) {
        translation_y = 1;
    }
    if (key & J_LEFT) {
        translation_x = -1;
    }
    if (key & J_RIGHT) {
        translation_x = 1;
    }
    if (key & J_B) {
        translation_x *= 2;
        translation_y *= 2;
    }
    if (key & J_A) {
        //FIRE
    }

    TranslateSprite(THIS, translation_x, translation_y);
}