/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Snitch.SnitchItemView$$PlayOutOfBottleHitPathCatMullRom
DG_Tweening_Tween_o* Modules_Contexts_GamePlay_Board_Items_Scripts_Snitch_SnitchItemView__PlayOutOfBottleHitPathCatMullRom (Modules_Contexts_GamePlay_Board_Items_Scripts_Snitch_SnitchItemView_o* __this, UnityEngine_Vector3_o targetPosition, Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* belongingBottle, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP:
   Modules.Contexts.GamePlay.Board.Items.Scripts.Snitch.SnitchItemView$$PlayOutOfBottleHitPathCatMullRom
   DG_Tweening_Tween_o*
   Modules_Contexts_GamePlay_Board_Items_Scripts_Snitch_SnitchItemView__PlayOutOfBottleHitPathCatMullRom
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Snitch_SnitchItemView_o* __this,
   UnityEngine_Vector3_o targetPosition,
   Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* belongingBottle, const
   MethodInfo* method); */

void Modules_Contexts_GamePlay_Board_Items_Scripts_Snitch_SnitchItemView__PlayOutOfBottleHitPathCatMullRom_261218c
               (float param_1,float param_2,float param_3,long param_4,long param_5)

{
  uint uVar1;
  undefined *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined4 uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  
  fVar16 = param_2;
  fVar15 = param_3;
  if ((bRam0000000005c2ba0b & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575a2d8);
    FUN_012d0dc8(PTR_DAT_057dc5e0);
    FUN_012d0dc8(PTR_DAT_057ccae0);
    FUN_012d0dc8(PTR_DAT_057f76e8);
    FUN_012d0dc8(PTR_DAT_058030a8);
    bRam0000000005c2ba0b = 1;
  }
  if ((param_5 != 0) &&
     (plVar3 = (long *)Modules_Infrastructure_Common_Scripts_Component_AItem__get_Root_40e9cf4
                                 (param_5,0), plVar3 != (long *)0x0)) {
    lVar6 = *plVar3;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12a);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_0575a2d8) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_02712278;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_0131971c(plVar3,*(long *)PTR_DAT_0575a2d8,0);
