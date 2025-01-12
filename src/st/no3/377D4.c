#include "stage.h"

extern ObjectInit *g_pStObjLayout[];
extern u8 *D_80180850;
extern u16 D_80180AAC[];
extern u8 *D_80180E50[];
extern u8 D_80180E70[];
extern u8 D_80180E78[];
extern u16 D_80180E80[];
extern u8 D_80180E90[];
extern PfnEntityUpdate PfnEntityUpdates[];
extern s16 D_801820C4[];

extern ObjectInit *D_801D7110;
extern ObjectInit *D_801D7114;
extern s8 D_801D7118;
extern s8 D_801D711C;

void SpawnExplosionEntity(u16, Entity *);
void ReplaceCandleWithDrop(Entity *);
void EntityCandleDrop(Entity *);
void EntityCandleHeartDrop(Entity *);

INCLUDE_ASM("asm/st/no3/nonmatchings/377D4", func_801B77D4);

INCLUDE_ASM("asm/st/no3/nonmatchings/377D4", func_801B78A8);

#ifndef NON_MATCHING
INCLUDE_ASM("asm/st/no3/nonmatchings/377D4", EntityCandle);
#else
void EntityCandle(Entity *entity) {
    u16 temp_s0 = entity->subId >> 0xC;
    if (entity->initState) {
        AnimateEntity(D_80180E50[temp_s0], entity);
        if (entity->unk44) { // If the candle is destroyed
            Entity *entityDropItem;
            g_pfnPlaySfx(0x634);
            entityDropItem =
                AllocEntity(D_8007D858, D_8007D858 + MaxEntityCount);
            if (entityDropItem != NULL) {
                SpawnExplosionEntity(EntityExplosionID, entityDropItem);
                entityDropItem->subId = D_80180E78[temp_s0];
            }
            ReplaceCandleWithDrop(entity);
        }
    } else {
        InitializeEntity(D_80180AAC);
        entity->zPriority = D_80097408 - 0x14;
        entity->unk18 = D_80180E90[temp_s0];
        entity->hitboxHeight = D_80180E70[temp_s0];
        entity->animationSet = D_80180E80[temp_s0];
    }
}
#endif

INCLUDE_ASM("asm/st/no3/nonmatchings/377D4", func_801B7B98);

INCLUDE_ASM("asm/st/no3/nonmatchings/377D4", func_801B7C4C);

INCLUDE_ASM("asm/st/no3/nonmatchings/377D4", func_801B8254);

INCLUDE_ASM("asm/st/no3/nonmatchings/377D4", func_801B8564);

INCLUDE_ASM("asm/st/no3/nonmatchings/377D4", func_801B8A74);

INCLUDE_ASM("asm/st/no3/nonmatchings/377D4", func_801B8ED0);

INCLUDE_ASM("asm/st/no3/nonmatchings/377D4", func_801B9198);

INCLUDE_ASM("asm/st/no3/nonmatchings/377D4", func_801B94F0);

INCLUDE_ASM("asm/st/no3/nonmatchings/377D4", func_801B9650);

INCLUDE_ASM("asm/st/no3/nonmatchings/377D4", func_801B97D0);

INCLUDE_ASM("asm/st/no3/nonmatchings/377D4", func_801B989C);

INCLUDE_ASM("asm/st/no3/nonmatchings/377D4", func_801B9C44);

INCLUDE_ASM("asm/st/no3/nonmatchings/377D4", func_801B9CE8);

INCLUDE_ASM("asm/st/no3/nonmatchings/377D4", func_801B9E10);

INCLUDE_ASM("asm/st/no3/nonmatchings/377D4", func_801BA0A0);

INCLUDE_ASM("asm/st/no3/nonmatchings/377D4", func_801BA348);

INCLUDE_ASM("asm/st/no3/nonmatchings/377D4", func_801BA4C0);

INCLUDE_ASM("asm/st/no3/nonmatchings/377D4", func_801BA868);

INCLUDE_ASM("asm/st/no3/nonmatchings/377D4", func_801BABE8);

