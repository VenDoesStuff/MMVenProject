#include "gVentusGildedBladeDL_mesh.h"

u64 gVentusGildedBladeDL_mesh_SWMSBS3TC_ci4[] = {
	0x0000000000000000, 0x0000000000000000, 0x1111111111111111, 0x1111111111111111, 0x1111111111111111, 0x1111111111111111, 0x0000000000000000, 0x0000000000000000, 
	0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 
	
};

u64 gVentusGildedBladeDL_mesh_SWMSBS3TC_pal_rgba16[] = {
	0xde37ffff00000000
};

Vtx gVentusGildedBladeDL_mesh_gVentusGildedBladeDL_mesh_mesh_layer_Opaque_vtx_cull[8] = {
	{{ {919, 148, -73}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {919, 148, 41}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {919, 323, 41}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {919, 323, -73}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {3118, 148, -73}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {3118, 148, 41}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {3118, 323, 41}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {3118, 323, -73}, 0, {0, 0}, {0, 0, 0, 0} }},
};

Vtx gVentusGildedBladeDL_mesh_gVentusGildedBladeDL_mesh_mesh_layer_Opaque_vtx_0[17] = {
	{{ {923, 235, -73}, 0, {-16, 124}, {0, 0, 129, 255} }},
	{{ {919, 323, -16}, 0, {19, 123}, {0, 127, 0, 255} }},
	{{ {1546, 323, -16}, 0, {19, 181}, {0, 127, 0, 255} }},
	{{ {923, 235, 41}, 0, {-16, 124}, {0, 0, 127, 255} }},
	{{ {1546, 235, 41}, 0, {-16, 181}, {0, 0, 127, 255} }},
	{{ {1546, 148, -16}, 0, {19, 181}, {0, 129, 0, 255} }},
	{{ {919, 148, -16}, 0, {19, 123}, {0, 129, 0, 255} }},
	{{ {1546, 235, -73}, 0, {-16, 181}, {0, 0, 129, 255} }},
	{{ {2144, 323, -16}, 0, {19, 268}, {0, 127, 0, 255} }},
	{{ {2145, 235, 41}, 0, {-16, 268}, {0, 0, 127, 255} }},
	{{ {2144, 148, -16}, 0, {19, 268}, {0, 129, 0, 255} }},
	{{ {2145, 235, -73}, 0, {-16, 268}, {0, 0, 129, 255} }},
	{{ {2913, 235, -73}, 0, {-16, 447}, {16, 0, 130, 255} }},
	{{ {2916, 323, -16}, 0, {19, 448}, {24, 125, 0, 255} }},
	{{ {2913, 235, 41}, 0, {-16, 447}, {16, 0, 126, 255} }},
	{{ {2916, 148, -16}, 0, {19, 448}, {24, 131, 0, 255} }},
	{{ {3118, 235, -16}, 0, {-11, 496}, {127, 0, 0, 255} }},
};

Gfx gVentusGildedBladeDL_mesh_gVentusGildedBladeDL_mesh_mesh_layer_Opaque_tri_0[] = {
	gsSPVertex(gVentusGildedBladeDL_mesh_gVentusGildedBladeDL_mesh_mesh_layer_Opaque_vtx_0 + 0, 17, 0),
	gsSP2Triangles(0, 1, 2, 0, 3, 2, 1, 0),
	gsSP2Triangles(3, 4, 2, 0, 3, 5, 4, 0),
	gsSP2Triangles(3, 6, 5, 0, 0, 5, 6, 0),
	gsSP2Triangles(0, 7, 5, 0, 0, 2, 7, 0),
	gsSP2Triangles(7, 2, 8, 0, 4, 8, 2, 0),
	gsSP2Triangles(4, 9, 8, 0, 4, 10, 9, 0),
	gsSP2Triangles(4, 5, 10, 0, 7, 10, 5, 0),
	gsSP2Triangles(7, 11, 10, 0, 7, 8, 11, 0),
	gsSP2Triangles(8, 12, 11, 0, 8, 13, 12, 0),
	gsSP2Triangles(8, 14, 13, 0, 8, 9, 14, 0),
	gsSP2Triangles(10, 14, 9, 0, 10, 15, 14, 0),
	gsSP2Triangles(10, 12, 15, 0, 10, 11, 12, 0),
	gsSP2Triangles(16, 15, 12, 0, 16, 14, 15, 0),
	gsSP2Triangles(16, 13, 14, 0, 16, 12, 13, 0),
	gsSPEndDisplayList(),
};

Gfx mat_gVentusGildedBladeDL_mesh_f3dlite_material_076_layerOpaque[] = {
	gsSPLoadGeometryMode(G_FOG | G_ZBUFFER | G_SHADING_SMOOTH | G_SHADE | G_LIGHTING | G_CULL_BACK),
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
	gsSPSetOtherMode(G_SETOTHERMODE_H, 4, 20, G_CK_NONE | G_CYC_2CYCLE | G_TP_PERSP | G_TL_TILE | G_TC_FILT | G_AD_NOISE | G_TF_BILERP | G_CD_MAGICSQ | G_TT_RGBA16 | G_PM_NPRIMITIVE | G_TD_CLAMP),
	gsSPSetOtherMode(G_SETOTHERMODE_L, 0, 32, G_RM_AA_ZB_OPA_SURF2 | G_ZS_PIXEL | G_AC_NONE | G_RM_FOG_SHADE_A),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, gVentusGildedBladeDL_mesh_SWMSBS3TC_pal_rgba16),
	gsDPSetTile(0, 0, 0, 256, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadTLUTCmd(5, 1),
	gsDPSetTextureImage(G_IM_FMT_CI, G_IM_SIZ_16b, 1, gVentusGildedBladeDL_mesh_SWMSBS3TC_ci4),
	gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_16b, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 63, 2048),
	gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_4b, 1, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 4, 0, G_TX_WRAP | G_TX_NOMIRROR, 4, 0),
	gsDPSetTileSize(0, 0, 0, 60, 60),
	gsSPEndDisplayList(),
};

Gfx mat_revert_gVentusGildedBladeDL_mesh_f3dlite_material_076_layerOpaque[] = {
	gsDPPipeSync(),
	gsSPSetOtherMode(G_SETOTHERMODE_L, 0, 32, G_RM_AA_ZB_OPA_SURF2 | G_ZS_PIXEL | G_RM_AA_ZB_OPA_SURF | G_AC_NONE),
	gsSPEndDisplayList(),
};

Gfx gVentusGildedBladeDL_mesh[] = {
	gsSPClearGeometryMode(G_LIGHTING),
	gsSPVertex(gVentusGildedBladeDL_mesh_gVentusGildedBladeDL_mesh_mesh_layer_Opaque_vtx_cull + 0, 8, 0),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPCullDisplayList(0, 7),
	gsSPDisplayList(mat_gVentusGildedBladeDL_mesh_f3dlite_material_076_layerOpaque),
	gsSPDisplayList(gVentusGildedBladeDL_mesh_gVentusGildedBladeDL_mesh_mesh_layer_Opaque_tri_0),
	gsSPDisplayList(mat_revert_gVentusGildedBladeDL_mesh_f3dlite_material_076_layerOpaque),
	gsSPEndDisplayList(),
};

