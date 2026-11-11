/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottlePositionAdjuster$$GetBottlePositionWithLongBottles
UnityEngine_Vector3_o Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottlePositionAdjuster__GetBottlePositionWithLongBottles (int32_t bottleCount, int32_t x, int32_t y, float yPos, Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleCollectionCameraConfig_o* bottleCollectionCameraConfig, Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection_o* bottleCollection, bool useDefaultCalculation, int32_t distanceBetweenRowsAsUnit, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottlePositionAdjuster$$GetBottlePositionWithLongBottles
   UnityEngine_Vector3_o
   Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottlePositionAdjuster__GetBottlePositionWithLongBottles
   (int32_t bottleCount, int32_t x, int32_t y, float yPos,
   Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleCollectionCameraConfig_o*
   bottleCollectionCameraConfig, Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection_o*
   bottleCollection, bool useDefaultCalculation, int32_t distanceBetweenRowsAsUnit, const
   MethodInfo* method); */

undefined1  [16]
Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottlePositionAdjuster__GetBottlePositionWithLongBottles_22fb264
          (undefined8 param_1,int param_2,int param_3,undefined4 param_4,long param_5,long param_6,
          uint param_7,undefined4 param_8)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  float fVar10;
  undefined1 auVar11 [16];
  undefined8 uVar12;
  float fVar13;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  
  if ((bRam0000000005c2a5f1 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057d0ba8);
    FUN_012d0dc8(PTR_DAT_057b41c8);
    FUN_012d0dc8(PTR_DAT_058093f0);
    FUN_012d0dc8(PTR_DAT_05768d80);
    FUN_012d0dc8(PTR_DAT_05813f90);
    FUN_012d0dc8(PTR_DAT_057b43e8);
    FUN_012d0dc8(PTR_DAT_057b0e08);
    bRam0000000005c2a5f1 = 1;
  }
  uStack_a8 = 0;
  lStack_a0 = 0;
  uStack_b0 = 0;
  if (param_5 != 0) {
                    /* try { // try from 023fb320 to 024fb323 has its CatchHandler @ 023fb32c */
    fVar10 = *(float *)(param_5 + 0x30);
                    /* try { // try from 023fb324 to 024fb34f has its CatchHandler @ 023fae60 */
    if ((param_7 & 1) == 0) {
      fVar13 = fVar10 + *(float *)(param_5 + 0x24);
    }
    else {
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 023fb320 with catch @ 023fb32c
                        */
      fVar13 = 0.0;
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 023fb250 with catch @ 023fb330
                        */
      if (param_2 + -1 != 0) {
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 023fb170 with catch @ 023fb334
                        */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 023fb1b0 with catch @ 023fb338
                        */
                    /* try { // try from 023fb350 to 024fb353 has its CatchHandler @ 023fb3d4 */
        fVar13 = (((fVar10 + *(float *)(param_5 + 0x20) * 5.0) - fVar10 * (float)(6 - param_2)) -
                 fVar10) / (float)(param_2 + -1);
      }
    }
    if (param_6 != 0) {
      lVar6 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottlePositionAdjuster__FindLongBottlesIntersectedWithRow_22fa87c
                        (*(undefined8 *)(param_6 + 0x18),param_4,param_8);
      puVar3 = PTR_DAT_057b0e08;
                    /* try { // try from 023fb398 to 024fb3bf has its CatchHandler @ 023fb3e0 */
      if ((*(long *)(param_6 + 0x18) != 0) &&
         (lVar7 = System_Collections_Generic_List_object___get_Item_21fc76c
                            (*(long *)(param_6 + 0x18),param_4,*(undefined8 *)PTR_DAT_057b0e08),
         puVar5 = PTR_DAT_057d0ba8, puVar4 = PTR_DAT_057b41c8, puVar2 = PTR_DAT_05768d80, lVar7 != 0
         )) {
                    /* try { // try from 023fb3c0 to 024fb3cb has its CatchHandler @ 023fae60 */
                    /* try { // try from 023fb3cc to 024fb3d3 has its CatchHandler @ 023fb3e0 */
                    /* catch() { ... } // from try @ 023fb350 with catch @ 023fb3d4 */
        System_Collections_Generic_List_object___GetEnumerator_21fd5c8
                  (&uStack_c8,lVar7,*(undefined8 *)PTR_DAT_05768d80);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 023fb398 with catch @ 023fb3e0
                       catch(type#2 @ 00000000) { ... } // from try @ 023fb3cc with catch @ 023fb3e0
                        */
        uStack_a8 = uStack_c0;
        uStack_b0 = uStack_c8;
        lStack_a0 = lStack_b8;
        do {
          uVar8 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                            (&uStack_b0,*(undefined8 *)puVar4);
          if ((uVar8 & 1) == 0) {
            bVar1 = false;
            goto LAB_023fb414;
          }
          if (lStack_a0 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_012d0ef0();
          }
        } while (*(char *)(lStack_a0 + 0xec) == '\0');
        bVar1 = true;
LAB_023fb414:
        System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                  (&uStack_b0,*(undefined8 *)puVar5);
        if (lVar6 != 0) {
          if (bVar1 || 0 < *(int *)(lVar6 + 0x18)) {
            if ((*(long *)(param_6 + 0x18) == 0) ||
               (lVar7 = System_Collections_Generic_List_object___get_Item_21fc76c
                                  (*(long *)(param_6 + 0x18),param_4,*(undefined8 *)puVar3),
               lVar7 == 0)) goto LAB_023fb630;
            if (param_3 == 0) {
              lVar7 = System_Collections_Generic_List_object___get_Item_21fc76c
                                (lVar7,0,*(undefined8 *)PTR_DAT_057b43e8);
              if (lVar7 == 0) goto LAB_023fb630;
              fVar10 = (float)Modules_Infrastructure_Common_Scripts_Component_AItem__GetItemLocalPosition_40e9e14
                                        (lVar7,0);
              fVar10 = fVar10 - fVar13;
            }
            else {
              lVar7 = System_Collections_Generic_List_object___get_Item_21fc76c
                                (lVar7,param_3 + -1,*(undefined8 *)PTR_DAT_057b43e8);
              if (lVar7 == 0) goto LAB_023fb630;
              fVar10 = (float)Modules_Infrastructure_Common_Scripts_Component_AItem__GetItemLocalPosition_40e9e14
                                        (lVar7,0);
              fVar10 = fVar13 + fVar10;
            }
            uVar12 = 0;
            uVar8 = CONCAT44(0,fVar10);
            auVar11._8_8_ = 0;
            auVar11._0_8_ = uVar8;
            if (0 < *(int *)(lVar6 + 0x18)) {
              System_Collections_Generic_List_object___GetEnumerator_21fd5c8
                        (&uStack_c8,lVar6,*(undefined8 *)puVar2);
              uStack_a8 = uStack_c0;
              uStack_b0 = uStack_c8;
              lStack_a0 = lStack_b8;
              fVar10 = fVar13;
              if (param_3 == 0) {
                fVar10 = -fVar13;
              }
              while (uVar9 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                                       (&uStack_b0,*(undefined8 *)puVar4), (uVar9 & 1) != 0) {
                if (lStack_a0 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_012d0ef0();
                }
                if (ABS(*(float *)(lStack_a0 + 0x28) - (float)uVar8) < fVar13) {
                  uVar8 = (ulong)(uint)(*(float *)(lStack_a0 + 0x28) + fVar10);
                  uVar12 = 0;
                }
              }
              System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                        (&uStack_b0,*(undefined8 *)puVar5);
              auVar11._8_8_ = uVar12;
              auVar11._0_8_ = uVar8;
            }
          }
          else {
            auVar11 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottlePositionAdjuster__GetBottlePosition_22fb114
                                (param_1,param_2,param_3,param_5,param_7 & 1);
          }
          return auVar11;
        }
      }
    }
  }
LAB_023fb630:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