INCLUDE_ASM("asm/st/no3/nonmatchings/377D4", func_801BAD6C);

INCLUDE_ASM("asm/st/no3/nonmatchings/377D4", func_801BAEF0);

INCLUDE_ASM("asm/st/no3/nonmatchings/377D4", func_801BB3BC);

INCLUDE_ASM("asm/st/no3/nonmatchings/377D4", func_801BB548);

INCLUDE_ASM("asm/st/no3/nonmatchings/377D4", func_801BBB8C);

INCLUDE_ASM("asm/st/no3/nonmatchings/377D4", func_801BBDC0);

INCLUDE_ASM("asm/st/no3/nonmatchings/377D4", func_801BBE70);

INCLUDE_ASM("asm/st/no3/nonmatchings/377D4", func_801BBF38);

INCLUDE_ASM("asm/st/no3/nonmatchings/377D4", func_801BC05C);

INCLUDE_ASM("asm/st/no3/nonmatchings/377D4", func_801BC3FC);

INCLUDE_ASM("asm/st/no3/nonmatchings/377D4", func_801BC4EC);

INCLUDE_ASM("asm/st/no3/nonmatchings/377D4", func_801BC780);

INCLUDE_ASM("asm/st/no3/nonmatchings/377D4", func_801BC93C);

INCLUDE_ASM("asm/st/no3/nonmatchings/377D4", func_801BCC4C);

INCLUDE_ASM("asm/st/no3/nonmatchings/377D4", func_801BCE08);

INCLUDE_ASM("asm/st/no3/nonmatchings/377D4", func_801BD564);

INCLUDE_ASM("asm/st/no3/nonmatchings/377D4", func_801BD71C);

INCLUDE_ASM("asm/st/no3/nonmatchings/377D4", func_801BDEB0);

INCLUDE_ASM("asm/st/no3/nonmatchings/377D4", func_801BE080);

INCLUDE_ASM("asm/st/no3/nonmatchings/377D4", func_801BE134);

INCLUDE_ASM("asm/st/no3/nonmatchings/377D4", func_801BE444);

INCLUDE_ASM("asm/st/no3/nonmatchings/377D4", func_801BE544);

INCLUDE_ASM("asm/st/no3/nonmatchings/377D4", func_801BE598);

INCLUDE_ASM("asm/st/no3/nonmatchings/377D4", func_801BE75C);

INCLUDE_ASM("asm/st/no3/nonmatchings/377D4", func_801BE7BC);

INCLUDE_ASM("asm/st/no3/nonmatchings/377D4", func_801BE870);

INCLUDE_ASM("asm/st/no3/nonmatchings/377D4", func_801BE9F4);

INCLUDE_ASM("asm/st/no3/nonmatchings/377D4", func_801BEA20);

INCLUDE_ASM("asm/st/no3/nonmatchings/377D4", func_801BECCC);

INCLUDE_ASM("asm/st/no3/nonmatchings/377D4", func_801BEDAC);

INCLUDE_ASM("asm/st/no3/nonmatchings/377D4", func_801BEEB0);

INCLUDE_ASM("asm/st/no3/nonmatchings/377D4", func_801BFF00);

INCLUDE_ASM("asm/st/no3/nonmatchings/377D4", func_801C033C);

INCLUDE_ASM("asm/st/no3/nonmatchings/377D4", func_801C083C);

INCLUDE_ASM("asm/st/no3/nonmatchings/377D4", func_801C11A4);

INCLUDE_ASM("asm/st/no3/nonmatchings/377D4", func_801C12E8);

INCLUDE_ASM("asm/st/no3/nonmatchings/377D4", func_801C13F8);

INCLUDE_ASM("asm/st/no3/nonmatchings/377D4", func_801C14B8);

INCLUDE_ASM("asm/st/no3/nonmatchings/377D4", Random);

INCLUDE_ASM("asm/st/no3/nonmatchings/377D4", UpdateStageEntities);

INCLUDE_ASM("asm/st/no3/nonmatchings/377D4", func_801C1B78);

INCLUDE_ASM("asm/st/no3/nonmatchings/377D4", func_801C1C80);