LAB_02712278:
    fVar9 = (float)(*(code *)*puVar4)(plVar3,puVar4[1]);
    if (*(long *)(param_4 + 0x38) != 0) {
      fVar11 = *(float *)(*(long *)(param_4 + 0x38) + 0x308);
      if (cRam0000000005c230ac == '\0') {
        FUN_012d0dc8(PTR_DAT_05805c10);
        cRam0000000005c230ac = '\x01';
      }
      puVar2 = PTR_DAT_05805c10;
      lVar6 = *(long *)(*(long *)PTR_DAT_05805c10 + 0xb8);
                    /* try { // try from 027122e0 to 02812333 has its CatchHandler @ 027122e0
                       catch() { ... } // from try @ 027122e0 with catch @ 027122e0
                       catch() { ... } // from try @ 02712398 with catch @ 027122e0
                       catch() { ... } // from try @ 027123c8 with catch @ 027122e0
                       catch() { ... } // from try @ 02712444 with catch @ 027122e0 */
      fVar9 = fVar9 + fVar11 * *(float *)(lVar6 + 0x18);
      fVar16 = fVar16 + fVar11 * *(float *)(lVar6 + 0x1c);
      fVar15 = fVar15 + fVar11 * *(float *)(lVar6 + 0x20);
      if (cRam0000000005c2597e == '\0') {
        FUN_012d0dc8(PTR_DAT_057d6f00);
        cRam0000000005c2597e = '\x01';
      }
      fVar14 = param_1 - fVar9;
      fVar11 = param_2 - fVar16;
      if (*(int *)(*(long *)PTR_DAT_057d6f00 + 0xe0) == 0) {
                    /* try { // try from 02712334 to 02812397 has its CatchHandler @ 02712398 */
        thunk_FUN_0130472c();
      }
      fVar10 = SQRT((param_3 - fVar15) * (param_3 - fVar15) + fVar14 * fVar14 + fVar11 * fVar11);
      if (fVar10 <= _UNK_0434cc84) {
        if (cRam0000000005c230aa == '\0') {
          FUN_012d0dc8(PTR_DAT_05805c10);
          cRam0000000005c230aa = '\x01';
        }
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 02712334 with catch @ 02712398
                       try { // try from 02712398 to 028123af has its CatchHandler @ 027122e0 */
        fVar14 = **(float **)(*(long *)puVar2 + 0xb8);
        fVar11 = (*(float **)(*(long *)puVar2 + 0xb8))[1];
      }
      else {
        fVar14 = fVar14 / fVar10;
        fVar11 = fVar11 / fVar10;
      }
      if (*(long *)(param_4 + 0x38) != 0) {
                    /* try { // try from 027123b0 to 028123c7 has its CatchHandler @ 0271243c */
        fVar12 = *(float *)(*(long *)(param_4 + 0x38) + 0x380);
        fVar10 = 1.0;
                    /* try { // try from 027123c8 to 0281242b has its CatchHandler @ 027122e0 */
        if (fVar9 <= param_1) {
          fVar10 = -1.0;
        }
        lVar6 = FUN_012d0e38(*(undefined8 *)PTR_DAT_058030a8,3);
        if (lVar6 != 0) {
          uVar1 = *(uint *)(lVar6 + 0x18);
          if (uVar1 != 0) {
            *(float *)(lVar6 + 0x20) = fVar9;
            *(float *)(lVar6 + 0x24) = fVar16;
            *(float *)(lVar6 + 0x28) = fVar15;
            if (uVar1 != 1) {
                    /* try { // try from 0271242c to 0281243b has its CatchHandler @ 0271243c */
                    /* catch() { ... } // from try @ 027123b0 with catch @ 0271243c
                       catch() { ... } // from try @ 0271242c with catch @ 0271243c */
                    /* try { // try from 02712440 to 02812443 has its CatchHandler @ 0271244c */
              *(float *)(lVar6 + 0x2c) = (param_1 + fVar9) * 0.5 - fVar10 * fVar11 * fVar12;
              *(float *)(lVar6 + 0x30) = (param_2 + fVar16) * 0.5 + fVar10 * fVar14 * fVar12;
                    /* try { // try from 02712444 to 0281244f has its CatchHandler @ 027122e0 */
              *(float *)(lVar6 + 0x34) = (param_3 + fVar15) * 0.5 + fVar10 * fVar12 * 0.0;
              if (2 < uVar1) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 02712440 with catch @ 0271244c
                        */
                    /* try { // try from 02712450 to 0281275f has its CatchHandler @ 02712450
                       catch() { ... } // from try @ 02712450 with catch @ 02712450
                       catch() { ... } // from try @ 02712828 with catch @ 02712450
                       catch() { ... } // from try @ 027128ec with catch @ 02712450
                       catch() { ... } // from try @ 02712988 with catch @ 02712450 */
                *(float *)(lVar6 + 0x38) = param_1;
                *(float *)(lVar6 + 0x3c) = param_2;
                *(float *)(lVar6 + 0x40) = param_3;
                uVar5 = UnityEngine_Component__get_transform_408b444(param_4,0);
                if (*(long *)(param_4 + 0x38) != 0) {
                  uVar13 = *(undefined4 *)(*(long *)(param_4 + 0x38) + 0x360);
                  uStack_78 = 0;
                  uStack_70 = 0;
                  uStack_68 = 0;
                  System_Nullable_Color____ctor_2037044
                            (0x3f800000,0x3f800000,0x3f800000,0x3f800000,&uStack_78,
                             *(undefined8 *)PTR_DAT_057dc5e0);
                  uStack_88 = uStack_70;
                  uStack_90 = uStack_78;
                  uStack_80 = uStack_68;
                  uVar5 = DG_Tweening_ShortcutExtensions__DOPath_1ee9134
                                    (uVar13,uVar5,lVar6,1,3,0x23,&uStack_90,0);
                  puVar2 = PTR_DAT_057f76e8;
                  if (*(long *)(param_4 + 0x38) != 0) {
                    uVar5 = DG_Tweening_TweenSettingsExtensions__SetEase_object__2450be4
                                      (uVar5,*(undefined8 *)(*(long *)(param_4 + 0x38) + 0x378),
                                       *(undefined8 *)PTR_DAT_057ccae0);
                    DG_Tweening_TweenSettingsExtensions__SetSpeedBased_object__245122c
                              (uVar5,*(undefined8 *)puVar2);
                    return;
                  }
                }
                goto LAB_0271251c;
              }
            }
          }
                    /* WARNING: Subroutine does not return */
          FUN_012d0ef8();
        }
      }
    }
  }
LAB_0271251c:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

