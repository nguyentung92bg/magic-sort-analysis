/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Mosaic.MosaicItem$$Prepare
void Modules_Contexts_GamePlay_Board_Items_Scripts_Mosaic_MosaicItem__Prepare (Modules_Contexts_GamePlay_Board_Items_Scripts_Mosaic_MosaicItem_o* __this, UnityEngine_Vector3_o viewOffset, Modules_Infrastructure_UI_Common_Scripts_Sorting_o sorting, Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* belongingBottle, System_Collections_Generic_List_BottleItem__o* belongingBottles, System_Collections_Generic_List_ColorId__o* requiredColors, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Mosaic.MosaicItem$$Prepare
   void Modules_Contexts_GamePlay_Board_Items_Scripts_Mosaic_MosaicItem__Prepare
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Mosaic_MosaicItem_o* __this, UnityEngine_Vector3_o
   viewOffset, Modules_Infrastructure_UI_Common_Scripts_Sorting_o sorting,
   Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* belongingBottle,
   System_Collections_Generic_List_BottleItem__o* belongingBottles,
   System_Collections_Generic_List_ColorId__o* requiredColors, const MethodInfo* method); */

void Modules_Contexts_GamePlay_Board_Items_Scripts_Mosaic_MosaicItem__Prepare_27465fc
               (float param_1,float param_2,float param_3,long param_4,undefined8 param_5,
               undefined8 param_6,undefined8 param_7,long param_8,long param_9)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined4 uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  float fVar13;
  undefined8 uVar14;
  float fVar15;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  ulong uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  ulong uStack_80;
  
  if ((bRam0000000005c2c6a1 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05817840);
    FUN_012d0dc8(PTR_DAT_057d60c8);
    FUN_012d0dc8(PTR_DAT_057d4150);
    FUN_012d0dc8(PTR_DAT_05814978);
    FUN_012d0dc8(PTR_DAT_05814878);
    FUN_012d0dc8(PTR_DAT_057ee050);
    FUN_012d0dc8(PTR_DAT_057ec5e8);
    FUN_012d0dc8(PTR_DAT_057f6050);
    FUN_012d0dc8(PTR_DAT_05813f90);
    FUN_012d0dc8(PTR_DAT_057f55a8);
    bRam0000000005c2c6a1 = 1;
  }
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_90 = 0;
  *(undefined8 *)(param_4 + 0x50) = param_7;
  FUN_012d0d74((undefined8 *)(param_4 + 0x50),param_7);
  if (*(long *)(param_4 + 0x58) != 0) {
    System_Collections_Generic_List_object___AddRange_21fcc58
              (*(long *)(param_4 + 0x58),param_8,*(undefined8 *)PTR_DAT_05814978);
    lVar10 = *(long *)(param_4 + 0x68);
    if (lVar10 != 0) {
      *(undefined4 *)(lVar10 + 0x18) = 0;
      *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
      puVar6 = PTR_DAT_05817840;
      puVar5 = PTR_DAT_05814878;
      puVar4 = PTR_DAT_057ec5e8;
      puVar3 = PTR_DAT_057d60c8;
      if (param_9 != 0) {
        System_Collections_Generic_List_Int32Enum___GetEnumerator_2052720
                  (&uStack_a8,param_9,*(undefined8 *)PTR_DAT_057f6050);
        uStack_88 = uStack_a0;
        uStack_90 = uStack_a8;
        uStack_80 = uStack_98;
        while (uVar9 = System_Collections_Generic_List_Enumerator_Int32Enum___MoveNext_3ea568c
                                 (&uStack_90,*(undefined8 *)puVar3), uVar8 = uStack_80,
              (uVar9 & 1) != 0) {
          if (*(long *)(param_4 + 0x68) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_012d0ef0();
          }
          uVar7 = (undefined4)uStack_80;
          uVar9 = System_Collections_Generic_List_Int32Enum___Contains_2051fc0
                            (*(long *)(param_4 + 0x68),uStack_80 & 0xffffffff,*(undefined8 *)puVar4)
          ;
          if ((uVar9 & 1) == 0) {
            lVar10 = *(long *)(param_4 + 0x68);
            if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_012d0ef0();
            }
            lVar11 = *(long *)(lVar10 + 0x10);
            lVar12 = *(long *)puVar5;
            *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
            if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_012d0ef0();
            }
            uVar2 = *(uint *)(lVar10 + 0x18);
            if (uVar2 < *(uint *)(lVar11 + 0x18)) {
              *(uint *)(lVar10 + 0x18) = uVar2 + 1;
              *(undefined4 *)(lVar11 + (long)(int)uVar2 * 4 + 0x20) = uVar7;
            }
            else {
              (**(code **)(*(long *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x58) + 8))
                        (lVar10,uVar8 & 0xffffffff);
            }
          }
        }
        System_Collections_Generic_List_Enumerator_Int32Enum___Dispose_3ea5688
                  (&uStack_90,*(undefined8 *)puVar6);
        lVar10 = *(long *)(param_4 + 0x68);
        if (lVar10 == 0) goto LAB_028468dc;
      }
      *(undefined4 *)(param_4 + 0x60) = *(undefined4 *)(lVar10 + 0x18);
      if (*(long *)(param_4 + 0x58) != 0) {
        iVar1 = *(int *)(*(long *)(param_4 + 0x58) + 0x18);
        if (cRam0000000005c28262 == '\0') {
          FUN_012d0dc8(PTR_DAT_05805c10);
          cRam0000000005c28262 = '\x01';
        }
        uVar14 = *(undefined8 *)(*(long *)(*(long *)PTR_DAT_05805c10 + 0xb8) + 0x3c);
        fVar15 = *(float *)(*(long *)(*(long *)PTR_DAT_05805c10 + 0xb8) + 0x44);
        fVar13 = (float)Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottlePositionAdjuster__GetDistanceBetweenBottles_22fade0
                                  (0);
        fVar13 = fVar13 * (float)(iVar1 + -1) * 0.5;
        *(ulong *)(param_4 + 0x34) =
             CONCAT44(param_2 + (float)((ulong)uVar14 >> 0x20) * fVar13,
                      param_1 + (float)uVar14 * fVar13);
        *(float *)(param_4 + 0x3c) = param_3 + fVar15 * fVar13;
        if ((param_8 != 0) && (*(long *)(param_4 + 0x48) != 0)) {
          Modules_Contexts_GamePlay_Board_Items_Scripts_Mosaic_MosaicView__Prepare_2746954
                    (*(long *)(param_4 + 0x48),param_5,param_6,*(undefined4 *)(param_8 + 0x18),
                     *(undefined8 *)(param_4 + 0x68));
          return;
        }
      }
    }
  }
LAB_028468dc:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