INCLUDE_ASM("asm/st/no3/nonmatchings/377D4", EntityDamage);

#ifndef NON_MATCHING
INCLUDE_ASM("asm/st/no3/nonmatchings/377D4", CreateEntity);
#else
void CreateEntity(Entity *entity, ObjectInit *initDesc) {
    DestroyEntity(entity);
    entity->objectId = initDesc->flags & 0x3FF;
    entity->pfnUpdate = PfnEntityUpdates[entity->objectId];
    entity->posX.Data.high = initDesc->posX - D_8007308E;
    entity->posY.Data.high = initDesc->posY - D_80073092;
    entity->subId = initDesc->unk8;
    entity->unk32 = initDesc->unk6 >> 8;
    entity->unk68 = initDesc->flags >> 0xA & 7;
}
#endif

INCLUDE_ASM("asm/st/no3/nonmatchings/377D4", func_801C3500);

INCLUDE_ASM("asm/st/no3/nonmatchings/377D4", func_801C3618);

void func_801C3730(s32 arg0) {
    s32 a1 = 0xFFFE;
    arg0 = (s16)arg0;
loop_1:
    if (D_801D7110->posX == a1 || D_801D7110->posX < arg0) {
        D_801D7110++;
        goto loop_1;
    }
}

void func_801C377C(s32 arg0) {
    s32 a2, a3;
    a3 = 0xFFFF;
    arg0 = (s16)arg0;
    a2 = 0xFFFE;
loop_1:
    if (D_801D7110->posX == a3 ||
        (arg0 < D_801D7110->posX) && (D_801D7110->posX != a2)) {
        D_801D7110--;
        goto loop_1;
    }
}

INCLUDE_ASM("asm/st/no3/nonmatchings/377D4", func_801C37D4);

INCLUDE_ASM("asm/st/no3/nonmatchings/377D4", func_801C38D0);

void func_801C39E4(s32 arg0) {
    s32 a1 = 0xFFFE;
    arg0 = (s16)arg0;
loop_1:
    if (D_801D7114->posY == a1 || D_801D7114->posY < arg0) {
        D_801D7114++;
        goto loop_1;
    }
}
void func_801C3A30(s32 arg0) {
    while (true) {
        if (D_801D7114->posY == 0xFFFF)
            D_801D7114--;
        else if ((s16)arg0 >= D_801D7114->posY || D_801D7114->posY == 0xFFFE)
            break;
        else
            D_801D7114--;
    }
}

INCLUDE_ASM("asm/st/no3/nonmatchings/377D4", func_801C3A88);

INCLUDE_ASM("asm/st/no3/nonmatchings/377D4", func_801C3B84);

#ifndef NON_MATCHING
INCLUDE_ASM("asm/st/no3/nonmatchings/377D4", LoadObjLayout);
#else
void LoadObjLayout(s32 objLayoutId) {
    s16 temp_s0;
    s16 var_a1_2;
    u16 temp_v1_2;
    u16 *pObjLayoutStart;
    Unkstruct8 *layout;

    pObjLayoutStart = g_pStObjLayout[objLayoutId];
    layout = &g_CurrentRoomTileLayout;
    D_801D7110 = pObjLayoutStart;
    D_801D7114 = *(&D_80180850 + objLayoutId);
    if (*pObjLayoutStart != 0xFFFE) {
        s32 var_a0;
        s16 var_a1;
        u16 *temp_v1;

        D_801D7110 = pObjLayoutStart + 1;
        var_a0 = Random() & 0xFF;

        for (var_a1 = 0;; var_a1++) {
            s32 temp_v0;
            temp_v1 = D_801D7110;
            D_801D7110 = (u16 *)D_801D7110 + 1;
            temp_v0 = var_a0 - temp_v1[0];
            var_a0 = temp_v0;
            if ((s16)temp_v0 < 0)
                break;
            D_801D7110 = temp_v1 + 3;
        }

        D_801D7110 = (temp_v1[2] << 0x10) + temp_v1[1];
        D_801D7114 = (var_a1 * 2) + 2 + (u16 *)D_801D7114;
        D_801D7114 = (((u16 *)D_801D7114)[1] << 0x10) + ((u16 *)D_801D7114)[0];
    }

    var_a1_2 = (s16)layout->unkA - 0x40;
    temp_s0 = layout->unkA + 0x140;
    if (var_a1_2 < 0) {
        var_a1_2 = 0;
    }
    D_801D7118 = 0;
    D_801D711C = 0;
    func_801C3730(var_a1_2);
    func_801C37D4(temp_s0);
    func_801C39E4((s16)(layout->unkE + 0x120));
}
#endif

