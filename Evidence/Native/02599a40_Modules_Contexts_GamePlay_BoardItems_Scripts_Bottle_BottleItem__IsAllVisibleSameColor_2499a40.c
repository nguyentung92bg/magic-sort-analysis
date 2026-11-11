/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleItem$$IsAllVisibleSameColor
bool Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__IsAllVisibleSameColor (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleItem$$IsAllVisibleSameColor
   bool Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__IsAllVisibleSameColor
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* __this, const MethodInfo*
   method); */

bool Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__IsAllVisibleSameColor_2499a40
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  bool bVar4;
  int iVar5;
  ulong uVar6;
  uint uVar7;
  int iVar8;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  uVar6 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__IsAllWatersVisible_2498edc
                    ();
  if ((uVar6 & 1) == 0) {
    return false;
  }
  if ((bRam0000000005c2b2f9 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05795370);
    FUN_012d0dc8(PTR_DAT_057e1088);
    FUN_012d0dc8(PTR_DAT_05802d58);
    FUN_012d0dc8(PTR_DAT_057822a8);
    FUN_012d0dc8(PTR_DAT_057e2878);
    FUN_012d0dc8(PTR_DAT_05814548);
    FUN_012d0dc8(PTR_DAT_0578da10);
    bRam0000000005c2b2f9 = 1;
  }
  uStack_40 = 0;
  lStack_38 = 0;
  uStack_48 = 0;
  uVar6 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__IsEmpty_249577c(param_1);
  puVar3 = PTR_DAT_05814548;
  puVar2 = PTR_DAT_057e1088;
  puVar1 = PTR_DAT_05795370;
  if ((uVar6 & 1) == 0) {
    if (*(long *)(param_1 + 0x80) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    System_Collections_Generic_List_object___GetEnumerator_21fd5c8
              (&uStack_48,*(long *)(param_1 + 0x80),*(undefined8 *)PTR_DAT_057822a8);
    uVar7 = 0;
    iVar8 = 0;
    do {
      while( true ) {
        do {
          uVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                            (&uStack_48,*(undefined8 *)puVar2);
          if ((uVar6 & 1) == 0) {
            iVar8 = 7;
            goto LAB_02599ba0;
          }
          if (lStack_38 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_012d0ef0();
          }
        } while (*(long *)(lStack_38 + 0x20) == 0);
        iVar5 = Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterItem__GetColorId_1e99788
                          (*(long *)(lStack_38 + 0x20),0);
        if ((uVar7 & 0xff) != 0) break;
        uStack_50 = 0;
        System_Nullable_Int32Enum____ctor_203c774(&uStack_50,iVar5,*(undefined8 *)puVar3);
        uVar7 = (uint)uStack_50;
        iVar8 = uStack_50._4_4_;
      }
    } while (iVar5 == iVar8);
    iVar8 = 6;
LAB_02599ba0:
    System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
              (&uStack_48,*(undefined8 *)puVar1);
    bVar4 = iVar8 != 6;
  }
  else {
    bVar4 = false;
  }
  return bVar4;
}

