#include "modding.h"
#include "global.h"
#include "recomputils.h"
#include "recompconfig.h"
#include "playermodelmanager_api.h"
#include "gVentusMiniSkel.h"
#include "gVentusMiniLeftHandClosedDL_mesh.h"
#include "gVentusMiniRightHandClosedDL_mesh.h"
#include "gVentusAdultLeftHandClosedNearDL_mesh.h"
#include "gVentusAdultRightHandClosedNearDL_mesh.h"
#include "gVentusKokiriBladeDL_mesh.h"
#include "gVentusKokiriHandleDL_mesh.h"
#include "gVentusKokiriSheathDL_mesh.h"
#include "gVentusGildedBladeDL_mesh.h"
#include "gVentusGildedHandleDL_mesh.h"
#include "gVentusGildedSheathDL_mesh.h"
#include "gVentusGFSDL_mesh.h"
#include "gVentusHeroesDL_mesh.h"
#include "gVentusMirrorDL.h"
#include "gVentusMirrorRayDL.h"
#include "gVentusMirrorRayBeamDL.h"
#include "gVentusDekuSkel.h"
#include "gVentusAdultSkel.h"
#include "AdultHands.h"

extern TexturePtr eyeTextures[];
extern TexturePtr mouthTextures[];

#define DECLARE_MATRIX_WRAPPED_DL(dlName, mtxName, dl)                  \
    Mtx mtxName;                                                        \
    Gfx dlName[] = {                                                    \
        gsSPMatrix(&mtxName, G_MTX_PUSH | G_MTX_MUL | G_MTX_MODELVIEW), \
        gsSPDisplayList(dl),                                            \
        gsSPPopMatrix(G_MTX_MODELVIEW),                                 \
        gsSPEndDisplayList(),                                           \
    }

DECLARE_MATRIX_WRAPPED_DL(gVentusHeroesBigDL, gVentusHeroesBigMtx, gVentusHeroesDL_mesh);
DECLARE_MATRIX_WRAPPED_DL(gVentusMirrorBigDL, gVentusMirrorBigMtx, gVentusMirrorDL);
DECLARE_MATRIX_WRAPPED_DL(gVentusMirrorRayBigDL, gVentusMirrorRayBigMtx, gVentusMirrorRayDL);
DECLARE_MATRIX_WRAPPED_DL(gVentusMirrorRayBeamBigDL, gVentusMirrorRayBeamBigMtx, gVentusMirrorRayBeamDL);
DECLARE_MATRIX_WRAPPED_DL(gVentusGildedBladeBigDL, gVentusGildedBladeBigMtx, gVentusGildedBladeDL_mesh);
DECLARE_MATRIX_WRAPPED_DL(gVentusGildedHandleBigDL, gVentusGildedHandleBigMtx, gVentusGildedHandleDL_mesh);
DECLARE_MATRIX_WRAPPED_DL(gVentusGildedSheathBigDL, gVentusGildedSheathBigMtx, gVentusGildedSheathDL_mesh);
DECLARE_MATRIX_WRAPPED_DL(gVentusKokiriBladeBigDL, gVentusKokiriBladeBigMtx, gVentusKokiriBladeDL_mesh);
DECLARE_MATRIX_WRAPPED_DL(gVentusKokiriHandleBigDL, gVentusKokiriHandleBigMtx, gVentusKokiriHandleDL_mesh);
DECLARE_MATRIX_WRAPPED_DL(gVentusKokiriSheathBigDL, gVentusKokiriSheathBigMtx, gVentusKokiriSheathDL_mesh);