INCLUDE_ASM("asm/st/no3/nonmatchings/377D4", func_801C3E10);

INCLUDE_ASM("asm/st/no3/nonmatchings/377D4", SpawnExplosionEntity);

INCLUDE_ASM("asm/st/no3/nonmatchings/377D4", func_801C3F38);

INCLUDE_ASM("asm/st/no3/nonmatchings/377D4", func_801C3FB4);

INCLUDE_ASM("asm/st/no3/nonmatchings/377D4", func_801C402C);

void DestroyEntity(Entity *item) {
    int i, length;
    u32 *ptr;

    if (item->unk34 & 0x800000) {
        g_pfnFreePolygons(item->firstPolygonIndex);
    }

    ptr = item;
    length = sizeof(Entity) / sizeof(s32);
    for (i = 0; i < length; i++)
        *ptr++ = 0;
}

void DestroyEntityFromIndex(s16 index) {
    Entity *entity = &D_800733D8[index];
    while (entity < &D_8007EF1C) {
        DestroyEntity(entity);
        entity++;
    }
}

INCLUDE_ASM("asm/st/no3/nonmatchings/377D4", func_801C4D4C);

#include "st/AnimateEntity.h"

INCLUDE_ASM("asm/st/no3/nonmatchings/377D4", func_801C4E4C);

INCLUDE_ASM("asm/st/no3/nonmatchings/377D4", func_801C4F64);

INCLUDE_ASM("asm/st/no3/nonmatchings/377D4", func_801C4FA0);

INCLUDE_ASM("asm/st/no3/nonmatchings/377D4", func_801C4FD4);

void MoveEntity(void) {
    D_8006C3B8->posX.value += D_8006C3B8->accelerationX;
    D_8006C3B8->posY.value += D_8006C3B8->accelerationY;
}

void FallEntity(void) {
    if (D_8006C3B8->accelerationY < FALL_TERMINAL_VELOCITY) {
        D_8006C3B8->accelerationY += FALL_GRAVITY;
    }
}

INCLUDE_ASM("asm/st/no3/nonmatchings/377D4", func_801C5074);

INCLUDE_ASM("asm/st/no3/nonmatchings/377D4", func_801C52EC);

Entity *AllocEntity(Entity *start, Entity *end) {
    Entity *current = start;
    while (current < end) {
        if (current->objectId == 0) {
            DestroyEntity(current);
            return current;
        }

        current++;
    }
    return NULL;
}

INCLUDE_ASM("asm/st/no3/nonmatchings/377D4", func_801C5534);

#ifndef NON_MATCHING
INCLUDE_ASM("asm/st/no3/nonmatchings/377D4", func_801C5560);
#else
s16 func_801C5560(s32 arg0) { return D_801820C4[arg0 & 0xFF]; }
#endif

INCLUDE_ASM("asm/st/no3/nonmatchings/377D4", func_801C557C);

INCLUDE_ASM("asm/st/no3/nonmatchings/377D4", func_801C55E8);

INCLUDE_ASM("asm/st/no3/nonmatchings/377D4", func_801C5620);

INCLUDE_ASM("asm/st/no3/nonmatchings/377D4", func_801C5668);

INCLUDE_ASM("asm/st/no3/nonmatchings/377D4", func_801C56B0);

INCLUDE_ASM("asm/st/no3/nonmatchings/377D4", func_801C5708);

INCLUDE_ASM("asm/st/no3/nonmatchings/377D4", func_801C5794);

