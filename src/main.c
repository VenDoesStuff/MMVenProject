#include "modding.h"
#include "global.h"
#include "recomputils.h"
#include "recompconfig.h"
#include "playermodelmanager_api.h"
#include "gVentusMiniSkel.h"
#include "gVentusMiniLeftHandClosedDL_mesh.h"
#include "gVentusMiniRightHandClosedDL_mesh.h"
#include "gVentusKokiriBladeDL_mesh.h"
#include "gVentusKokiriHandleDL_mesh.h"
#include "gVentusKokiriSheathDL_mesh.h"
#include "gVentusGildedBladeDL_mesh.h"
#include "gVentusGildedHandleDL_mesh.h"
#include "gVentusGildedSheathDL_mesh.h"
#include "gVentusGFSDL_mesh.h"

extern TexturePtr eyeTextures[];
extern TexturePtr mouthTextures[];

PLAYERMODELMANAGER_CALLBACK_REGISTER_MODELS void registerVen() {
    // PlayerModelManager stuff
    PlayerModelManagerHandle h = PLAYERMODELMANAGER_REGISTER_MODEL("mmVenProject", PMM_MODEL_TYPE_CHILD);

    PlayerModelManager_setAuthor(h, "VenDoesStuff");
    PlayerModelManager_setDisplayName(h, "Ventus");
    PlayerModelManager_setEyesTextures(h, eyeTextures);
    PlayerModelManager_setMouthTextures(h, mouthTextures);

    PlayerModelManager_setSkeleton(h, &gVentusMiniSkel);

    PlayerModelManager_setDisplayList(h, PMM_DL_LFIST, gVentusMiniLeftHandClosedDL_mesh);
    PlayerModelManager_setDisplayList(h, PMM_DL_RFIST, gVentusMiniRightHandClosedDL_mesh);
    PlayerModelManager_setDisplayList(h, PMM_DL_LHAND_BOTTLE, gVentusMiniLeftHandClosedDL_mesh);
    PlayerModelManager_setDisplayList(h, PMM_DL_FPS_RHAND, gVentusMiniRightHandClosedDL_mesh);
    PlayerModelManager_setDisplayList(h, PMM_DL_FPS_RFOREARM, gVentusMiniSkel_bone017_gLinkChildRightForearmLimb_mesh_layer_Opaque);
    PlayerModelManager_setDisplayList(h, PMM_DL_FPS_LHAND, gVentusMiniLeftHandClosedDL_mesh);
    PlayerModelManager_setDisplayList(h, PMM_DL_FPS_LFOREARM, gVentusMiniSkel_bone014_gLinkChildLeftForearmLimb_mesh_layer_Opaque);
}
	
PLAYERMODELMANAGER_CALLBACK_REGISTER_MODELS void registerVenKokiri() {
	
	PlayerModelManagerHandle h = PLAYERMODELMANAGER_REGISTER_MODEL("mmVenKokiri", PMM_MODEL_TYPE_SWORD_KOKIRI);
	
    PlayerModelManager_setDisplayName(h, "Norende Sword");
    PlayerModelManager_setAuthor(h, "VenDoesStuff");
    PlayerModelManager_setDisplayList(h, PMM_DL_SWORD_KOKIRI_BLADE, gVentusKokiriBladeDL_mesh);
    PlayerModelManager_setDisplayList(h, PMM_DL_SWORD_KOKIRI_HILT, gVentusKokiriHandleDL_mesh);
    PlayerModelManager_setDisplayList(h, PMM_DL_SWORD_KOKIRI_SHEATH, gVentusKokiriSheathDL_mesh);
}

PLAYERMODELMANAGER_CALLBACK_REGISTER_MODELS void registerVenGilded() {
	
	PlayerModelManagerHandle h = PLAYERMODELMANAGER_REGISTER_MODEL("mmVenGilded", PMM_MODEL_TYPE_SWORD_GILDED);
	
    PlayerModelManager_setDisplayName(h, "Norende Rapier");
    PlayerModelManager_setAuthor(h, "VenDoesStuff");
    PlayerModelManager_setDisplayList(h, PMM_DL_SWORD_GILDED_BLADE, gVentusGildedBladeDL_mesh);
    PlayerModelManager_setDisplayList(h, PMM_DL_SWORD_GILDED_HILT, gVentusGildedHandleDL_mesh);
    PlayerModelManager_setDisplayList(h, PMM_DL_SWORD_GILDED_SHEATH, gVentusGildedSheathDL_mesh);
}

PLAYERMODELMANAGER_CALLBACK_REGISTER_MODELS void registerVenGFS() {
	
	PlayerModelManagerHandle h = PLAYERMODELMANAGER_REGISTER_MODEL("mmVenGFS", PMM_MODEL_TYPE_SWORD_GREAT_FAIRY);
	
    PlayerModelManager_setDisplayName(h, "Norende Axe");
    PlayerModelManager_setAuthor(h, "VenDoesStuff");
    PlayerModelManager_setDisplayList(h, PMM_DL_SWORD_GREAT_FAIRY_BLADE, gVentusGFSDL_mesh);
}