/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottlePositionAdjuster$$FindYPosForExtraBottle
float Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottlePositionAdjuster__FindYPosForExtraBottle (Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection_o* bottleCollection, int32_t insertionPosX, int32_t insertionPosY, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottlePositionAdjuster$$FindYPosForExtraBottle
   float 
   Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottlePositionAdjuster__FindYPosForExtraBottle
   (Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection_o* bottleCollection, int32_t
   insertionPosX, int32_t insertionPosY, const MethodInfo* method); */

undefined1  [16]
Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottlePositionAdjuster__FindYPosForExtraBottle_22faf48
          (undefined1 param_1 [16],undefined1 param_2 [16],long param_3,int param_4,
          undefined4 param_5)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  undefined1 auVar6 [16];
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  ulong uVar10;
  undefined8 uVar11;
  
  uVar11 = param_2._8_8_;
  uVar8 = param_2._4_4_;
  fVar7 = param_2._0_4_;
  if ((bRam0000000005c2a5ed & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05813f90);
    FUN_012d0dc8(PTR_DAT_057b43e8);
    FUN_012d0dc8(PTR_DAT_057b0e08);
    bRam0000000005c2a5ed = 1;
  }
  if ((((param_3 != 0) && (*(long *)(param_3 + 0x18) != 0)) &&
      (lVar2 = System_Collections_Generic_List_object___get_Item_21fc76c
                         (*(long *)(param_3 + 0x18),param_5,*(undefined8 *)PTR_DAT_057b0e08),
      puVar1 = PTR_DAT_057b43e8, lVar2 != 0)) &&
     (lVar3 = System_Collections_Generic_List_object___get_Item_21fc76c
                        (lVar2,0,*(undefined8 *)PTR_DAT_057b43e8), lVar3 != 0)) {
    Modules_Infrastructure_Common_Scripts_Component_AItem__GetItemLocalPosition_40e9e14(lVar3,0);
    iVar4 = *(int *)(lVar2 + 0x18);
    uVar10 = CONCAT44(uVar8,fVar7);
    if (0 < iVar4) {
      iVar5 = 0;
      do {
        if (param_4 != iVar5) {
          lVar3 = System_Collections_Generic_List_object___get_Item_21fc76c
                            (lVar2,iVar5,*(undefined8 *)puVar1);
          if (lVar3 == 0) goto LAB_023fb04c;
          Modules_Infrastructure_Common_Scripts_Component_AItem__GetItemLocalPosition_40e9e14
                    (lVar3,0);
          iVar4 = *(int *)(lVar2 + 0x18);
          fVar9 = (float)uVar10;
          uVar10 = uVar10 & 0xffffffff;
          uVar11 = 0;
          if (fVar7 <= fVar9) {
            uVar10 = (ulong)(uint)fVar7;
            uVar11 = 0;
          }
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < iVar4);
    }
    auVar6._8_8_ = uVar11;
    auVar6._0_8_ = uVar10;
    return auVar6;
  }
LAB_023fb04c:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