INCLUDE_ASM("asm/st/no3/nonmatchings/377D4", func_801C57C4);

INCLUDE_ASM("asm/st/no3/nonmatchings/377D4", func_801C57FC);

INCLUDE_ASM("asm/st/no3/nonmatchings/377D4", func_801C5844);

void func_801C58A4(u8 state) {
    D_8006C3B8->initState = state;
    D_8006C3B8->unk2E = 0;
    D_8006C3B8->animationFrameIndex = 0;
    D_8006C3B8->animationFrameDuration = 0;
}

void func_801C58C4(u8 state) {
    D_8006C3B8->unk2E = state;
    D_8006C3B8->animationFrameIndex = 0;
    D_8006C3B8->animationFrameDuration = 0;
}

INCLUDE_ASM("asm/st/no3/nonmatchings/377D4", func_801C58E0);

void InitializeEntity(u16 *arg0) {
    u16 temp_v1;
    Unkstruct5 *temp_v0;

    D_8006C3B8->animationSet = *arg0++;
    D_8006C3B8->animationFrame = *arg0++;
    D_8006C3B8->unk5A = *arg0++;
    D_8006C3B8->palette = *arg0++;
    temp_v1 = *arg0++;
    D_8006C3B8->unk3A = temp_v1;
    temp_v0 = temp_v1 * sizeof(Unkstruct5) + (u32)D_8003C808;
    D_8006C3B8->unk3E = temp_v0->unk4;
    D_8006C3B8->unk40 = temp_v0->unk6;
    D_8006C3B8->unk42 = temp_v0->unk8;
    D_8006C3B8->unk3C = temp_v0->unkC;
    D_8006C3B8->hitboxWidth = temp_v0->hitboxWidth;
    D_8006C3B8->hitboxHeight = temp_v0->hitboxHeight;
    D_8006C3B8->unk34 = temp_v0->unk24;
    D_8006C3B8->unk10 = 0;
    D_8006C3B8->unk12 = 0;
    D_8006C3B8->unk2E = 0;
    D_8006C3B8->initState++;
    if (D_8006C3B8->zPriority == 0) {
        D_8006C3B8->zPriority = D_80097408 - 0xC;
    }
}

void func_801C5A70(Entity *arg0) {
    if (arg0->initState == 0) {
        arg0->initState++;
    }
}

INCLUDE_ASM("asm/st/no3/nonmatchings/377D4", func_801C5A98);

INCLUDE_ASM("asm/st/no3/nonmatchings/377D4", func_801C5BC0);

INCLUDE_ASM("asm/st/no3/nonmatchings/377D4", func_801C5D18);

#ifndef NON_MATCHING
INCLUDE_ASM("asm/st/no3/nonmatchings/377D4", ReplaceCandleWithDrop);
#else
extern u8 D_8009796E;
void ReplaceCandleWithDrop(Entity *entity) {
    u16 prevSubId;
    u16 subId;
    u16 newSubId;

    func_801C4D4C(entity);
    if ((D_8009796E & 2) == 0) {
        DestroyEntity(entity);
        return;
    }

    prevSubId = entity->subId;
    subId = prevSubId & 0xFFF;
    entity->subId = subId;
    if (prevSubId < 0x80) {
        entity->objectId = EntityCandleDropID;
        entity->pfnUpdate = EntityCandleDrop;
        entity->animationFrameDuration = 0;
        entity->animationFrameIndex = 0;
        newSubId = subId;
    } else {
        entity->objectId = EntityCandleHeartDropID;
        entity->pfnUpdate = EntityCandleHeartDrop;
        newSubId = subId - 0x80;
    }
    entity->subId = newSubId;
    entity->unk6D = 0x10;
    entity->initState = 0;
}
#endif

INCLUDE_ASM("asm/st/no3/nonmatchings/377D4", func_801C6114);

INCLUDE_ASM("asm/st/no3/nonmatchings/377D4", func_801C6198);

INCLUDE_ASM("asm/st/no3/nonmatchings/377D4", func_801C62F4);

INCLUDE_ASM("asm/st/no3/nonmatchings/377D4", func_801C6374);

