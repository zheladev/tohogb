#include "Banks/SetAutoBank.h"
#include "SpriteManager.h"
#include "ZGBMain.h"
#include "Keys.h"

BOOLEAN can_shoot;
UINT16 last_shoot_time;

void START() {
    can_shoot = TRUE;
}

void UPDATE() {
    handleInput();
    handleBulletCollision();
}

void DESTROY() {
}

void handleBulletCollision() {
    UINT8 i;
	Sprite *spr;
    SPRITEMANAGER_ITERATE(i, spr)
	{
		// if (spr->type == SpriteTab)
            //if (CheckCollision(THIS, spr))
    }
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
    if (KEY_TICKED(J_A) && key & J_A) {
        // FAIA
        SpriteManagerAdd(SpritePlayerBullet, THIS->x+4, THIS->y);
    }

    TranslateSprite(THIS, translation_x, translation_y);
}