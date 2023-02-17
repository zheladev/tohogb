#include "Banks/SetAutoBank.h"
#include "SpriteManager.h"
#include "ZGBMain.h"

typedef struct {
	INT8 vy;
} CUSTOM_DATA;

void START() {
    CUSTOM_DATA* data = (CUSTOM_DATA*)THIS->custom_data;
	data->vy = -2;
}

void UPDATE() {
	CUSTOM_DATA* data = (CUSTOM_DATA*)THIS->custom_data;
	if (TranslateSprite(THIS, 0, data->vy)) {
		SpriteManagerRemoveSprite(THIS);
	}
}

void DESTROY() {
}