INCLUDE_ASM("asm/st/no3/nonmatchings/377D4", func_801C6450);

INCLUDE_ASM("asm/st/no3/nonmatchings/377D4", func_801C6568);

INCLUDE_ASM("asm/st/no3/nonmatchings/377D4", func_801C660C);

void func_801C665C(void) { DestroyEntity(D_8006C3B8); }

INCLUDE_ASM("asm/st/no3/nonmatchings/377D4", EntityCandleDrop);

INCLUDE_ASM("asm/st/no3/nonmatchings/377D4", func_801C6EF8);

INCLUDE_ASM("asm/st/no3/nonmatchings/377D4", func_801C6FF4);

INCLUDE_ASM("asm/st/no3/nonmatchings/377D4", EntityCandleHeartDrop);

INCLUDE_ASM("asm/st/no3/nonmatchings/377D4", func_801C7680);

INCLUDE_ASM("asm/st/no3/nonmatchings/377D4", func_801C7930);

INCLUDE_ASM("asm/st/no3/nonmatchings/377D4", func_801C8400);

INCLUDE_ASM("asm/st/no3/nonmatchings/377D4", func_801C8528);

INCLUDE_ASM("asm/st/no3/nonmatchings/377D4", func_801C8A84);

INCLUDE_ASM("asm/st/no3/nonmatchings/377D4", func_801C8B74);

INCLUDE_ASM("asm/st/no3/nonmatchings/377D4", func_801C8C84);

INCLUDE_ASM("asm/st/no3/nonmatchings/377D4", func_801C8DB4);

INCLUDE_ASM("asm/st/no3/nonmatchings/377D4", func_801C8E9C);

INCLUDE_ASM("asm/st/no3/nonmatchings/377D4", func_801C8F8C);

INCLUDE_ASM("asm/st/no3/nonmatchings/377D4", func_801C9080);

bool func_801C92B0(Unkstruct6 *unk) {
    Unkstruct7 a;

    FallEntity();
    D_8006C3B8->posX.value += D_8006C3B8->accelerationX;
    D_8006C3B8->posY.value += D_8006C3B8->accelerationY;

    if (D_8006C3B8->accelerationY >= 0) {
        s16 posX = D_8006C3B8->posX.Data.high;
        s16 posY = D_8006C3B8->posY.Data.high;
        posX += unk->x;
        posY += unk->y;
        D_8003C7BC(posX, posY, &a, 0);
        if (a.sp10 & 1) {
            D_8006C3B8->posY.Data.high += a.sp28;
            D_8006C3B8->accelerationY = -D_8006C3B8->accelerationY / 2;
            if (D_8006C3B8->accelerationY > -0x10000) {
                return true;
            }
        }
    }
    return false;
}

INCLUDE_ASM("asm/st/no3/nonmatchings/377D4", func_801C93AC);

INCLUDE_ASM("asm/st/no3/nonmatchings/377D4", func_801C992C);

INCLUDE_ASM("asm/st/no3/nonmatchings/377D4", func_801C9A2C);

INCLUDE_ASM("asm/st/no3/nonmatchings/377D4", func_801C9AF8);

INCLUDE_ASM("asm/st/no3/nonmatchings/377D4", func_801C9BC0);

INCLUDE_ASM("asm/st/no3/nonmatchings/377D4", func_801C9C78);

INCLUDE_ASM("asm/st/no3/nonmatchings/377D4", func_801C9E50);

INCLUDE_ASM("asm/st/no3/nonmatchings/377D4", func_801CA430);

INCLUDE_ASM("asm/st/no3/nonmatchings/377D4", func_801CAB30);

INCLUDE_ASM("asm/st/no3/nonmatchings/377D4", func_801CAD28);

INCLUDE_ASM("asm/st/no3/nonmatchings/377D4", func_801CAE20);

INCLUDE_ASM("asm/st/no3/nonmatchings/377D4", EntityAreaTitlePopup);

INCLUDE_ASM("asm/st/no3/nonmatchings/377D4", EntityAbsorbOrb);