PLAYERMODELMANAGER_CALLBACK_REGISTER_MODELS void addVentustoModelManager() {
    PlayerModelManagerHandle childPack = PLAYERMODELMANAGER_REGISTER_MODEL("VenChildPack", PMM_MODEL_TYPE_MODEL_PACK);
    PlayerModelManager_setAuthor(childPack, "VenDoesStuff");
    PlayerModelManager_setDisplayName(childPack, "Ventus Equipment(Child Sized)");

    PlayerModelManagerHandle adultPack = PLAYERMODELMANAGER_REGISTER_MODEL("VenBigPack", PMM_MODEL_TYPE_MODEL_PACK);
    PlayerModelManager_setAuthor(adultPack, "VenDoesStuff");
    PlayerModelManager_setDisplayName(adultPack, "Ventus Equipment(Adult Sized)");

    // Child Model
    {
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

    // Adult Model
    {
        PlayerModelManagerHandle h = PLAYERMODELMANAGER_REGISTER_MODEL("mmVenbig", PMM_MODEL_TYPE_ADULT);

        PlayerModelManager_setAuthor(h, "VenDoesStuff");
        PlayerModelManager_setDisplayName(h, "Ventus (big)");
        PlayerModelManager_setEyesTextures(h, eyeTextures);
        PlayerModelManager_setMouthTextures(h, mouthTextures);

        PlayerModelManager_setSkeleton(h, &gVentusAdultSkel);

        PlayerModelManager_setDisplayList(h, PMM_DL_LFIST, gVentusAdultLeftHandClosedNearDL_mesh_opaque_dl);
        PlayerModelManager_setDisplayList(h, PMM_DL_RFIST, gVentusAdultRightHandClosedNearDL_mesh_opaque_dl);
        PlayerModelManager_setDisplayList(h, PMM_DL_LHAND_BOTTLE, gVentusAdultLeftHandClosedNearDL_mesh_opaque_dl);
        PlayerModelManager_setDisplayList(h, PMM_DL_FPS_RHAND, gVentusAdultRightHandClosedNearDL_mesh_opaque_dl);
        PlayerModelManager_setDisplayList(h, PMM_DL_FPS_RFOREARM, gVentusAdultSkel_bone017_gLinkAdultRightArmLimb_mesh_layer_Opaque);
        PlayerModelManager_setDisplayList(h, PMM_DL_FPS_LHAND, gVentusAdultLeftHandClosedNearDL_mesh_opaque_dl);
        PlayerModelManager_setDisplayList(h, PMM_DL_FPS_LFOREARM, gVentusAdultSkel_bone014_gLinkAdultLeftArmLimb_mesh_layer_Opaque);

    }
        
    // Kokiri Sword
    {
        PlayerModelManagerHandle h = PLAYERMODELMANAGER_REGISTER_MODEL("mmVenKokiri", PMM_MODEL_TYPE_SWORD_KOKIRI);
        
        PlayerModelManager_setDisplayName(h, "Norende Sword");
        PlayerModelManager_setAuthor(h, "VenDoesStuff");
        PlayerModelManager_setDisplayList(h, PMM_DL_SWORD_KOKIRI_BLADE, gVentusKokiriBladeDL_mesh);
        PlayerModelManager_setDisplayList(h, PMM_DL_SWORD_KOKIRI_HILT, gVentusKokiriHandleDL_mesh);
        PlayerModelManager_setDisplayList(h, PMM_DL_SWORD_KOKIRI_SHEATH, gVentusKokiriSheathDL_mesh);

        PlayerModelManager_addHandleToPack(childPack, h);
    }

    // Gilded Sword
    {
        PlayerModelManagerHandle h = PLAYERMODELMANAGER_REGISTER_MODEL("mmVenGilded", PMM_MODEL_TYPE_SWORD_GILDED);
        
        PlayerModelManager_setDisplayName(h, "Geneolgia Rapier");
        PlayerModelManager_setAuthor(h, "VenDoesStuff");
        PlayerModelManager_setDisplayList(h, PMM_DL_SWORD_GILDED_BLADE, gVentusGildedBladeDL_mesh);
        PlayerModelManager_setDisplayList(h, PMM_DL_SWORD_GILDED_HILT, gVentusGildedHandleDL_mesh);
        PlayerModelManager_setDisplayList(h, PMM_DL_SWORD_GILDED_SHEATH, gVentusGildedSheathDL_mesh);

        PlayerModelManager_addHandleToPack(childPack, h);
    }

    // Great Fairy Sword
    {
        PlayerModelManagerHandle h = PLAYERMODELMANAGER_REGISTER_MODEL("mmVenGFS", PMM_MODEL_TYPE_SWORD_GREAT_FAIRY);
        
        PlayerModelManager_setDisplayName(h, "Geneolgia Axe");
        PlayerModelManager_setAuthor(h, "VenDoesStuff");
        PlayerModelManager_setDisplayList(h, PMM_DL_SWORD_GREAT_FAIRY_BLADE, gVentusGFSDL_mesh);

        PlayerModelManager_addHandleToPack(childPack, h);
        PlayerModelManager_addHandleToPack(adultPack, h);
    }

    // Heros Shield
    {
        PlayerModelManagerHandle h = PLAYERMODELMANAGER_REGISTER_MODEL("mmVenHerosShield", PMM_MODEL_TYPE_SHIELD_HERO);

        PlayerModelManager_setDisplayName(h, "Norende Wooden Shield");
        PlayerModelManager_setAuthor(h, "VenDoesStuff");
        PlayerModelManager_setDisplayList(h, PMM_DL_SHIELD_HERO, gVentusHeroesDL_mesh);

        PlayerModelManager_addHandleToPack(childPack, h);
    }

    // Mirror Shield
    {
        PlayerModelManagerHandle h = PLAYERMODELMANAGER_REGISTER_MODEL("mmVenMirrorShield", PMM_MODEL_TYPE_SHIELD_MIRROR);

        PlayerModelManager_setDisplayName(h, "Geneolgia Shield");
        PlayerModelManager_setAuthor(h, "VenDoesStuff");
        PlayerModelManager_setDisplayList(h, PMM_DL_SHIELD_MIRROR, gVentusMirrorDL);
        PlayerModelManager_setDisplayList(h, PMM_DL_SHIELD_MIRROR_RAY, gVentusMirrorRayDL);
        PlayerModelManager_setDisplayList(h, PMM_DL_SHIELD_MIRROR_RAY_BEAM, gVentusMirrorRayBeamDL);

        PlayerModelManager_addHandleToPack(childPack, h);
    }

    // Deku Model
    {
        PlayerModelManagerHandle h = PLAYERMODELMANAGER_REGISTER_MODEL("mmVenDeku", PMM_MODEL_TYPE_DEKU);

        PlayerModelManager_setAuthor(h, "VenDoesStuff");
        PlayerModelManager_setDisplayName(h, "Ventus");

        PlayerModelManager_setSkeleton(h, &gVentusDekuSkel);

        PlayerModelManager_setDisplayList(h, PMM_DL_LFIST, gVentusDekuSkel_bone015_gLinkDekuLeftHandLimb_mesh_layer_Opaque);
        PlayerModelManager_setDisplayList(h, PMM_DL_RFIST, gVentusDekuSkel_bone018_gLinkDekuRightHandLimb_mesh_layer_Opaque);
        PlayerModelManager_setDisplayList(h, PMM_DL_LHAND_BOTTLE, gVentusDekuSkel_bone015_gLinkDekuLeftHandLimb_mesh_layer_Opaque);
    }

    // Adult Heros
    {
        PlayerModelManagerHandle h = PLAYERMODELMANAGER_REGISTER_MODEL("mmVenHerosShieldBig", PMM_MODEL_TYPE_SHIELD_HERO);

        PlayerModelManager_setDisplayName(h, "Norende Wooden Shield (Big)");
        PlayerModelManager_setAuthor(h, "VenDoesStuff");
        guScale(&gVentusHeroesBigMtx, 1.25f, 1.25f, 1.25f); // scale matrix by 1.25 (approx. child > adult)
        PlayerModelManager_setDisplayList(h, PMM_DL_SHIELD_HERO, gVentusHeroesBigDL);

        PlayerModelManager_addHandleToPack(adultPack, h);
    }

    // Adult Mirror
    {
        PlayerModelManagerHandle h = PLAYERMODELMANAGER_REGISTER_MODEL("mmVenMirrorShieldBig", PMM_MODEL_TYPE_SHIELD_MIRROR);

        PlayerModelManager_setDisplayName(h, "Geneolgia Shield (Big)");
        PlayerModelManager_setAuthor(h, "VenDoesStuff");
        guScale(&gVentusMirrorBigMtx, 1.25f, 1.25f, 1.25f); // scale matrix by 1.25 (approx. child > adult)
        guScale(&gVentusMirrorRayBigMtx, 1.25f, 1.25f, 1.25f); // scale matrix by 1.25 (approx. child > adult)
        guScale(&gVentusMirrorRayBeamBigMtx, 1.25f, 1.25f, 1.25f); // scale matrix by 1.25 (approx. child > adult)
        PlayerModelManager_setDisplayList(h, PMM_DL_SHIELD_MIRROR, gVentusMirrorBigDL);
        PlayerModelManager_setDisplayList(h, PMM_DL_SHIELD_MIRROR_RAY, gVentusMirrorRayBigDL);
        PlayerModelManager_setDisplayList(h, PMM_DL_SHIELD_MIRROR_RAY_BEAM, gVentusMirrorRayBeamBigDL);

        PlayerModelManager_addHandleToPack(adultPack, h);
    }

    // Adult Gilded
    {
        PlayerModelManagerHandle h = PLAYERMODELMANAGER_REGISTER_MODEL("mmVenGildedBig", PMM_MODEL_TYPE_SWORD_GILDED);
        
        PlayerModelManager_setDisplayName(h, "Geneolgia Rapier (Big)");
        PlayerModelManager_setAuthor(h, "VenDoesStuff");
        guScale(&gVentusGildedBladeBigMtx, 1.25f, 1.25f, 1.25f); // scale matrix by 1.25 (approx. child > adult)
        guScale(&gVentusGildedHandleBigMtx, 1.25f, 1.25f, 1.25f); // scale matrix by 1.25 (approx. child > adult)
        guScale(&gVentusGildedSheathBigMtx, 1.25f, 1.25f, 1.25f); // scale matrix by 1.25 (approx. child > adult)
        PlayerModelManager_setDisplayList(h, PMM_DL_SWORD_GILDED_BLADE, gVentusGildedBladeBigDL);
        PlayerModelManager_setDisplayList(h, PMM_DL_SWORD_GILDED_HILT, gVentusGildedHandleBigDL);
        PlayerModelManager_setDisplayList(h, PMM_DL_SWORD_GILDED_SHEATH, gVentusGildedSheathBigDL);
        
        // reposition handle on link's back
        static Mtx swordGildedBackRepositionMtx;
        guPosition(&swordGildedBackRepositionMtx, 0.f, 0.f, 0.f, 1.f, -715.f, -260.f, -50.f);
        PlayerModelManager_setMatrix(h, PMM_MTX_SWORD_GILDED_BACK, &swordGildedBackRepositionMtx);

        PlayerModelManager_addHandleToPack(adultPack, h);
    }

    // Adult Kokiri
    {
        PlayerModelManagerHandle h = PLAYERMODELMANAGER_REGISTER_MODEL("mmVenKokiriBig", PMM_MODEL_TYPE_SWORD_KOKIRI);
        
        PlayerModelManager_setDisplayName(h, "Norende Sword (Big)");
        PlayerModelManager_setAuthor(h, "VenDoesStuff");
        guScale(&gVentusKokiriBladeBigMtx, 1.25f, 1.25f, 1.25f); // scale matrix by 1.25 (approx. child > adult)
        guScale(&gVentusKokiriHandleBigMtx, 1.25f, 1.25f, 1.25f); // scale matrix by 1.25 (approx. child > adult)
        guScale(&gVentusKokiriSheathBigMtx, 1.25f, 1.25f, 1.25f); // scale matrix by 1.25 (approx. child > adult)
        PlayerModelManager_setDisplayList(h, PMM_DL_SWORD_KOKIRI_BLADE, gVentusKokiriBladeBigDL);
        PlayerModelManager_setDisplayList(h, PMM_DL_SWORD_KOKIRI_HILT, gVentusKokiriHandleBigDL);
        PlayerModelManager_setDisplayList(h, PMM_DL_SWORD_KOKIRI_SHEATH, gVentusKokiriSheathBigDL);

        // reposition handle on link's back
        static Mtx swordKokiriBackRepositionMtx;
        guPosition(&swordKokiriBackRepositionMtx, 0.f, 0.f, 0.f, 1.f, -715.f, -310.f, -50.f);
        PlayerModelManager_setMatrix(h, PMM_MTX_SWORD_KOKIRI_BACK, &swordKokiriBackRepositionMtx);

        PlayerModelManager_addHandleToPack(adultPack, h);
    }

}