INCLUDE_ASM("asm/st/no3/nonmatchings/377D4", func_801CC008);

INCLUDE_ASM("asm/st/no3/nonmatchings/377D4", func_801CC4B8);

INCLUDE_ASM("asm/st/no3/nonmatchings/377D4", func_801CC5A4);

INCLUDE_ASM("asm/st/no3/nonmatchings/377D4", func_801CC6F8);

INCLUDE_ASM("asm/st/no3/nonmatchings/377D4", func_801CC820);

INCLUDE_ASM("asm/st/no3/nonmatchings/377D4", func_801CC90C);

INCLUDE_ASM("asm/st/no3/nonmatchings/377D4", func_801CC974);

INCLUDE_ASM("asm/st/no3/nonmatchings/377D4", func_801CDD80);

INCLUDE_ASM("asm/st/no3/nonmatchings/377D4", func_801CDF10);

INCLUDE_ASM("asm/st/no3/nonmatchings/377D4", func_801CE2F4);

INCLUDE_ASM("asm/st/no3/nonmatchings/377D4", func_801CE740);

INCLUDE_ASM("asm/st/no3/nonmatchings/377D4", func_801CE98C);

INCLUDE_ASM("asm/st/no3/nonmatchings/377D4", func_801CED60);

INCLUDE_ASM("asm/st/no3/nonmatchings/377D4", func_801CEF88);

INCLUDE_ASM("asm/st/no3/nonmatchings/377D4", func_801CF438);

INCLUDE_ASM("asm/st/no3/nonmatchings/377D4", func_801CF58C);

INCLUDE_ASM("asm/st/no3/nonmatchings/377D4", func_801CF5E0);

INCLUDE_ASM("asm/st/no3/nonmatchings/377D4", func_801CF6D8);

INCLUDE_ASM("asm/st/no3/nonmatchings/377D4", EntityWarg);

INCLUDE_ASM("asm/st/no3/nonmatchings/377D4", func_801D04A4);

INCLUDE_ASM("asm/st/no3/nonmatchings/377D4", func_801D0624);

INCLUDE_ASM("asm/st/no3/nonmatchings/377D4", func_801D06FC);

INCLUDE_ASM("asm/st/no3/nonmatchings/377D4", func_801D0A2C);

INCLUDE_ASM("asm/st/no3/nonmatchings/377D4", func_801D0B34);

INCLUDE_ASM("asm/st/no3/nonmatchings/377D4", func_801D16B4);

INCLUDE_ASM("asm/st/no3/nonmatchings/377D4", func_801D1FC0);

INCLUDE_ASM("asm/st/no3/nonmatchings/377D4", func_801D24AC);

INCLUDE_ASM("asm/st/no3/nonmatchings/377D4", func_801D2840);

INCLUDE_ASM("asm/st/no3/nonmatchings/377D4", func_801D2A9C);

INCLUDE_ASM("asm/st/no3/nonmatchings/377D4", func_801D2D40);

INCLUDE_ASM("asm/st/no3/nonmatchings/377D4", func_801D2E4C);

INCLUDE_ASM("asm/st/no3/nonmatchings/377D4", func_801D3F38);

INCLUDE_ASM("asm/st/no3/nonmatchings/377D4", func_801D4168);

INCLUDE_ASM("asm/st/no3/nonmatchings/377D4", func_801D423C);

INCLUDE_ASM("asm/st/no3/nonmatchings/377D4", func_801D4668);

INCLUDE_ASM("asm/st/no3/nonmatchings/377D4", func_801D4700);

INCLUDE_ASM("asm/st/no3/nonmatchings/377D4", func_801D48F8);

INCLUDE_ASM("asm/st/no3/nonmatchings/377D4", EntityMerman2);

INCLUDE_ASM("asm/st/no3/nonmatchings/377D4", EntityMerman);

INCLUDE_ASM("asm/st/no3/nonmatchings/377D4", func_801D56D8);

INCLUDE_ASM("asm/st/no3/nonmatchings/377D4", func_801D583C);

INCLUDE_ASM("asm/st/no3/nonmatchings/377D4", func_801D58D4);

INCLUDE_ASM("asm/st/no3/nonmatchings/377D4", func_801D59D0);

INCLUDE_ASM("asm/st/no3/nonmatchings/377D4", EntityBoneScimitar);

INCLUDE_ASM("asm/st/no3/nonmatchings/377D4", func_801D615C);

INCLUDE_ASM("asm/st/no3/nonmatchings/377D4", EntityBat);

INCLUDE_ASM("asm/st/no3/nonmatchings/377D4", EntityZombie);

INCLUDE_ASM("asm/st/no3/nonmatchings/377D4", func_801D6710);

INCLUDE_ASM("asm/st/no3/nonmatchings/377D4", func_801D6880);

INCLUDE_ASM("asm/st/no3/nonmatchings/377D4", func_801D6C68);

INCLUDE_ASM("asm/st/no3/nonmatchings/377D4", func_801D6DB8);

INCLUDE_ASM("asm/st/no3/nonmatchings/377D4", func_801D6DE8);

POLY_GT4 *func_801D6E64(POLY_GT4 *startPoly, s32 count) {
    POLY_GT4 *poly;
    s8 unk;
    s32 i;

    if (startPoly->p3) {
        startPoly->p3 = 0;
    } else {
        startPoly->p3 = 1;
    }

    poly = startPoly;
    for (i = 0; i < count; i++) {
        if (poly->p3) {
            poly->pad3 &= ~8;
            unk = 0;
        } else {
            poly->pad3 |= 8;
            unk = 1;
        }

        poly = poly->tag;
        if (poly == 0)
            return 0;
        poly->p3 = unk;
    }

    return poly;
}

void func_801D6EEC(POLY_GT4 *arg0) {
    arg0->p1 = 0;
    arg0->p2 = 0;
    arg0->p3 = 0;
    ((POLY_GT4 *)arg0->tag)->x1 = 0;
    ((POLY_GT4 *)arg0->tag)->y1 = 0;
    ((POLY_GT4 *)arg0->tag)->y0 = 0;
    ((POLY_GT4 *)arg0->tag)->x0 = 0;
    ((POLY_GT4 *)arg0->tag)->clut = 0;
    *(u16 *)&((POLY_GT4 *)arg0->tag)->u0 = 0;
    *(u16 *)&((POLY_GT4 *)arg0->tag)->b1 = 0;
    *(u16 *)&((POLY_GT4 *)arg0->tag)->r1 = 0;
    *(u16 *)&((POLY_GT4 *)arg0->tag)->u1 = 0;
    ((POLY_GT4 *)arg0->tag)->tpage = 0;
    *(u16 *)&((POLY_GT4 *)arg0->tag)->r2 = 0;
    *(u16 *)&((POLY_GT4 *)arg0->tag)->b2 = 0;
    ((POLY_GT4 *)arg0->tag)->u2 = 0;
    ((POLY_GT4 *)arg0->tag)->v2 = 0;
    ((POLY_GT4 *)arg0->tag)->r3 = 0;
    ((POLY_GT4 *)arg0->tag)->b3 = 0;
    ((POLY_GT4 *)arg0->tag)->x2 = 0;
    ((POLY_GT4 *)arg0->tag)->y2 = 0;
}

void func_801D6FCC(POLY_GT4 *arg0) {
    func_801D6EEC(arg0);
    arg0->p3 = 8;
    ((POLY_GT4 *)arg0->tag)->p3 = 1;
    ((POLY_GT4 *)arg0->tag)->code = 2;
    ((POLY_GT4 *)arg0->tag)->pad3 = 0xA;
}

void func_801D7020(POLY_GT4 *arg0) {
    arg0->p3 = 0;
    arg0->pad3 = 8;
    ((POLY_GT4 *)arg0->tag)->p3 = 0;
    ((POLY_GT4 *)arg0->tag)->code = 4;
    ((POLY_GT4 *)arg0->tag)->pad3 = 8;
}

INCLUDE_ASM("asm/st/no3/nonmatchings/377D4", func_801D704C);
